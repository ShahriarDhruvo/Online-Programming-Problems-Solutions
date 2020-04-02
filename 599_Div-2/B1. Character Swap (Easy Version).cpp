#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        char s[m], t[m];
        vector <int> vec;

        for(int i=0; i<m; i++){
            cin >> s[i];
        }
        for(int i=0; i<m; i++){
            cin >> t[i];
        }

        for(int l=0; l<m; l++){
            if(s[l] != t[l]) 
                vec.push_back(l);
        }
        
        bool no = true;

        for(int i=0; i<vec.size()-1; i++){
            for(int j=0; j<vec.size(); j++){
                int count = 0;
                
                swap(s[vec[i]], t[vec[j]]);

                if(!(s[i] == t[i] && s[j] == t[j])){
                    swap(s[vec[i]], t[vec[j]]);
                    continue;                    
                }

                for(int l=0; l<m; l++){
                    if(s[l] != t[l]) break;
                    count++;
                }

                if(count == m){
                    cout << "YES\n";
                    no = false;
                    break;
                }
                else
                    swap(s[vec[i]], t[vec[j]]);
            }
            if(!no) break;
        }
        if(no) cout << "NO\n";
    }

    return 0;
}