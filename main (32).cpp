#include<iostream>
#include<iomanip>
#define max 100
using namespace std;

double find_arrMAX(double b[], int n){
	double MAX = b[0];
	for(int i = 0; i < n; i++){
		if (b[i] > MAX){
			MAX = b[i];
			}
		}
	return MAX;
	}	
double find_arrMIN(double b[], int n){
	double MIN = b[0];
	for(int i = 0; i < n; i++){
		if (b[i] < MIN){
			MIN = b[i];
			}
		}
	return MIN;
	}
    double trungbinh(double sum, int x)
    {
        double dx = (double)x;
        return sum/x;
    }
    void trung_binh_diem(double a[max][max], int n, int m)
    {
        double b[max];
        for(int i = 0; i < n; i++)
        {
            double sum = 0;
            for(int j = 0; j < m; j++)
            {
                sum+=a[i][j];
            }
           b[i] = trungbinh(sum, m);
        }
        cout << find_arrMIN(b, n) << " ";
        cout << find_arrMAX(b, n);
    }
    void show(double a[max][max], int n, int m)
    {
        cout << n << " " << m << endl;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                
                cout << a[i][j] <<" ";
                if(j==m-1)
                {
                    cout << endl;
                }
            }
        }       
        
    }
    void enter(double a[max][max], int n, int m)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
    }

int main()
{
    int n, m;  //m dong, n cout
    double a[max][max];
    cin >> n >> m;
   
    enter(a, n, m);
    show(a, n, m);
    trung_binh_diem(a, n, m);
    return 0;
}