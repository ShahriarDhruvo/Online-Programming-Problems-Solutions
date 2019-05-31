#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

vector <int> vec;

int lcm(long n)
{
    for(long i=9; i>1; i--) {
        while(n%i == 0) {
            n /= i;
            vec.push_back(i);   
        }
    }
    if(n == 1) return 0;
    return -1;
}

int main()
{
    FastIO;
    long n;
    cin >> n;
    if(n == 0) {
        cout << 10 << "\n";
        return 0;
    }

    if(n == 1 || n == 2 || n == 3 || n == 5 || n == 7) {
        cout << n << "\n";
        return 0;
    }

    if(lcm(n) != -1) {
        for(long i=vec.size()-1; i >= 0; i--) 
            cout << vec[i];
        cout << "\n";
    }
    else cout << -1 << "\n";

    return 0;
}