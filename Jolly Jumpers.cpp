#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    bool flag2 = true;
    while(cin >> n) {
        if(n <= 0) flag2 = false;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        vector <int> vec;
        for(int i=0; i<n-1; i++)
            vec.push_back(abs(arr[i]-arr[i+1]));
        sort(vec.begin(), vec.end());
        bool flag = true;
        for(int i=0; i<n-1; i++) {
            if(!flag2) break;
            if(vec[i] != i+1) {
                cout << "Not jolly\n";
                flag = false;
                break;
            }
        }
        if(flag && flag2) cout << "Jolly\n";
        if(!flag2) cout << "Not jolly\n";
    }

    return 0;
}