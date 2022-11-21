#include<iostream>
using namespace std;

class Time{
private: 
    int h, m, s;
public:
    void nhap();
    void xuat();
    Time();
    Time(int h, int m, int s);
 
    friend istream& operator>>(istream &enter, Time &obj);
    friend ostream& operator<<(ostream &show, Time &obj);
     friend bool operator>=(Time a, Time b);
     friend bool operator<=(Time a, Time b);
     friend bool operator==(Time a, Time b);
     friend bool operator!=(Time a, Time b);
     friend bool operator>(Time a, Time b);
     friend bool operator<(Time a, Time b);
     friend int kq(Time a, Time b, Time c);
};

 void Time::nhap(){
     cin >> h >> m >> s;
 }
    void Time::xuat(){
        cout << h << " " << m << " " << s<< endl;
    }
    Time::Time(){
        h =10;
        m = 5;
        s =60;
    }
    Time::Time(int h, int m, int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }
    istream& operator>>(istream &enter, Time &obj)
    {
        enter >> obj.h >> obj.m >> obj.s;
        return enter;
    }
    ostream& operator<<(ostream &show, Time &obj)
    {
        show << obj.h <<" " << obj.m << " " << obj.s;
        return show;
    }
    
   int kq(Time a, Time b, Time c) {
       int x = a.h*60+a.m*360+a.s*3600;
       int y = b.h*60+b.m*360+b.s*3600;
       int z = c.h*60+c.m*360+c.s*3600;
     if (x >= y && x >= z) {
	    return 1;
    }
	 if (y >= x && y >= z) {
		return -1;
	}
	if (z >= x && z >= y) {
		return 0;
	}
}

int main()
 {
     Time t1, t2, t3;
     cin >> t1;
     cin >> t2;
     cin >> t3;
     int temp = kq(t1, t2, t3);
     if(temp==1)
     {
         cout << t1;
     }
     if(temp == -1)
     {
         cout << t2;
     }
     if(temp ==0)
     {
         cout << t3;
     }
 }
    
    
    
