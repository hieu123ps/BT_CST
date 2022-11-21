
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
    friend DATE operator+(DATE td, int n);
    friend ostream& operator<<(ostream& tout, DATE& td);
   
    
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
        if(y%4==0 && y%100!=0){
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

istream& operator>>(istream& tin , DATE& td){
    tin>>td.d>>td.m>>td.y;
    return tin;
}
ostream& operator<<(ostream& tout, DATE& td){
    tout<< td.d << " " << td.m << " " << td.y << endl;
    return tout;
}
DATE operator+(DATE td, int n){
    DATE kq;
    kq.d = td.d;
    kq.m = td.m;
    kq.y = td.y;
    for(int i=0; i<n; i++){
        kq = kq.NextDay();
    }
    return kq;
}
int main()
{
    DATE t1, t2, t3, t4; 
    cin>>t1;
    cin >> t2;
    int n; cin >> n;
    t3 = t1 + 25;
    t4 = t2 + 25;
    cout << t3;
    cout << t4;
    return 0;
}
