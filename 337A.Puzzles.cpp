#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, b = 0;
    cin >> n >> m;
    int arr[m], sol[m-n+1];
    for(int i=0; i<m; i++)
        cin >> arr[i];
    sort (arr, arr+m);

    for(int i=0; i<m-n+1; i++) {
        sol[b] = arr[i+n-1]-arr[i];
        b++;
    }
    sort(sol, sol+m-n+1);
    cout << sol[0] << endl;

    return 0;
}
