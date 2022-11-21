#include <iostream>
#include <string>
using namespace std;

struct Sanpham{
	string id; 
	int namsx, soluong, gia;
	string name;	
};
Sanpham sp[100];		

void Nhapsanpham(Sanpham sp[], int n){
		for(int i = 0; i < n; i++)
		{
			cout << "Enter name: ";
			cin.ignore(1);
			getline(cin, sp[i].name);
			
			cout << "Enter id: ";
			getline(cin, sp[i].id);
			
			cout << "Enter gia ban: ";
			cin >> sp[i].gia;
			cout << "Enter so luong: ";
			cin >> sp[i].soluong;
			cout << "Enter nam san xuat: ";
			cin >> sp[i].namsx;
	}
	
}

void xuatdulieu(Sanpham sp[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Ma san pham: " << sp[i].id << endl;
		cout << "Ten san pham: " << sp[i].name << endl;
		cout << "Nam sx: " << sp[i].namsx << endl;
		cout << "So luong: " << sp[i].soluong << endl;
		cout << "Gia san pham: " << sp[i].gia<< endl;
	}
}
void outline(void){
	cout << "\n-------------------------------------\n";
	}
int main()
{

	int n;
	string check;
	
	cout << "Enter n sp: "; cin >> n;
	Nhapsanpham(sp, n);
	
	outline();
	
	xuatdulieu(sp, n);
	for(int i = 0; i < n; i++){
		{
			if(sp[i].namsx == 2020){
				xuatdulieu(sp, n);
			}
		}
	}
	
	cout << "Enter name of check: ";
	cin.ignore();
	getline(cin, check);
	for(int i = 0; i < n; i++)
	{
		if( check == sp[i].name)
		{
			cout << sp[i].gia;
		}
	}
	
	
}
