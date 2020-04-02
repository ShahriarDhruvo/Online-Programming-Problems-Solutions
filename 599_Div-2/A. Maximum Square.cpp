#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
    FastIO;
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        int arr[m];
        for(int i=0; i<m; i++)
            cin >> arr[i];

        sort(arr, arr+m, greater<int>());

        int largest = 0;

        for(int i=0; i<m; i++){
            int hi = arr[i], count = 0;
            for(int j=0; j<m; j++){
                if(arr[j] >= hi) count++;
            }
            if(count >= hi){
                if(hi > largest)
                    largest = hi;
            } 
            else{
                if(count > largest) largest = count;
            }
        }

        cout << largest << "\n";
    }

    return 0;
}