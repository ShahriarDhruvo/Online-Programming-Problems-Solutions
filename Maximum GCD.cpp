#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if(!a) return b;
    int g = gcd(b % a, a);
    return g;
}

int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--) {
        vector <int> gcds;
        vector <int> vec;

        char s[1000000], q[1000000];
        int k = 0;
        cin.getline(s, 1000000);
        int m = strlen(s);
        for(int i=0; i<=m; i++) {
            if(s[i] == ' ' || s[i] == '\0') {
                q[k]='\0';
                k=0;
                int l = atoi(q);
                if(l != 0)
                    vec.push_back(l);
            } 
            else {
                q[k] = s[i];
                k++; 
            } 
        }
        // for(int i=0; i<vec.size(); i++)
        //     cout << vec[i] << " ";
        // cout << "\n";
        
        for(int i=0; i<vec.size()-1; i++) {
            for(int j=i+1; j<vec.size(); j++)
                gcds.push_back(gcd(vec[i], vec[j]));
        }
        sort(gcds.begin(), gcds.end());
        cout << gcds[gcds.size()-1] << "\n";
    }

    return 0;
}