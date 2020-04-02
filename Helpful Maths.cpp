#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sum;
    vector <int> arr;
    cin >> sum;
    for(int i=0; i<sum.length(); i++) {
        if(sum[i] == '+') continue;
        arr.push_back(sum[i]-48);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i++)
        cout << arr[i] << '+';
    cout << arr[arr.size()-1] << "\n";
}