#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n, l = 0;
    string s;
    cin >> n;
    n++;
    while (n--) {
        getline(cin, s);
        int l1 = 0, r1 = 0, l2 = 0, r2 = 0, pl1 = 0, pl2 =0, pr1 = 0, pr2 = 0, flag = 0;
        if(l == 1) {
            if(s.empty())
                cout << "Yes\n";
            else {
                for(int i=0; i<s.length()-1; i++) {
                    if(s[i] == '(' && s[i+1] == ']') {
                        cout << "No\n";
                        flag = 1;
                        break;
                    }
                    if(s[i] == '[' && s[i+1] == ')') {
                        cout << "No\n";
                        flag = 1;
                        break;
                    }
                }
                if(flag != 1) {
                    for(int i=0; i<s.length(); i++) {
                        if(s[i] == '(') {
                            l1++;
                            pl1 += i;
                        }
                        if(s[i] == ')') {
                            r1++;
                            pr1 += i;
                        }
                        if(s[i] == '[') {
                            l2++;
                            pl2 += i;
                        }
                        if(s[i] == ']') {
                            r2++;
                            pr2 += i;
                        }
                    }
                    if(l1 == r1 && l2 == r2) {
                        if(l1 > 0 && l2 > 0) {
                            if(pl1 < pr1 && pl2 < pr2)
                                cout << "Yes\n";
                            else cout << "No\n";
                        }
                        else if(l1 > 0) {
                            if(pl1 < pr1)
                                cout << "Yes\n";
                            else cout << "No\n";
                        }
                        else if(l2 > 0) {
                            if(pl2 < pr2)
                                cout << "Yes\n";
                            else cout << "No\n";
                        }
                    }
                    else cout << "No\n";
                }
            }
        }
        l = 1;
    }

    return 0;
}