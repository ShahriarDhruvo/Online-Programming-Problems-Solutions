#include <bits/stdc++.h>

using namespace std;

int main()
{

    long int n, l, r;
    scanf("%ld", &n);
    string s;
    cin >> s;
    for(long int i=0; i<n-1; i++) {
        if(s[i] > s[i+1]) {
            printf("YES\n");
            printf("%d %d\n", i+1, i+2);
            return 0;
        }
    }
    printf("NO");

    return 0;
}

