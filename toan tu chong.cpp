#include <iostream>
#include<cmath>
using namespace std;

class TFration
{
private:
  int x, y;
public:
    TFration ();
    TFration (int dx, int dy);
    TFration (TFration & t);
    
  void enter ();
  friend istream &operator>>(istream& is, TFration &obj);
  friend ostream &operator<<(ostream& os, TFration &obj);
    friend TFration operator+(TFration p1, TFration p2);
    friend TFration operator-(TFration p1, TFration p2);
    friend TFration operator*(TFration p1, TFration p2);
    friend TFration operator/(TFration p1, TFration p2);
    void rutgon ();
    
  void show ();
   ~TFration ();
};

int UCLN (int a, int b)
{
  a = abs (a);
  b = abs (b);
  if (a == 0 || b == 0)
    {
      return a + b;
    }
  while (a != b)
    {
      if (a > b)
	{
	  a -= b;
	}
      else
	{
	  b -= a;
	}
    }
  return a;
}

void TFration::rutgon ()
{
  int uc = UCLN (x, y);
  x = x / uc;
  y = y / uc;
}

TFration operator+(TFration p1, TFration p2)
{
    TFration kq;
    kq.x = p1.x*p2.y + p1.y*p2.x;
    kq.y = p1.y*p2.y;
    kq.rutgon();
    return kq;
}

TFration operator-(TFration p1, TFration p2)
{
    TFration kq;
    kq.x = p1.x*p2.y - p1.y*p2.x;
    kq.y = p1.y*p2.y;
    kq.rutgon();
    return kq;
}

TFration operator*(TFration p1, TFration p2)
{
    TFration kq;
    kq.x = p1.x*p2.x;
    kq.y = p1.y*p2.y;
    kq.rutgon();
    return kq;
}

TFration operator/(TFration p1, TFration p2)
{
    TFration kq;
    kq.x = p1.x*p2.y;
    kq.y = p1.y*p2.x;
    kq.rutgon();
    return kq;
}

TFration::TFration ()
{
  x = 2;
  y = 4;
}

TFration::TFration (int dx, int dy)
{
  x = dx;
  y = dy;
}

TFration::TFration (TFration & t)
{
  x = t.x;
  y = t.y;
}

void TFration::enter ()
{
  cin >> x >> y;
}

void TFration::show ()
{
  cout << x << " " << y << endl;
}

istream& operator>>(istream& is, TFration &obj)
{
    is>>obj.x>>obj.y;
    return is;
}

ostream& operator<<(ostream& os, TFration &obj)
{
    os<<obj.x<<" "<<obj.y<<endl;
    return os;
}

TFration::~TFration ()
{
    cout << "/" << endl;
}

int main ()
{
  TFration p1, p2;
  p1.enter();
  p2.enter();
  
  TFration a, b, c, d;
  a = p1+p2;
  a.show();
  
  b = p1-p2;
  b.show();
  
  c = p1*p2;
  c.show();
  
  d = p1/p2;
  d.show();
  
  TFration p3;
  cin >> p3;
  cout << p3;
  p3.rutgon();
  cout << p3;
  return 0;
}
