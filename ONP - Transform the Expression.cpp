#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    string s;
    int n;
    cin >> n;
    while(n--) {
        cin >> s;
        stack <char> symbols;
        vector <char> postfix;
        for(int i=0; i<s.size(); i++) {
            if(s[i] >= 'a' && s[i] <= 'z') 
                postfix.push_back(s[i]);
            else {
                if(!symbols.empty() && s[i] != '(') {
                    if(symbols.top() == '^' && s[i] == '*' || symbols.top() == '^' && s[i] == '/' || 
                    symbols.top() == '^' && s[i] == '+' || symbols.top() == '^' && s[i] == '-' || 
                    symbols.top() == '*' && s[i] == '+' || symbols.top() == '*' && s[i] == '-' || 
                    symbols.top() == '/' && s[i] == '+' || symbols.top() == '/' && s[i] == '-' ||
                    symbols.top() == '*' && s[i] == '/' || symbols.top() == '/' && s[i] == '*' || 
                    symbols.top() == '-' && s[i] == '+' || symbols.top() == '+' && s[i] == '-') {
                        postfix.push_back(symbols.top());
                        symbols.pop();
                        symbols.push(s[i]);
                    }
                    if(s[i] == ')') {
                        while(symbols.top() != '(') {
                            postfix.push_back(symbols.top());
                            symbols.pop();
                        }
                        symbols.pop();
                        continue;
                    }
                }
                symbols.push(s[i]);
            }
        }

        for(int i=0; i<postfix.size(); i++)
            cout << postfix[i];
        cout << "\n";
    }

    return 0;
}