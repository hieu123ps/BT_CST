#include<iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cout << "A[" << i <<"]:";
        cin >> a[i];
    }
    int s[n];
    s[0] = a[0];
    int res = s[0];
    for (int i = 1; i < n; i++){
        if (s[i-1] > 0){
                s[i] = s[i-1] + a[i];
        }
        else{
                s[i] = a[i];
        }
        if(s[i] > res){
                res = s[i];
        }
    }
    cout << res;
    return 0;
}
