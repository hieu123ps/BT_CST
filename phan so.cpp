#include <iostream>
#include <cmath>
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
  void rutgon ();
  TFration nhanPS (TFration);
  TFration truPS (TFration);
  TFration congPS (TFration);
  TFration chiaPS (TFration);
  void show ();
   ~TFration ();
};

int
UCLN (int a, int b)
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

void
TFration::rutgon ()
{
  int uc = UCLN (x, y);
  x = x / uc;
  y = y / uc;
}

TFration
TFration::nhanPS (TFration p2)
{
  TFration kq;
  kq.x = x * p2.x;
  kq.y = y * p2.y;
  kq.rutgon ();
  return kq;
}

TFration
TFration::congPS (TFration p2)
{
  TFration kq;
  kq.x = x * p2.y + y * p2.x;
  kq.y = y * p2.y;
  kq.rutgon ();
  return kq;
}

TFration
TFration::chiaPS (TFration p2)
{
  TFration kq;
  kq.x = x * p2.y;
  kq.y = y * p2.x;
  kq.rutgon ();
  return kq;
}

TFration
TFration::truPS (TFration p2)
{
  TFration kq;
  kq.x = x * p2.y - y * p2.x;
  kq.y = y * p2.y;
  kq.rutgon ();
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

void
TFration::enter ()
{
  cin >> x >> y;
}

void
TFration::show ()
{
  cout << x << " " << y << endl;
}

TFration::~TFration ()
{
    cout << "/" << endl;
}

int
main ()
{
  TFration p1, p2;
  p1.enter ();
  p2.enter ();
  TFration p3, p4, p5, p6;
  p3 = p1.nhanPS(p2);
  p3.show ();
  
  p4 = p1.congPS(p2);
  p4.show();
  
  p5 = p1.chiaPS(p2);
  p5.show();
  
  p6 = p1.truPS(p2);
  p6.show();
  return 0;
}
