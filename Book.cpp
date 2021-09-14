#include "Book.h"

using namespace std;
//静态变量初始化
int Book::bookNumber = 0;
//图书状态显示
void Book::Display()
{
	cout << "编号：" << setw(9)<<code<<"书名"<<setw(9)<<name<<"作者："
		<<setw(9)<<author<<"出版社："<<setw(9)<<press<<"单价："<<setw(5)
		<<price<<"借书时间："<<setw(10)<<lendTime<<"借书期限(天): "<<deadLine<<endl;
}
//输入输出操作符重载
istream& operator>>(istream& input, Book& book)
{
	cout << "请输入编号：";
	input >> book.code;
	cout << "请输入书名：";
	input >> book.name;
	cout << "请输入作者：";
	input >> book.author;
	cout << "请输入出版社：";
	input >> book.press;
	cout << "请输入单价：";
	input >> book.price;
	return input;
}
ostream& operator<<(ostream& output, Book& book)
{
	output << "编号：" << setw(9) << setiosflags(ios::left) << book.code << "书名" << setw(9) << setiosflags(ios::left) << book.name << "作者："
		<< setw(9) << setiosflags(ios::left) << book.author << "出版社：" << setw(9) << setiosflags(ios::left) << book.press << "单价：" << setw(5)
		<< setiosflags(ios::left) << book.price << endl;
	return output;
}