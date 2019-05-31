#include <bits/stdc++.h>

using namespace std;

struct in_var {
    int arr[100], ara[100];
    char s1[100], s2[100];
};

int main()
{
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    struct in_var x;
    for(int i=0; i<m; i++)
        cin >> x.arr[i] >> x.ara[i] >> x.s1[i] >> x.s2[i];
    for(int i=0; i<m; i++) {
        for(int j=x.arr[i]; j<=x.ara[i]; j++) {
            if(s[j-1] == x.s1[i]) s[j-1] = x.s2[i];
        }
    }
    cout << s << endl;

    return 0;
}
