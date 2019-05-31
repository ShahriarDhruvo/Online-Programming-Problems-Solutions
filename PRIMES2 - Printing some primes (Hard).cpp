#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int limits = 0;

void sieve(int n, vector <int> &prime)
{
    bool mark[n];
    memset(mark, true, sizeof(mark));

    for(int i=2; i*i<n; i++) {
        if(mark[i]) {
            for(int j=i*i; j<n; j+=i)
                mark[j] = false;
        }
    }
    for(int i=2; i<n; i++) {
        if(mark[i]) {
            prime.push_back(i);
            limits++;
            if(i < 3 || limits == 500) {
                limits = 0;
                cout << i << "\n";
            }
        }
    }
}

void segSieve(int n)
{
    vector <int> prime;
    int limit = floor(sqrt(n))+1;
    sieve(limit, prime);

    int low = limit;
    int high = 2*limit;

    while(low < n) {
        if(high > n) high = n;
        bool mark[limit];
        memset(mark, true, sizeof(mark));
        
        for(int i=0; i<prime.size(); i++) {
            int lowLim = floor(low/prime[i])*prime[i];
            if(lowLim < low) lowLim += prime[i];

            for(int j=lowLim; j<high; j+=prime[i])
                mark[j-low] = false;
        }

        for(int i=low; i<high; i++) {
            if(mark[i-low]) {
                limits++;
                if(limits == 500) {
                    limits = 0;
                    cout << i << "\n";
                }
            }
        }
        
        low += limit;
        high += limit;
    }
}

int main()
{
    FastIO;
    int n = 1000000000;
    segSieve(n);

    return 0;
}