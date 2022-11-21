#include<iostream>
using namespace std;

void enter(double p[], int n){
    cout << "\nNhập vào phần tử mảng\n";
    for(unsigned int i = 0; i < n; i++){
        cin >> p[i];
    }
}
void show(double p[], int n){
    cout << "\nXuất phần tử của mảng\n";
    for(unsigned int i = 0; i < n; i++){
        cout << p[i] << " ";
    }
}

    int find_number(double p[], int n){
        cout << "\nNhập số k: \n";
        double k; cin >> k;
        int count = 0;
        for(unsigned int i = 0; i < n; i++){
            if(p[i]==k)
            {
                count+=1;
            }
        }
    return count;    
    }
    
    double sum_p(double p[], int n){
        double sum = 0;
        for(unsigned int i = 0; i < n; i++){
            sum+= p[i];
        }
    return sum;
    }
    
    void swap(double &a, double &b){
        double temp = a;
        a = b;
        b = temp;
    }
    void sort_p(double p[], int n){
        for(unsigned int i = 0; i < n; i++){
            for(unsigned int j = i+1; j < n; j++){
                if(p[i] < p[j]){
                    swap(p[i], p[j]);
                }
            }
        }
    }
    
int main(){
    
    int n;
    do{
        cin >> n;
    }while(n<=0);
    
        double *p;
        p = new double[n];
        
    enter(p, n);
    show(p, n);
    cout << "\nTổng của dãy: " << sum_p(p, n) << endl;
    sort_p(p, n);
    show(p, n);
    cout << find_number(p, n);
    cout<<"\nWelcome to Online IDE!! Happy Coding :)\n";
    return 0;
}
