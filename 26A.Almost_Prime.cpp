#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

vector <int> primes;

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
            primes.push_back(i);
        }
    }
}

void segSieve(int n)
{
    int limit = floor(sqrt(n))+1;
    vector <int> prime;
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
            if(mark[i-low]) primes.push_back(i);
        
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
    int count = 0, flag = 0;
    for(int i=1; i<=n; i++) {
        for(int j=0; j<primes.size(); j++) {
            flag = 0;
            if(i%primes[j] == 0) {
                for(int l=j+1; l<primes.size()-1; l++) {
                    if(i%primes[l] == 0) {
                        if(flag != 1) count++;
                        else {
                            count--;
                            break;
                        }
                        flag = 1;
                    }
                }
            }
            if(flag == 1) break;
        } 
    }
    cout << count << "\n";

    return 0;
}