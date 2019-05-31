#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    while(scanf("%d", &n)) {
        if(n == 0) return 0;
        if(n < 2) {
            cout << "Discarded cards:\n";
            cout << "Remaining card: " << n << "\n";
            continue;
        }
        list <int> lis;
        vector <int> vec;
        for(int i=1; i<=n; i++)
            lis.push_back(i);
        while(lis.size() >= 2) {
            for(list <int>::iterator i=lis.begin(); i!=lis.end();) {
                vec.push_back(*i);
                if(i == lis.end()) break;
                else i++;
                lis.push_back(*i);
                lis.pop_front();
                if(i == lis.end()) break;
                else i++;
                lis.pop_front();
            }
        }
        k = vec[vec.size()-1];
        vec.pop_back();
        cout << "Discarded cards: ";
        for (int i=0; i<vec.size()-1; i++) 
            cout << vec[i] << ", ";
        cout << vec[vec.size()-1];
        cout << "\n";
        cout << "Remaining card: " << k << "\n";
    }

    return 0;
}