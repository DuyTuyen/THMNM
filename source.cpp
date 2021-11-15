#include <iostream>
using namespace std;
int tong(int a, int b);
{
	return a+b;
}
int hieu(int a, int b);
{
	return	a-b;
}
bool tinhChanLe(int a)
{
	if(a%2==0)
		return true;
	else
		return false;
}



int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	if(pheptoan == "-")
	cout<<"Hieu 2 so la"<<hieu(a,b);
	if(pheptoan == "+")
	cout<< "Tong 2 so la"<<tong(a,b);
	if(tinhChanLe(a)==true)
		cout<<"La so chan"<<endl;
	else
		cout<<"La so le"<<endl;
	system("pause");
	return 0;
}
//Câu 19

