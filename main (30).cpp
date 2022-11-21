
#include<iostream>

using namespace std;

    bool check(int n)
    {
        int dem  = 0;
        for(int i = 1; i <= n; i++)
        {
            if (n%i==0)
            {
                dem+=1;
            }
        }
        if(dem == 2)
        {
            return false;
        }
        else return true;
    }
    
int main()
{ 
    int n;cin >> n;
    if(n <= 1 || check(n))
    { 
        cout << "Khong";
    }
    else{
        cout << "Co";
    }
}
