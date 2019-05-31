// ICPC Contest Pr-1 :D. Prime Friendly Numbers
#include <bits/stdc++.h>

using namespace std;

int primeFriendlyNumber(unsigned long long z)
{
    unsigned long long i=0,digit, k = 0, p;
    p = z;
	while(z>0)
	{
		digit=z%10;
        if((digit==2||digit==7||digit==3||digit==5) != 1) {
            k = 1;
            break;
        }
		z=z/10;
	}
	if(k == 0) return p;
	else return 0;
}
int main()
{
    unsigned long long n;
    int m, l;
    scanf(" %d", &m);
    for(l=1; l<=m; l++) {
        cin >> n;
        unsigned long long flag = 0, i, j;
        printf("Case %d: ", l);
        for(j=n; j>0; j--) {
            flag = 0;
            for(i=2; i <= sqrt(j); i++) {
                if(j%i == 0) {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0) {
                if(primeFriendlyNumber(j) != 0) {
                    cout << primeFriendlyNumber(j) << endl;
                    break;
                }
            }
        }
    }
}
