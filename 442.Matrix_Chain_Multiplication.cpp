#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n;
    cin >> n;

    map <char, pair<int, int> > m;

    char mat;
    int r, c;

    for(int i=0; i<n; i++){
        cin >> mat >> r >> c;
        m[mat] = {r, c};
    }

    map <char, pair<int, int> >:: iterator it;

    string s;
    while(cin >> s){
        int ans = 0;
        char nam = 'a';
        bool error = false;
        stack <char> st;
        stack <char> st2;

        for(int i=0; i<s.size(); i++){
            if(s[i] != ')'){
                st.push(s[i]);
            }
            else{
                while(st.top() != '('){
                    st2.push(st.top());
                    st.pop();
                }
                st.pop();
                while(!st2.empty()){
                    char temp = st2.top();
                    st2.pop();
                    if(m[temp].second != m[st2.top()].first){
                        error = true;
                        break;
                    }
                    ans += m[temp].first * m[temp].second * m[st2.top()].second;
                    m[nam] = {m[temp].first, m[st2.top()].second};
                    st.push(nam++);

                    st2.pop();
                }
                if(error) break;
            }
        }

        if(error) cout << "error" << "\n";
        else cout << ans << "\n";
    }

    return 0;
}
