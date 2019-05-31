#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isPrime(long long n)
{
    for(long long i=2; i*i<n; i++) {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main() {
    long long n, a, total = 0, k = 0;
    cin >> n >> a;
    long long m = a+n;
    for(long long i=a; i<m; i++) {
        if(isPrime(i)) {
            k = 1;
            total = ((m*(m-1))/2) - ((a*(a-1))/2);
            break;
        }
    }
    if(k != 1) {
        total = (((m-1)*(m-2))/2) - ((a*(a-1))/2);
        while(isPrime(m) != 1) m++;
        total += m;
    }

    cout << total;

    return 0;
}