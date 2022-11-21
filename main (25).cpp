========================================== BÀI 1 ==========================================
#include<iostream>
using namespace std;
#include<fstream>

// hàm đọc file - đọc dữ liệu từ file
void Doc_File(ifstream& filein, int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		filein >> a[i];
	}
}

// hàm xuất mảng 
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// hàm tìm max
int Tim_Max(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
int main()
{
	ifstream filein; // đối tượng đọc file
	filein.open("INPUT.TXT", ios_base::in);
	int a[100];
	int n = 0;

	filein >> n; // đọc giá trị dòng đầu tiên từ file vào cho biến n
	Doc_File(filein, a, n);
	cout << "\n\n\t\t DAY SO NGUYEN\n";
	Xuat_Mang(a, n);

	ofstream fileout; // đối tượng ghi file
	fileout.open("KETQUA.TXT", ios_base::out);
	int MAX = Tim_Max(a, n);

	fileout << MAX; // ghi giá trị trong biến MAX vào cho file

	fileout.close();
	filein.close();
	system("pause");
	return 0;
}


========================================== BÀI 2 ==========================================
#include<iostream>
using namespace std;
#include<fstream>
#include<math.h>

// hàm đọc file - đọc dữ liệu từ file
void Doc_File(ifstream& filein, int a[], int &n)
{
	while (filein.eof() == false)
	{
		filein >> a[n]; // đọc giá trị từ file vào cho phần tử thứ n của mảng
		n++; // số lượng phần tử mảng tăng lên
	}
}

// hàm xuất mảng 
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}


// hàm đếm số lượng chữ số của n
int Dem(int n)
{
	int dem = 0;
	while (n != 0)
	{
		n = n / 10;
		dem++;
	}
	return dem;
}

// hàm kiểm tra số amstrong
bool Kiem_Tra_So_Amstrong(int n)
{
	int x = Dem(n);
	int s = 0;
	int tam = n;
	while (n != 0)
	{
		s = s + pow((n % 10), x);
		n = n / 10;
	}

	if (s == tam)
	{
		return true;
	}
	return false;
}

// hàm ghi các giá trị là số amstrong vào file AMSTRONG.TXT
void Ghi_File(ofstream& fileout, int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (Kiem_Tra_So_Amstrong(a[i]) == true)
		{
			fileout << a[i] << " ";
		}
	}
}

int main()
{
	ifstream filein; // đối tượng đọc file
	filein.open("INPUT.TXT", ios_base::in);
	int a[100];
	int n = 0;
	Doc_File(filein, a, n);
	cout << "\n\n\t\t DAY SO NGUYEN\n";
	Xuat_Mang(a, n);

	
	ofstream fileout; // đối tượng ghi file
	fileout.open("AMSTRONG.TXT", ios_base::out);
	
	Ghi_File(fileout, a, n);

	

	fileout.close();
	filein.close();
	system("pause");
	return 0;
}



========================================== BÀI 3 ==========================================
#include<iostream>
using namespace std;
#include<fstream>

// hàm đọc file - đọc dữ liệu từ file
void Doc_File(ifstream& filein, int a[], int &n)
{
	while (filein.eof() == false)
	{
		filein >> a[n]; // đọc giá trị từ file vào cho phần tử thứ n của mảng
		n++; // số lượng phần tử mảng tăng lên
		char x;
		filein >> x; // đọc dấu ',' vào cho biến x để con trỏ chỉ vị nhảy qua dấu ','
	}
}

// hàm xuất mảng 
void Xuat_Mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "  ";
	}
}

// hàm tìm ước chung lớn nhất của 2 số nguyên
int UCLN(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else if (x < y)
		{
			y = y - x;
		}
	}
	return x;
}
// hàm tìm ước chung lớn nhất của mảng
int Tim_UCLN(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = UCLN(x, a[i]);
	}
	return x;
}
// hàm tìm bội chung nhỏ nhất của 2 phần tử 
int BCNN(int x, int y)
{
	return (x * y) / UCLN(x, y);
}

