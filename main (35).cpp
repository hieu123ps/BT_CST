#include <iostream> 
#include <vector>
using namespace std;

    void show(vector<int> &arr)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            cout << arr[i]<< " ";
        }
    }
    void enter(vector<int> &arr, int n)
    {
        int obj;
        for(int i = 0; i < n; i++)
        {
            cin >> obj;
            arr.push_back(obj);
        }
        cout << endl;
    }

int main() 
{  
    
    vector<int> arr;
    int n; cin >> n;
    enter(arr, n);
    show(arr);
    return 0; 
    
}