#include<iostream>
#include<string>
using namespace std;


bool Pald(string x){
    switch(x){
    case '()':
    case '{}':
    case '[]':
        return true;
    }
    return false;
}

int main()
{
    string s; getline(cin, s);
    int left = 0;
    int right = s.size();
    while(left < right)
    {
        string res = s[left] + s[right];
        if(Pald(res) == false){cout << "NO"; break;}
        left++;
        right--;
    }

}
