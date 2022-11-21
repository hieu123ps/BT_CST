#include <iostream>
using namespace std;
int main () {
int a,b,c,d,e;
int min, secondMin;


cin>>a>>b>>c>>d>>e;

min = a < b ? a : b;
secondMin = a =< b ? b : a;

if (c < min)
{
    secondMin = min;
    min = c;
}
else if (c =< secondMin)
{
    secondMin = c;
}

if (d < min)
{
    secondMin = min;
    min = d;
}
else if (d =< secondMin)
{
    secondMin = d;
}

if (e < min)
{
    secondMin = min;
    min = e;
}
else if (e =< secondMin)
{
    secondMin = e;
}

cout<< secondMin << endl;

return 0;

}
