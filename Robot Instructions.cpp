#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--) {
        int m, p = 1;
        string s;
        cin >> m;
        m++;
        vector <string> vec;
        while(m--) {
            getline(cin, s);
            if(p) {
                p = 0;
                continue;
            }
            vec.push_back(s);
        }
        p = 0;
        for(int i=0; i<vec.size(); i++) {
            if(vec[i] == "LEFT") p--;
            else if(vec[i] == "RIGHT") p++;
            else {
                char q[10000] = {"\0"};
                int len = vec[i].size(), k = 0;
                string temp = vec[i];
                for(int j=8; j<len; j++) {
                    q[k] = temp[j];
                    k++;
                }
                int number = atoi(q)-1;
                vec[i] = vec[number];
                if(vec[i] == "LEFT") p--;
                else if(vec[i] == "RIGHT") p++;
            }
        }
        cout << p << "\n";
    }

    return 0;
}