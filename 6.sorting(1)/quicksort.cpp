#include <bits/stdc++.h>
using namespace std;
int position(int arr[], int low, int high)
{
    int pivot=arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int pos;
    pos = position(arr, low, high);
    quicksort(arr, low, pos-1);
    quicksort(arr, pos + 1, high);
}
int main()
{
    int n;
    cin >> n;

    int arr[] = {1, 9, 7, 5, 3, 4, 8, 3};
    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    quicksort(arr, 0, n - 1);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
}