#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n) {
        if(n < 7) {
            int fac = 1;
            for(int i=2; i<=n; i++)
                fac *= i;
            cout << n << "!\n" << fac << "\n";
        }
        else {
            char s[1000000];
            int carry = 0, prod;
            double k = 0;
            for(int i=2; i<=n; i++) 
                k += log10(i);
            k = ceil(k);
            memset(s, '0', 1000000);
            s[0] = '0', s[1] = '2', s[2] = '7';

            for(int j=7; j<=n; j++) {
                for(long long i=0; i<k; i++) {
                    prod = (s[i]-'0')*j + carry;
                    s[i] = (prod%10) + '0';
                    carry = prod/10;
                }
            }

            cout << n << "!\n";
            for(long long i=k-1; i>=0; i--)
                cout << s[i];
            cout << "\n";
        }
    }

    return 0;
}