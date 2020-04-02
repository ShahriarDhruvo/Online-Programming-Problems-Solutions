#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    //FastIO;
    int n, l = 0;
    scanf("%d", &n);
    while(n--) {
        string s;
        vector <string> pvec;
        vector <string> avec;
        vector < pair <string, string> > rvec;
        vector < pair <int, int> > obs;
        while(getline(cin, s)) {
            if(l == 0 && s == "\0" || l == 1 && s == "\0") {
                l++;
                continue;
            }
            if(s == "\0") break;
            char q[1000001] = {"\0"};
            string h;
            int k = 0;
            for(int i=0; i<s.length(); i++) {
                if(s[i] == 32) continue;
                q[k++] = s[i];
            }
            h = q;
            pvec.push_back(s);
            avec.push_back(h);
        }
        sort(avec.begin(), avec.end());
        sort(pvec.begin(), pvec.end());
        for(int i=0; i<avec.size(); i++) {
            for(int j=0; j<avec.size(); j++) {
                bool flag = false;
                for(int k=0; k<obs.size(); k++) {
                    if(obs[k].first == i && obs[k].second == j || obs[k].first == j && obs[k].second == i) {
                        flag = true;
                        break;
                    }
                }
                if(flag || j == i) continue;
                int count = 0;
                if(avec[j].size() == avec[i].size()) {
                    for(int k=0; k<avec[i].size(); k++) {
                        for(int l=0; l<avec[i].size(); l++) {
                            if(avec[i][k] == avec[j][l]) {
                                count++;
                                break;
                            }
                        }
                    }
                    if(count == avec[i].size()) {
                        obs.push_back(make_pair(i, j));
                        rvec.push_back(make_pair(pvec[i], pvec[j]));
                    }
                }
            }
        }
        for(int i=0; i<rvec.size(); i++) 
           cout << rvec[i].first << " = " << rvec[i].second << "\n";   
        if(n!=0) cout << "\n";
    }

    return 0;
}