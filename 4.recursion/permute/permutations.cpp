#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &box, int index[], vector<vector<int>> &answer, vector<int> &arr)
{
    if (box.size() == arr.size())
    {
        answer.push_back(box);
        return;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (index[i] == 0)
        {
            box.push_back(arr[i]);
            index[i] = 1;
            helper(box, index, answer, arr);
            index[i] = 0;
            box.pop_back();
        }
    }
    return;
}
vector<vector<int>> permutation(vector<int> &arr)
{
    vector<vector<int>> answer;
    vector<int> box;
    int n = arr.size();
    int index[n] = {0};

    helper(box, index, answer, arr);

    return answer;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5};
    vector<vector<int>> ans = permutation(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    // cout<<"hello world";
}