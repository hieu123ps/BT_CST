#include <iostream>
using namespace std;

class PHANSO{
private:
    int x, y;
public:
    PHANSO();
    PHANSO(int dx, int dy);
    PHANSO(PHANSO &t);
    friend istream& operator>> (istream &enter, PHANSO &obj);
    friend ostream& operator<< (ostream &show, PHANSO &obj);
        
        friend PHANSO operator*(PHANSO ps1, PHANSO ps2);
        void rutgon();
        void re_get();
};
    
    PHANSO::PHANSO(){
        x = 5;
        y = 6;
    }
    
    PHANSO::PHANSO(int dx, int dy){
        x = dx;
        y = dy;
    }
    
    PHANSO::PHANSO(PHANSO &t){
        x = t.x;
        y = t.y;
    }

    istream& operator>> (istream &enter, PHANSO &obj){
        enter >> obj.x >> obj.y;
            return enter;
    }
    
    ostream& operator<< (ostream &show, PHANSO &obj){
        show << obj.x << " " << obj.y << endl;
            return show;
    }
        
        PHANSO operator*(PHANSO ps1, PHANSO ps2){
            PHANSO kq;
            kq.x = ps1.x*ps2.x;
            kq.y = ps1.y*ps2.y;
            kq.rutgon();
                return kq;
        }
        
        int UCLN(int a, int b){
            a = abs(a);
            b = abs(b);
            if(a == 0 || b == 0)
            {
                return a+b;
            }
            while(a!=b){
                if(a>b){
                    a-=b;
                }
                else{
                    b-=a;
                }
            }
            return a;
        }
        void PHANSO::rutgon(){
            int uc = UCLN(x, y);
            this -> x = x/uc;
            this -> y = y/uc;
        }
int main(){
    cout << "Phép tính phân số" << endl;
    PHANSO ps1, ps2, ps;
    cin >> ps1;
    cin >> ps2;
    
    ps = ps1 * ps2;
        cout << ps;
}