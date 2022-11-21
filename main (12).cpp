#include <iostream>
#include <string.h>
using namespace std;

int WordCount(string str, int length)
{
    int word = (str[0] != ' ');
    for (int i = 0; i < length - 1; i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
        {
            word++;
        }
    }
    return word;
}
 
void Correct(string str, int length)
{
    int first = 0, last = length;
    // Xoa dau cach dau
    while (str[first] == ' '){
    	first++;
	}
    // xoa dau cach cuoi
    while (str[last] == ' '){
    	 last--;
	}
         cout << str;
    }

 
int main()
{
    string s;
    getline(cin, s);
    int length = s.length(); 
    cout << WordCount(s, length) << endl;
    Correct(s, length);
}
