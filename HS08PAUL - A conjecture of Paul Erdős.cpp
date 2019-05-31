#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int counter = 0;

bool chk(int n)
{
    for(int y=0; y*y<n; y++) {
        if((y*y*y*y) > n) break;
        for(int x=0; x*x<n; x++) {
            if(((y*y*y*y) + (x*x)) == n) return true;
            if(((y*y*y*y) + (x*x)) > n) break;
        }
    }
    return false;
}

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

    for(int i=2; i<=n; i++) {
        if(mark[i]) {
            prime.push_back(i);
            if(chk(i)) counter++;
        }
    }
}

void segSieve(int n)
{
    vector <int> prime;
    int limit = floor(sqrt(n))+1;
    if(limit > n) limit = n;
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
        for(int i=low; i<high; i++) 
            if(mark[i-low]) if(chk(i)) counter++;

        low += limit;
        high += limit;
    }
}

int main()
{
    FastIO;
    int n;
    cin >> n;
    segSieve(n);
    cout << counter << "\n";

    return 0;
}