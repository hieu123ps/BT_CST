#include <iostream>
#include <cmath>
using namespace std;
const int x = pow(10,3);

int tonguoc(int n){
    int tong = 0;
    for (int i=1; i<sqrt(n); i++){
    	if (n%i==0) tong += i;
    }
    return tong;
}

int main(){
	for (int i = 1; i < x; i++){
		for (int j = i+1; j < x; j++){
			if (tonguoc(i) == j && tonguoc(j) == i) {
				cout << i << " - " << j << ", ";
			}
		}
	}
}
