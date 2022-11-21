
#include<iostream>
#include<string>
using namespace std;
int main()
{
        string a, b;
        int pos;
        getline(cin,a);
        cin>>b;
        int dem = 0;
        for (int i=1;(pos=a.find(b)) != -1 ;i++)
        {
                a=a.substr(++pos);
                dem+=i;
        }


}
