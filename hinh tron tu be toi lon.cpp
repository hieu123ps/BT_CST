#include<iostream>
using namespace std;

class TCircle{
private:
    int x, y, r;
public:
    TCircle(){
        x = 2;
        y = 6;
        r = 4;
    }
    TCircle(int dx, int dy, int dr)
    {
        x = dx;
        y = dy; r = dr;
    }
    friend bool operator>(TCircle a, TCircle b);
    friend bool operator<(TCircle a, TCircle b);
    friend istream& operator>>(istream &enter, TCircle &obj)
    {
        enter >> obj.x >> obj.y >> obj.r;
            return enter;
    }
    friend ostream& operator<<(ostream &show, TCircle &obj)
    {
        show << obj.x << " " << obj.y << " " << obj.r << endl;
            return show;
    }
    double S()
    {
        return r*r*3.14;
    }
    double P()
    {
        return 2*3.14*r;
    }
    void swap(TCircle a, TCircle b)
    {
        TCircle temp;
        temp = a;
        a = b;
        b = temp;
    }
};

    bool operator>(TCircle a, TCircle b)
    {
        double s1 = a.S();
        double s2 = b.S();
        if(s1>s2)
        {
            return true;
        } else return false;
    }
    bool operator<(TCircle a, TCircle b)
    {
        double s1 = a.S();
        double s2 = b.S();
        if(s1<s2)
        {
            return true;
        } else return false;
     
    }
    
int main()
{
    TCircle p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    if(p1>p2) swap(p1, p2);
    if(p1>p3) swap(p1, p3);
    if(p2>p3) swap(p2, p3);
    cout << p1 << p2 << p3;
}