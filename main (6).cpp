#include<iostream>
using namespace std;
class TPoint{
protected:
    int x, y;
public:
    TPoint();
    TPoint(int x, int y);
    friend istream& operator>>(istream &enter, TPoint &obj);
    friend ostream& operator<<(ostream &show, TPoint &obj);
};

    TPoint::TPoint()
    {
        x = 5; 
        y = 1;
    }
    TPoint::TPoint(int dx, int dy)
    {
        x = dx;
        y = dy;
    }
    istream& operator>>(istream &enter, TPoint &obj)
    {
        enter >> obj.x >> obj.y;
            return enter;
    }
    ostream& operator<<(ostream &show, TPoint &obj)
    {
        show << obj.x << " " << obj.y << endl;
            return show;
    }
    
class TSegment : public TPoint{
private:
    double d, g;
public:
    TSegment();
    TSegment(double r, double d, int dx, int dy);
    friend istream& operator>>(istream &enter, TSegment &obj);
    friend ostream& operator<<(ostream &show, TSegment &obj);
    friend TSegment longest (TSegment a, TSegment b);
        friend bool operator<(TSegment a, TSegment b);
        friend bool operator>(TSegment a, TSegment b);
        friend bool operator==(TSegment a, TSegment b);
    
};

    TSegment::TSegment() 
    {
        x = 5;
        y = 6;
        g = 1;
        d = 10.25;
    }
    TSegment::TSegment(double r, double d, int dx, int dy) 
    {
        x = dx;
        y = dy;
        this->g = g;
        this->d = d;
    }
    istream& operator>>(istream &enter, TSegment &obj)
    {
        enter >> obj.x >> obj.y >> obj.d >> obj.g;
            return enter;   
    }
    ostream& operator<<(ostream &show, TSegment &obj)
    {
        show << obj.x << " " << obj.y << " " 
             << obj.d << " " << obj.g << endl;
            return show;
    }
    
        bool operator<(TSegment a, TSegment b)
        {
            if(a.d < b.d)
            {
                return true;
            } else return false;
        }
        bool operator>(TSegment a, TSegment b)
        {
            if(a.d > b.d)
            {
                return true;
            } else return false;
        }
        bool operator==(TSegment a, TSegment b)
        {
            if(a.d == b.d)
            {
                if (a.g > b.g)
                {
                    return true;
                } else return false;
            }
            else return false;
        }
        
        TSegment longest (TSegment a, TSegment b)
        {
            if(a>b)
            {
                return a;
            }
            else return b;
        }
        
int main()
{
    TSegment s1, s2, s3, temp;
    cout << "\nDone!\n";
    cin >> s1 >> s2 >> s3;
    temp = longest (s1, longest (s2, s3));
    cout << temp;
}