#include <bits/stdc++.h>

using namespace std;

void print(char s[1000000])
{
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0,
        count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    for(long long i=0; i<strlen(s); i++) {
        if(s[i] == '0') count0++;
        else if(s[i] == '2') count2++;
        else if(s[i] == '3') count3++;
        else if(s[i] == '4') count4++;
        else if(s[i] == '5') count5++;
        else if(s[i] == '6') count6++;
        else if(s[i] == '7') count7++;
        else if(s[i] == '8') count8++;
        else if(s[i] == '9') count9++;
    }
    printf("   (0)%0.5d    (1)%0.5d    (2)%0.5d    (3)%0.5d    (4)%0.5d\n    (5)%0.5d    (6)%0.5d    (7)%0.5d    (8)%0.5d    (9)%0.5d\n",
           count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
}

void printi(string s)
{
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0,
        count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    for(long long i=0; i<s.length(); i++) {
        if(s[i] == '0') count0++;
        else if(s[i] == '2') count2++;
        else if(s[i] == '3') count3++;
        else if(s[i] == '4') count4++;
        else if(s[i] == '5') count5++;
        else if(s[i] == '6') count6++;
        else if(s[i] == '7') count7++;
        else if(s[i] == '8') count8++;
        else if(s[i] == '9') count9++;
    }
    printf("   (0)%0.5d    (1)%0.5d    (2)%0.5d    (3)%0.5d    (4)%0.5d\n    (5)%0.5d    (6)%0.5d    (7)%0.5d    (8)%0.5d    (9)%0.5d\n",
           count0, count1, count2, count3, count4, count5, count6, count7, count8, count9);
}

int main()
{
    int n;
    while(cin >> n) {
        if(n < 7) {
            int fac = 1;
            for(int i=2; i<=n; i++)
                fac *= i;
            //cout << n << "! --\n" << fac << "\n";
            cout << n << "! --\n";
            string ans = to_string(fac);
            printi(ans);
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

            cout << n << "! --\n";
            char q[1000000] = {"\0"};
            for(long long i=k-1, j=0; i>=0; i--, j++) q[j] = s[i];
            print(q);
        }
    }

    return 0;
}
