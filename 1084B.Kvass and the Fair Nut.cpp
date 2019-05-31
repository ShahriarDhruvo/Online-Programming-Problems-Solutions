#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, s, sum = 0;
    cin >> n >> s;
    long long arr[n], least;
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    least = arr[0];
    long long m = sum-(least*n);
    if (s > sum) least = -1;
    else {
        if (m > s) least = arr[0];
        else {
            while (m < s) {
                m += n;
                least--;
            }
        }
    }

    cout << least << endl;

    return 0;
}
