#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l = 1, k;
    scanf("%d", &n);
    while(l<=n) {
        scanf("%d", &k);
        int arr[k];
        for(int i=0; i<k; i++)
            scanf("%d", &arr[i]);
        int t = 0, lo = 0;
        for(int i=0; i<k-1; i++) {
            if(arr[i+1] > arr[i]) t++;
            else if(arr[i+1] < arr[i]) lo++;
        }
        printf("Case %d: %d %d\n", l, t, lo);
        l++;
    }   

    return 0;
}