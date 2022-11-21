#include<iostream>
using namespace std;

    void enter(double a[], int n)
    {
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void second_largest(double nums[], int arr_size)
      {
       int i, first_element, second_element;
     
        /* There should be atleast two elements */
        if (arr_size < 2)
        {
            cout<< " Invalid Input ";
            return;
        }
     
        first_element = second_element = INT_MIN;
        for (i = 0; i < arr_size ; i ++)
        {
      
            if (nums[i] > first_element)
            {
                second_element = first_element;
                first_element = nums[i];
            }
     
    
            else if (nums[i] > second_element && nums[i] != first_element)
            {
                second_element = nums[i];
            }
        }
        if (second_element == INT_MIN)
         {
            cout<< "No second largest element";
         }
        else
         { 
            cout<< "\nThe second largest element is: " <<second_element;
         }
    }

int main()
{
    int n; cin >> n;
    double nums[n];
    enter(nums, n);
    second_largest(nums, n);
    return 0;
}