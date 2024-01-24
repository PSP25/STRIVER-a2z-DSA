#include <bits/stdc++.h>
using namespace std;
void char_hash()
{
    string str = "abcdabegc";
    // pre_compute
    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a'] += 1;
        // if you take hash[256]
        // you dont need to take str[i]-'a'
        // str[i] would do the needful
    }
    // fetch
    int q;
    cin >> q;
    while (q--)
    {
        char j;
        cin >> j;
        cout << hash[j - 'a'] << endl; // if you take hash[256]
                                       // hash[j]would do
    }
}
int main()
{
    char_hash();
    return 0;
}
