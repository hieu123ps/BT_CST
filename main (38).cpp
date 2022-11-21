#include<iostream>
#include<iomanip>
#define max 100
using namespace std;

int main()
{
   int a[max][max];
   int n, m, k; cin >> n >> m >> k;
   for(int i = 0; i < m ; i++)
   {
       for(int j = 0; j < n; j++)
       {
           cin >> a[i][j];
       }
   }
   for(int i = 0; i < m ; i++)
   {
       for(int j = 0; j < n; j++)
       {
           cout <<  a[i][j] << " ";
           if(j==n)
           {
               cout << endl;
           }
       }
   }
   
   int dx = 0, dy = 0;
   if(k>=m)
   {
       dy = 0;
   }
   if(k>=n)
   {
       dx = 0;
   }
        
          for(int j = 0; j < n; j++)
          {
              dx+=a[k][j]; // tong hang
          }
          for(int i = 0; i < m; i++)
          {
              dy+=a[i][k]; // tong cot
          }
        
     cout << dx << " " << dy;  
    return 0;
}