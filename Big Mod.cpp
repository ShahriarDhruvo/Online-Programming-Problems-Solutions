#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long b, p, m;
    while(cin >> b >> p >> m) {
        long long temp = p;
        vector <long long> pb;
        while(temp != 0) {
            pb.push_back(temp%2);
            temp /= 2;
        }
        //reverse(pb.begin(), pb.end());
        
        /*
        cout << "Binary of P is: ";
        for(int i=0; i<pb.size(); i++) 
            cout << pb[i] << " ";
        cout << "\n";*/

        long long x = b % m;
        
        vector <long long> ans;
        ans.push_back(x);
        for(int i=1; i<pb.size(); i++) {
            
            x = (x*x) % m;
            ans.push_back(x);
        }

        /* 
        cout << "The mods are: ";
        for(int i=0; i<ans.size(); i++) 
            cout << ans[i] << " ";
        cout << "\n";*/

        long long sum = 1;
        for(int i=0; i<pb.size(); i++)
            if(pb[i]) sum = (sum * ans[i]) % m;

        //cout << "Modulo is: " << sum % m <<"\n";
        cout << sum % m <<"\n";
    }

    return 0;
}