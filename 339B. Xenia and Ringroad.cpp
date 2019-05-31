#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int arr[m] = {};
    for (int i=0; i<m; i++) cin >> arr[i];
    long long int time = 0;
    long long int ipos = 1;
    for (int i=0; i<m; i++) {
        if (arr[i] > ipos) {
            while (ipos != arr[i]) {
                time++;
                ipos++;
            }
        }
        else if (arr[i] < ipos) {
            while (ipos != n) {
                time++;
                ipos++;
            }
            ipos = 0;
            while (ipos != arr[i]) {
                time++;
                ipos++;
            }
        }
    }

    cout << time;

    return 0;
}
