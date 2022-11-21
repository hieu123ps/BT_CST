#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int UCLN(int a, int b){
    a = abs (a);
    b = abs (b);
  if (a == 0 || b == 0)
    {
      return a + b;
    }
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else if(a<b)
        {
            b-=a;
        }
    }
    return a;
}
int BCNN(int a, int b){
    return a*b/UCLN(a,b);
}

int BCNN_Mang(int a[],int n){
        int temp = BCNN(a[0], a[1] );
        for(int i=2;i<n;i++){
            temp = BCNN(temp, a[i]);    
        }
        return temp;
    }

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    cout << BCNN_Mang(a, n);
}