
#include <iostream>
#include <iomanip>
using namespace std;
class DATE
{
private:
    int d,m,y;
public:
    DATE();
    DATE(int td,int tm, int ty);

    int GetDay ();
    int GetMonth ();
    int GetYear ();
    
    friend istream& operator>>(istream& tin , DATE& td);
    friend ostream& operator<<(ostream& tout, DATE& td);
    friend bool operator<(DATE d1, DATE d2);
    friend bool operator>(DATE d1, DATE d2);
    friend bool operator==(DATE d1, DATE d2);
    
    
};
DATE::DATE(){
    d = 0;
    m = 0;
    y = 0;
}
DATE::DATE(int td, int tm, int ty){
    d = td;
    m = tm;
    y = ty;
}

int DATE::GetDay(){
    return d;
}
int DATE::GetMonth(){
    return m;
}
int DATE::GetYear(){
    return y;
}
istream& operator>>(istream& tin , DATE& td){
    tin>>td.d>>td.m>>td.y;
    return tin;
}
ostream& operator<<(ostream& tout, DATE& td){
    tout<< td.d << " " << td.m << " " << td.y <<  endl;
    return tout;
}

    bool operator > (DATE d1, DATE d2){
    if(d1.y>d2.y){
        return true;
    }
    else if(d1.y<d2.y){
        return false;
    }
    else 
    {
        if(d1.m>d2.m){
            return true;
        }    
        else if(d1.m<d2.m){
            return false;
        }
        else{
            if(d1.d>d2.d){
                return true;
            }
            else{
                return false;
            }
        }
    }
}


bool operator < (DATE d1, DATE d2){
    if(d2 > d1){
        return true;
    }
    else return false;
}

bool operator == (DATE d1, DATE d2){
    if(d1.d==d2.d && d1.m==d2.m && d1.y==d2.y)
        return true;
    else 
        return false;
}
int main()
{
    DATE t1, t2, t3; 
    cin>>t1>>t2>>t3;
    if(t1>t2&&t2>t3)
    {
        cout << t3;
    }
    if(t1>t3&&t3>t2)
    {
        cout << t2;
    }
    if(t2>t3&&t3>t1)
    {
        cout << t1;
    }
    if(t2>t1&&t1>t3)
    {
        cout << t3;
    }
    if(t3>t1&&t1>t2)
    {
        cout << t2;
    }
    if(t3>t2&&t2>t1)
    {
        cout << t1;
    }
    return 0;
}
