#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class T3DPoint{
private:
    int x, y, z;
public:
        friend istream& operator>>(istream &enter, T3DPoint &p);
        friend ostream& operator<<(ostream &show, T3DPoint &p);
    
    void gets(int dx, int dy, int dz)
    {
        this->x = x + dx;
        this->y = y + dy;
        this->z = z + dz;
    }
    double khoang_cach()
    {
        double kq = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
        return kq;
    }
    friend bool operator<(T3DPoint a, T3DPoint b)
    {
        double k1 = a.khoang_cach();
        double k2 = b.khoang_cach();
        if(k1 < k2)
        {
            return true;
        } 
        return false;
    }
    void swap(T3DPoint a, T3DPoint b)
    {
        T3DPoint temp;
        temp = a;
        a = b;
        b = temp;
    }
};
    istream& operator>>(istream &enter, T3DPoint &p)
    {
        cin >> p.x >> p.y >> p.z;
            return enter;
    }
    ostream& operator<<(ostream &show, T3DPoint &p)
    {
        cout << p.x << " " << p.y << " " << p.z << endl;
            return show;
    }

int main()
{
    T3DPoint a, b, c;
    cin >> a >> b >> c;
    int dx, dy, dz;
    cin >> dx >> dy >> dz;
    a.gets(dx, dy, dz);
    b.gets(dx, dy, dz);
    c.gets(dx, dy, dz);
    cout << fixed << setprecision(1) << a.khoang_cach() << endl;
    cout << fixed << setprecision(1) << b.khoang_cach() << endl;
    cout << fixed << setprecision(1) << c.khoang_cach() << endl;
    if(a<b) swap(a, b);
    if(a<c) swap(a, c);
    if(b<c) swap(b, c);
    cout << a << b << c;
    return 0;
}