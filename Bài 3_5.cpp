#include <iostream>
#include<string>
using namespace std;

void convert_up(string &s1){
	for(int i=0; i<=s1.length(); i++)
	{
      if(s1[i]>=97&&s1[i]<=122)
         s1[i]=s1[i]-32;
   	}
	   cout<<"After convert: "<<s1;
}

void convert_low(string &s2){
	for(int i=0; i<=s2.length(); i++)
	{
      if(s2[i]>=65&&s2[i]<=90)
         s2[i]=s2[i]+32;
   	}
	   cout<<"After convert: "<<s2;
}

int main(){
   string s1, s2;
   int i;
   cout<<"Enter words: ";
   getline(cin, s1);
   cout << "Before convert: "<< s1 << endl;
   convert_up(s1);
   cout << "\n--------------------------------\n";
   cout <<"Enter words: ";
   getline(cin, s2);
   cout << "Before convert: "<< s2 << endl;
   convert_low(s2);
   
}
