#include<iostream>
using namespace std;

    bool nam_nhuan(int year)
    {
        if((year%4 == 0 || year%100 == 0) && year%400 != 0)
        {
            return true;
        }
    return false;
    }
    
    int so_ngay(int month, int year)
    {
        switch(month)
        {
            case 1:
            case 12:
            case 3:
            case 10:
            case 5:
            case 8:
            case 7:
                return 31;
            case 11:
            case 4:
            case 9:
            case 6:
                return 30;
            case 2:
                if(nam_nhuan(year))
                    return 29;
                else return 28;
        }
        exit(0);
    }

int main()
{
    int month, year;
    cin >> month >> year;
    cout << so_ngay(month, year);
    
}