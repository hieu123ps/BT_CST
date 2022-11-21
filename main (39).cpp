#include<iostream>
#include<cmath>
#define max 100
using namespace std;

void find(int a[max][max], int n, int k )
{
        int high = a[k][0];
        for(int j = 0; j < n; j++)
        {
            if(high < a[k][j])
            {
                high = a[k][j];
            }
        }
         int min = a[k][0];
        for(int j = 0; j < n; j++)
        {
            if(min > a[k][j])
            {
                min = a[k][j];
            }
        }
        cout << min << " " << high;
}
void enter(int a[max][max], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

int main()
{
   int a[max][max];
   int n, m, k;
   cin >> m >> n >> k;
   //m dong, n cot
   enter(a, m, n);
   
   if(k>=m)
   {
       cout << -1 << " " << -1;
   }else{
       find(a, n, k);
   }
   
}