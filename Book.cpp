#include "Book.h"

using namespace std;
//��̬������ʼ��
int Book::bookNumber = 0;
//ͼ��״̬��ʾ
void Book::Display()
{
	cout << "��ţ�" << setw(9)<<code<<"����"<<setw(9)<<name<<"���ߣ�"
		<<setw(9)<<author<<"�����磺"<<setw(9)<<press<<"���ۣ�"<<setw(5)
		<<price<<"����ʱ�䣺"<<setw(10)<<lendTime<<"��������(��): "<<deadLine<<endl;
}
//�����������������
istream& operator>>(istream& input, Book& book)
{
	cout << "�������ţ�";
	input >> book.code;
	cout << "������������";
	input >> book.name;
	cout << "���������ߣ�";
	input >> book.author;
	cout << "����������磺";
	input >> book.press;
	cout << "�����뵥�ۣ�";
	input >> book.price;
	return input;
}
ostream& operator<<(ostream& output, Book& book)
{
	output << "��ţ�" << setw(9) << setiosflags(ios::left) << book.code << "����" << setw(9) << setiosflags(ios::left) << book.name << "���ߣ�"
		<< setw(9) << setiosflags(ios::left) << book.author << "�����磺" << setw(9) << setiosflags(ios::left) << book.press << "���ۣ�" << setw(5)
		<< setiosflags(ios::left) << book.price << endl;
	return output;
}