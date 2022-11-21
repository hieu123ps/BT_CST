#include<iostream>
#include<cmath>
using namespace std;

class TPoint{
public:
    int x, y;
public:
    TPoint();
    TPoint(int dx, int dy);
    friend istream& operator>> (istream &enter, TPoint &h);
    friend ostream& operator<< (ostream &show, TPoint &h);
    

};

TPoint::TPoint(){
    x = 1;
    y = 2;
}
TPoint::TPoint(int dx, int dy){
    x = dx;
    y = dy;
}

istream& operator>> (istream &enter, TPoint &h){
    enter >> h.x >> h.y;
    return enter;
}
ostream& operator<< (ostream &show, TPoint &h){
    show << h.x << " " << h.y << endl;
    return show;
}

class TRectangle:public TPoint{
    int w, h;
public:
    TRectangle();
    TRectangle(int dw, int dh);
    friend istream& operator>> (istream &enter, TRectangle &h);
    friend ostream& operator<< (ostream &show, TRectangle &h);
    double ChuVi();
    double DienTich();
    friend bool kiemtra(TRectangle a, TRectangle b);
};

TRectangle::TRectangle(){
    w = 10;
    h = 10;
}
TRectangle::TRectangle(int dw, int dh){
    w = dw;
    h = dh;
}
istream& operator>> (istream &enter, TRectangle &h){
    enter >> h.x >> h.y >> h.w >> h.h;
    return enter;
}
ostream& operator<< (ostream &show, TRectangle &h){
    show << h.x <<" "<< h.y<<" "<< h.w << " " << h.h << endl;
    return show;
}

double TRectangle ::ChuVi(){
    return (w+h)*2;
}
double TRectangle ::DienTich(){
    return w*h;
}
bool kiemtra(TRectangle a, TRectangle b){
    if(a.x+a.w >= b.x){
    	else if(b.x+b.w >= a.x){
    		else if(a.y+a.w >= b.y){
				else if(b.y+b.w >= a.y){
					return true;
				}
			}
		}
	} 
    return false;
}
int main()
{
    TRectangle h1, h2, h3;
    cin >> h1;
    cin >> h2;
	cin >> h3;
	if(kiemtra(h1,h2)){
		cout << "1 2" << endl;
	}
	if(kiemtra(h1,h3)){
		cout << "1 3" << endl;
	}
	if(kiemtra(h3,h2)){
		cout << "2 3"<< endl;
	}
    return 0;
}
