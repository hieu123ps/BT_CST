#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    if(n<50)
    {
        sum =600*n;
    }
    if(n>=50 && n<=150)
    {
        int t = n - 50;
        sum = 50*600+t*400;
    } 
    if(n>150)
    {
        int t = n - 150 - 50;
        sum = t*200 + 150*400 +50*600;
    }
    cout << sum+150000;
}