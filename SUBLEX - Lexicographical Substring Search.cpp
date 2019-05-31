#include <bits/stdc++.h>
#define FasterIO ios_base::sync_with_stdio(false)
#define newL "\n"

using namespace std;

vector < pair <string, int> > suffix_array(string s)
{
    vector < pair <string, int> > suffixString;

    for(int i=0; i<s.length(); i++)
        suffixString.push_back(make_pair(s.substr(i, s.length()), i+1));
    sort(suffixString.begin(), suffixString.end());

    return suffixString;
}

int main()
{
    FasterIO;
    string s;
    cin >> s;
    int n, k;
    cin >> n;

    for(int i=0; i<s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') continue;
        s = s.substr(0, i);
    }
    vector < pair <string, int> > vec = suffix_array(s);

    for(int i=0; i<n; i++) {
        cin >> k;
        cout << vec[k-1].first << newL;
    }

    return 0;
}
