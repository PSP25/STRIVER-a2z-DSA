#include <bits/stdc++.h>
using namespace std;
// bruteforce  O(~n^3)
int longest_subarray(int arr[], int n, int k)
{
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[j];
            }
            if (sum == k)
            {
                len = max(len, (j - i + 1));
            }
        }
    }
    return len;
}
// better bruteforce O(~n^2)
int longest_subarray1(int arr[], int n, int k)
{
    int len = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = max(len, (j - i + 1));
            }
        }
    }
    return len;
}
// better solution hashing(      //doubt      )
int longest_subarray2(int arr[], int n, long long k)
{
    map<long long, int> presum;
    int maxlen = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cout << "sum:" << sum << endl;
        if (sum == k)
            maxlen = max(maxlen, i + 1);
        int rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }
        presum[sum] = i;
        cout << "presum index:" << presum[sum] << endl;
        for (auto it : presum)
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << "maxlen: " << maxlen << endl
             << endl;
    }
    return maxlen;
    // the function needs modification if there
    // are zeros in the array
}
// longest subarray with zeros & negatives(best approach)
// TC O(n.logn) if ordered map and O(n.1) in avg and
// best case of ordered map else O(n.n) in worst case unordered
// SC=O(n) in worst case.
int longest_subarray3(int arr[], int n, long long k)
{
    map<long long, int> presum;
    int maxlen = 0;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        cout << "sum:" << sum << endl;
        if (sum == k)
            maxlen = max(maxlen, i + 1);
        int rem = sum - k;
        if (presum.find(rem) != presum.end())
        {
            int len = i - presum[rem];
            maxlen = max(maxlen, len);
        }
        // slight change here
        // we donot update the index if there are zeros in the
        // path
        if (presum.find(sum) == presum.end())
            presum[sum] = i;
        cout << "presum:" << presum[sum] << endl;
        for (auto it : presum)
        {
            cout << it.first << " " << it.second << endl;
        }
        cout << "maxlen: " << maxlen << endl
             << endl;
    }
    return maxlen;
}
// best optimal case for positive integers
int longest_subarray4(int arr[], int n, long long k)
{
    int ptr1 = 0, ptr2 = 0;
    long long sum = arr[0];
    int maxlen = 0;
    while (ptr2 < n)
    {
        while (ptr1 <= ptr2 && sum > k)
        {
            sum -= arr[ptr1];
            ptr1++;
        } // shrink the array
        if (sum == k)
        {
            maxlen = max(maxlen, ptr2 - ptr1 + 1);
        } // check and update the length
            ptr2++;
            if (ptr2 < n)
                sum += arr[ptr2];
         // sum and update the second poinrter
    }
    return maxlen;
}
int main()
{
    int arr[] = {1, 1, 4, 4, 4, 3, 3,0, 3,0,0,0, 1, 1, 1, 1, 1};
    int ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    ans = longest_subarray2(arr, n,13);
    cout << ans;
}