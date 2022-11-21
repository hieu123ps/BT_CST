#include <iostream>
#include <cmath>
using namespace std;

class TFration
{
private:
  int x, y;
public:

  double KetQua();
  void enter ();
  void rutgon ();
  void show ();
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

double KetQua(TFration p)
{
    return float(x)/float(y);
}

void
TFration::rutgon ()
{
  int uc = UCLN (x, y);
  x = x / uc;
  y = y / uc;
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

int
main ()
{
  TFration p1, p2, p3;
  p1.enter (); p1.rutgon();
  p2.enter (); p2.rutgon();
  p3.enter (); p3.rutgon();
  double k1 = KetQua(p1);
  cout << k1;
  return 0;
}
