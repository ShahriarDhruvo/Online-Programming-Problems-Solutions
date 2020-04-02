#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int m;
        vector <int> s;
        cin >> m;
        for(int i=1; i<=m; i++) {
            if(i < 10)
                s.push_back(i);
            else {
                int l = i;
                while(l != 0) {
                    s.push_back(l%10);
                    l /= 10;
                }
            }
        }
        sort(s.begin(), s.end());

        int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0,
            count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 0) count0++;
            else if(s[i] == 1) count1++;
            else if(s[i] == 2) count2++;
            else if(s[i] == 3) count3++;
            else if(s[i] == 4) count4++;
            else if(s[i] == 5) count5++;
            else if(s[i] == 6) count6++;
            else if(s[i] == 7) count7++;
            else if(s[i] == 8) count8++;
            else if(s[i] == 9) count9++;
        }
        cout << count0 << " " << count1 << " " << count2 << " " << count3 << " " << count4 << " "
            << count5 << " " << count6 << " " << count7 << " " << count8 << " " << count9 <<"\n";
    }

    return 0;
}
