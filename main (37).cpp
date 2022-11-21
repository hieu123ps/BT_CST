#include<iostream>
using namespace std;

class TCircle{
private:
    int x, y, r;
public:
    TCircle()
    {
        x = 2;
        y = 6;
        r = 10;
    }
    TCircle(int dx, int dy, int dr);
    friend bool operator>(TCircle a, TCircle b);
    friend bool operator<(TCircle a, TCircle b);
    friend bool operator==(TCircle a, TCircle b);
    friend istream& operator>>(istream &enter, TCircle &obj);
    friend ostream& operator<<(ostream &show, TCircle &obj);
    double S();
    double P();
};
istream& operator>>(istream &enter, TCircle &obj)
    {
        enter >> obj.x >> obj.y >> obj.r;
            return enter;
    }
ostream& operator<<(ostream &show, TCircle &obj)
    {
        show << obj.x << " " << obj.y << " " << obj.r << endl;
            return show;
    }
double TCircle::S()
{
    double kq = r*r*3.14;
    return kq;
}

double TCircle::P()
{
    double kq = 2*3.14*r;
    return kq;
}
    bool operator==(TCircle a, TCircle b)
    {
        double f1 = a.S();
        double f2 = b.S();
        
        if(f1==f2)
        {
            return true;
        } else return false;
    }
    bool operator>(TCircle a, TCircle b)
    {
        double f1 = a.S();
        double f2 = b.S();
        
        if(f1>f2)
        {
            return true;
        } else return false;
    }
    bool operator<(TCircle a, TCircle b)
    {
        double f1 = a.S();
        double f2 = b.S();
        
        if(f1<f2)
        {
            return true;
        } else return false;
    }
    
int main()
{
    TCircle p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    
}