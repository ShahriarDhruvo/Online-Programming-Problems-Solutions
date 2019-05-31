#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n, a, b, c;
    cin >> n;
    while(n--) {
        cin >> a >> b >> c;
        int btem1[b], btem2[b], ctem[c], ppos[a], pos = 0, k = 0;
        for(int i=0; i<a; i++) ppos[i] = 1;
        bool flag = true, end = false;
        for(int i=0; i<b; i++)
            cin >> btem1[i] >> btem2[i];
        for(int i=0; i<c; i++)
            cin >> ctem[i];
        for(int i=0; i<c; i++) {
            flag = true;
            for(int j=0; j<b; j++) {
                if(btem1[j] == ctem[i]+ppos[k]) {
                    ppos[k] = btem2[j];
                    if(ppos[k] >= 100) end = true;
                    flag = false;
                    k++;
                    if(k == a) k = 0;
                    break;
                } 
            }
            if(end) break;
            if(flag) {
                ppos[k] += ctem[i];
                if(ppos[k] >= 100) break;
                k++;
                if(k == a) k = 0;
            }
        } 
        for(int i=0; i<a; i++) {
            if(ppos[i] > 100) ppos[i] = 100; 
            printf("Position of player %d is %d.\n", i+1, ppos[i]);
        }
    }

    return 0;
}