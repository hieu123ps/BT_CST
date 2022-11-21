#include <iostream>
using namespace std;

class TPoint{
public:
    int x, y;
public: 
    TPoint();
    TPoint(int dx, int dy);
    
        friend istream& operator>> (istream &enter, TPoint &obj);
        friend ostream& operator<< (ostream &show, TPoint &obj);
};
    
    TPoint::TPoint(){
        x = 2;
        y = 8;
    }
    
    TPoint::TPoint(int dx, int dy){
        x = dx;
        y = dy;
    }
    
    istream& operator>> (istream &enter, TPoint &obj){
        enter >> obj.x >> obj.y;
            return enter;
    }
    ostream& operator<< (ostream &show, TPoint &obj){
        show << obj.x << " " << obj.y << endl;
            return show;
    }
    
//lop ke thua
class TSegment : TPoint{
    double d, g;
public:  
    TSegment();
    TSegment(double length, double alpha);

        friend istream& operator>> (istream &enter, TSegment &obj);
        friend ostream& operator<< (ostream &show, TSegment &obj);
        //friend bool vi_tri_tuong_doi(TSegment a, TSegment b);
};

    TSegment::TSegment(){
        d = 10;
        g = 9.6;
    }
    
    TSegment::TSegment(double length, double alpha){
        d = length;
        g = alpha;
    }

    istream& operator>> (istream &enter, TSegment &obj){
        enter >> obj.x >> obj.y >> obj.g >> obj.d;
            return enter;
    }
    ostream& operator<< (ostream &show, TSegment &obj){
        show << obj.x << " " << obj.y << " "
             << obj.g << " " << obj.d << endl;
                return show;
    }

int main()
{
    TSegment h1, h2, h3;
    cout << h1;
    return 0;
}
