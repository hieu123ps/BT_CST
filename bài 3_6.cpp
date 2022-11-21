#include <iostream>
#include<string>
using namespace std;

// chuyen sang dang so
void ascii(string &s)
{
	for(int i = 0; i <= s.length(); i++)
	{
		switch(s[i])
		{
			case 'A': case 'B': case 'C': 
			s[i]= '2';
				break;
				
			case 'D': case 'E': case 'F': 
			s[i]= '3';
				break;
				
				case 'G': case 'H': case 'I': 
			s[i]= '4';
				break;
				
			case 'K': case 'J': case 'L': 
			s[i]= '5';
				break;
				
			case 'M': case 'N': case 'O': 
			s[i]= '6';
				break;
			
			case 'P': case 'Q': case 'R': case 'S': 
			s[i]= '7';
				break;
				
			case 'T': case 'V': case 'U': 
			s[i]= '8';
				break;
				
			case 'W': case 'X': case 'Y': case 'Z': 
			s[i]= '9';
				break;
					
		}
	}	
	cout << endl;
	cout<<"After convert: "<<s;
}
// chuyen sang chu cai in hoa	
void convert(string &s){
	for(int i=0; i<=s.length(); i++)
	{
      if(s[i]>=97&&s[i]<=122)
         s[i]=s[i]-32;
   	}
}

int main(){
   string s;
   int i;
   cout<<"Enter words: ";
   getline(cin, s);
   convert(s);
   ascii(s);
}
