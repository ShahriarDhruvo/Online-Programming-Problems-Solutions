#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];
    for (int i=0; i<3; i++)
        cin >> arr[i];
    sort(arr, arr+3);
    int a, b, c, total;
    b = sqrt((arr[1]*arr[2])/arr[0]);
    a = arr[1]/b;
    c = arr[2]/b;
    cout << (4*a + 4*b + 4*c) << endl;

    return 0;
}