#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, k;
    scanf("%d %d", &c, &k);
    int ch[c], ke[k];
    for(int i=0; i<c; i++)
        scanf("%d", &ch[i]);
    for(int i=0; i<k; i++)
        scanf("%d", &ke[i]);
    int ec = 0, oc = 0, ek = 0, ok = 0;
    for(int i=0; i<c; i++) {
        if(ch[i] % 2 != 0) oc++;
        else ec++;
    }
    for(int i=0; i<k; i++) {
        if(ke[i] % 2 != 0) ok++;
        else ek++;
    }
    int count = min(ec, ok) + min(ek, oc);
    printf("%d\n", count);

    return 0;
}