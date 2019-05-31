#include <bits/stdc++.h>

using namespace std;

#define FasterIO ios_base::sync_with_stdio(false)
#define newL "\n"
#define mem(a, x) memset(a, x, sizeof(a))

typedef long long ll;

int main()
{
    FasterIO;
    int n, l=0;
    string s;
    cin >> n;
    while(l<n) {
        cin >> s;
        string temp, temp1;
        int flag = 0, count = 0, k;
        for(int i=1; i<s.length(); i++) {
            if(s[0] == s[i]) {
                int count1 = 0, m = 0;
                temp = s.substr(0, i);
                for(k=i; k<temp.length()+i; k++) {
                    if(temp[m] == s[k]) count1++;
                    else break;
                    m++;
                }
                if(count1 == temp.length()) break;
                else continue;
            }
            else flag++;
            if((s.length()/2)+1 < flag) break;
        }
        if((s.length()/2)+1 > flag) {
            for(int j=0; j<s.length(); j+=temp.length()) {
                temp1 = s.substr(j, temp.length());
                if(temp == temp1) count++;
                else break;
            }
            if(count*temp.length() == s.length())
                cout << temp.length() << newL << newL;
            else cout << s.length() << newL << newL;
        }
        else cout << s.length() << newL << newL;
        l++;
    }

    return 0;
}
