#include <iostream>
using namespace std;

class TDate {
private:
    int d, m, y;
public:
    void enter();
    void display();
    friend bool F(TDate t1, TDate t2);
};

void TDate::enter() {
    cin >> d >> m >> y;
}

void TDate::display() {
    cout << d << " " << m << " " << y;
}

bool F(TDate t1, TDate t2) {
    if (t1.y < t2.y) {
        return true;
    }
    else if (t1.y == t2.y) {
        if (t1.m > t2.m) return false;
        if (t1.m == t2.m)
            return (t1.d <= t2.d) ? true : false;
        else return true; 
    }
    else return false;
}


int main() {
    TDate t1, t2, t3;
    t1.enter();
    t2.enter();
    t3.enter();
    if (F(t1, t2) == true && F(t2, t3) == true)
        t1.display();
    else if (F(t2, t3) == true)
        t2.display();
    else if (F(t1, t3) == true)
        t1.display();
    else
        t3.display();
    return 0;
}