// hàm tìm bội chung nhỏ nhất của mảng
int Tim_BCLN(int a[], int n)
{
	int x = a[0];
	for (int i = 1; i < n; i++)
	{
		x = BCNN(x, a[i]);
	}
	return x;
}
int main()
{
	ifstream filein; // đối tượng đọc file
	filein.open("INPUT.TXT", ios_base::in);
	int a[100];
	int n = 0;
	Doc_File(filein, a, n);
	cout << "\n\n\t\t DAY SO NGUYEN\n";
	Xuat_Mang(a, n);

	
	ofstream fileout; // đối tượng ghi file
	
	int UCLN = Tim_UCLN(a, n);
	int BCNN = Tim_BCLN(a, n);

	fileout.open("UCLN.TXT", ios_base::out);
	fileout << UCLN;
	fileout.close(); // phải đóng file lại trước khi mở file mới

	fileout.open("BCNN.TXT", ios_base::out);
	fileout << BCNN;

	

	fileout.close();
	filein.close();
	system("pause");
	return 0;
}

========================================== BÀI 4 ==========================================

#include<iostream>
using namespace std;
#include<fstream>

// khai báo cấu trúc phân số
struct PHANSO
{
	int tuso;
	int mauso;
};

// hàm đọc 1 phân số từ file
void Doc_1_Phan_So(ifstream &filein, PHANSO &ps)
{
	filein >> ps.tuso;
	char x;
	filein >> x; // đọc ký tự '/' vào cho biến x để con trỏ chỉ vị của file bỏ qua '/'
	filein >> ps.mauso;
}

// hàm xuất phân số
void Xuat_Phan_So(PHANSO ps)
{
	cout << ps.tuso << "/" << ps.mauso;
}

// hàm đọc danh sách phân số từ file
void Doc_File(ifstream &filein, PHANSO ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Doc_1_Phan_So(filein, ds[i]);
	}
}

// hàm xuất danh sách phân số
void Xuat_Danh_Sach_Phan_So(PHANSO ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		Xuat_Phan_So(ds[i]);
	}
}

// hàm tìm UCLN của 2 số nguyên số
int Tim_UCLN(int x, int y)
{
	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else if (x < y)
		{
			y = y - x;
		}
	}
	return x;
}

// hàm rút gọn danh sách phân số
void Rut_Gon_Danh_Sach_Phan_So(PHANSO ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int x = Tim_UCLN(ds[i].tuso, ds[i].mauso);
		ds[i].tuso = ds[i].tuso / x;
		ds[i].mauso = ds[i].mauso / x;
	}
}
// hàm ghi danh sách phân số rút gọn vào file RUTGONPHANSO.TXT
void Ghi_File_RutGon(ofstream &fileout, PHANSO ds[], int n)
{
	Rut_Gon_Danh_Sach_Phan_So(ds, n);
	fileout.open("RUTGONPHANSO.TXT", ios_base::out);
	for (int i = 0; i < n; i++)
	{
		fileout << ds[i].tuso << "/" << ds[i].mauso << endl;
	}
	fileout.close();
}

// hàm tìm phân số lớn nhất và ghi vào file OUTPUT.TXT
void Ghi_File_PHANSO_MAX(ofstream& fileout, PHANSO ds[], int n)
{
	float max = (float)ds[0].tuso / ds[0].mauso; 
	int k = 0; // giữ chỉ số của phân số max
	for (int i = 1; i < n; i++)
	{
		float x = (float)ds[i].tuso / ds[i].mauso;
		if (max < x)
		{
			max = x;
			k = i;
		}
	}

	fileout.open("OUTPUT.TXT", ios_base::out);
	fileout << ds[k].tuso << "/" << ds[k].mauso;
	fileout.close();
}

int main()
{
	ifstream filein; // đối tượng đọc file
	filein.open("INPUT.TXT", ios_base::in);
	PHANSO ds[100];
	int n;

	filein >> n;
	Doc_File(filein, ds, n);

	cout << "\n\n\t\t DANH SACH PHAN SO\n";
	Xuat_Danh_Sach_Phan_So(ds, n);

	ofstream fileout; // đối tượng ghi file
	Ghi_File_RutGon(fileout, ds, n); // gọi lại hàm ghi phân số sau ghi rút gọn

	Ghi_File_PHANSO_MAX(fileout, ds, n);

	filein.close();
	system("pause");
	return 0;
}