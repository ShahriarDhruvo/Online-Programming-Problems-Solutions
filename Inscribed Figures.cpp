#include <bits/stdc++.h> 
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

typedef long long ll;

int main()
{
    //FastIO;
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n-1; i++) {
        if((arr[i] == 2 && arr[i+1] == 3) || (arr[i] == 3 && arr[i+1] == 2)) {
            cout << "Infinite" << "\n";
            return 0;
        }
    }   
    for(int i=0; i<n-1; i++) {
        if(arr[i] == 1 && arr[i+1] == 2) count += 3;
        if(arr[i] == 2 && arr[i+1] == 1) count += 3;
        if(arr[i] == 1 && arr[i+1] == 3) count += 4;
        if(arr[i] == 3 && arr[i+1] == 1) {
            if(arr[i+2] == 2) count += 3;
            else count += 4;
        }
    }
    cout << "Finite" << "\n" << count << "\n";

    return 0;
}