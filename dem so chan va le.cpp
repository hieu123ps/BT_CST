#include<iostream>
#define max 100
using namespace std;
int main()
{
    int a[max]; int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
        {
            d++;
        }
    }
    cout << d << " " << n-d;
}