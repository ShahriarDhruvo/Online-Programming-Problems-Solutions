#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    if((a+b+c)%3 == 0) cout << "YES";
    else cout << "NO";  
    return 0;
}