#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], firstw, endw;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
        if(arr[n-1] != arr[i]) {
            endw = n-i-1;
            break;
        }
    for(int i=n-1; i>=0; i--)
        if(arr[0] != arr[i]) {
            firstw = i;
            break;
        }
    if(firstw > endw) cout << firstw << endl;
    else cout << endw << endl;

    return 0;
}
