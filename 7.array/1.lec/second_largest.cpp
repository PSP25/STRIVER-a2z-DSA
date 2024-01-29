#include <bits/stdc++.h>
using namespace std;
int second_largestElement(int arr[], int n)
{   // {1, 5, 3, 4, 7, 123, 95, 4}
    int largest = arr[0];
    int second_largest = arr[0];
                                //optimal solution
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];    
        }
        if(arr[i]<largest&&arr[i]>second_largest)
        second_largest=arr[i];
        cout<<second_largest<<endl;
    }   return second_largest;

    /*                              // optimised better
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] != largest)
            second_largest = arr[i];
    }
    return second_largest;
                                    // brute force
    // sort(arr,arr+n);
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]<arr[n-1])
    //     return arr[i];
    // }*/
}
int main()
{
    int arr[] = {1, 5, 3, 4, 7, 123, 95, 4};
    int sec = second_largestElement(arr, 8);
    cout << sec;
}