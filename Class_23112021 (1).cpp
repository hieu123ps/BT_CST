
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
    
    DATE NextDay ();
    int GetDay ();
    int GetMonth ();
    int GetYear ();
    
    friend istream& operator>>(istream& tin , DATE& td);
    friend DATE operator+(DATE td, int ty );
    friend ostream& operator<<(ostream& tout, DATE& td);
    friend bool operator > (DATE d1, DATE d2);
    friend bool operator >= (DATE d1, DATE d2);
    friend bool operator < (DATE d1, DATE d2);
    friend bool operator <= (DATE d1, DATE d2);
    friend bool operator == (DATE d1, DATE d2);
    friend bool operator != (DATE d1, DATE d2);
    
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
DATE DATE::NextDay(){
    DATE kq;
    int SoNgay; 
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){ 
        SoNgay = 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11 ){
        SoNgay = 30;
    }
    else if (m == 2){
        if(y%4==0 && y%100==0 && y%400!=0){
            SoNgay = 29;
        }
        else {
            SoNgay = 28;
        }
        
    }
    
    kq.d = d + 1;
    if(kq.d > SoNgay){
        kq.d = 1;
        kq.m = m + 1;
        if(kq.m > 12){
            kq.m = 1;
            kq.y = y + 1;
        }
    }
    else{
        kq.m = m;
        kq.y = y;
    }
    return kq;
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
    tout<<setfill('0')<<setw(2)<<td.d<<"/";
    tout<<setfill('0')<<setw(2)<<td.m<<"/";
    tout<<setfill('0')<<setw(4)<<td.y<<endl;
    return tout;
}
DATE operator+(DATE td, int ty ){
    DATE kq;
    kq.d = td.d;
    kq.m = td.m;
    kq.y = td.y;
    for(int i=0; i<ty; i++){
        kq = kq.NextDay();
    }
    return kq;
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
    cin>>t1;
    cout<<t1;
    t2 = t1 + 10;
    cout<<t2;
    cin >> t3;
    if(t3<t1)
    {
    	cout << "y";
    }
    return 0;
}

