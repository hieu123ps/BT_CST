#include<iostream>
#include<math.h>

using namespace std; 

class circle 
{   
    private:
        int x,y,r;
    public:
        circle ()
        {
            x = 2;
            y = 12;
            r = 1;
        }
        circle (int x1, int y1, int r1)
        {
            x = x1;
            y = y1;
            r = r1;
        }
        circle (circle  &t)
        {
            x = t.x;
            y = t.y;
            r = t.r;
        }
        friend bool operator<(circle a, circle b)
        {
            if(a.r<b.r)
            {
                return true;
            }
            return false;
        }
        void enter();
        void show();
        friend void swap(circle a,circle b);
        friend ostream& operator<<(ostream &show, circle &p)
        {
            show << p.x << " " << p.y << " " << p.r << endl;
            return show;
        }
};
void circle ::enter()
{   
    cin >> x >> y >>r;
}
void circle ::show()
{

    cout << x << " "<< y<< " " <<r;
}
void swap(circle a,circle b)
{
    circle temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{

    circle  one;
    one.enter();

    circle  two;
    two.enter();
    
    circle  three;
    three.enter();
    
    if(one<two) swap(one, two);
    if(one<three) swap(one, three);
    if(two<three) swap(two, three);
    cout << one << two << three;
    return 0;
}