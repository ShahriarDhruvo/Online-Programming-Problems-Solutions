#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

void printVec(vector <int> a)
{
    for(int i=0; i<a.size(); i++) 
        cout << a[i] << " ";
    cout << "\n";
}

bool vecSearch(int n, vector <int> vec, int init)
{
    for(int i=init; i<vec.size(); i++)
        if(vec[i] == n) return true;
    return false;
}

int main()
{
    //FastIO;
    int n;
    cin >> n;
    int s[n];
    bool flag = true;
    bool flag2 = false;
    vector <int> A;
    vector <int> B;
    for(int i=0; i<n; i++)
        cin >> s[i];
    //sort(s, s+n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<A.size(); j++) {
            if(s[i] == A[j]) {
                A.push_back(s[i]);
                flag = true;
                flag2 = true;
                break;
            }
        }
        if(flag2) {
            flag2 = false;
            if(flag) flag = false;
            else flag = true;
            continue;
        }
        if(flag) {
            flag = false;
            A.push_back(s[i]);
        }
        else {
            flag = true;
            B.push_back(s[i]);
        }
    }
    int countA = 0;
    bool flag3 = true;
    for(int i=0; i<A.size(); i++) {
        flag3 = true;
        for(int j=0; j<A.size(); j++) {
            if(j == i) continue;
            if(A[i] == A[j]) {
                flag3 = false;
                break;
            }
        }
        if(flag3) countA++;
    }

    cout << countA << " " << B.size() << "\n\n";

    if((countA+B.size())%2 == 0) {
        cout << "YES\n";
        while(countA != B.size()) {
            A.push_back(B[B.size()-1]);
            countA++;
            B.pop_back(); 
        }
        countA = 0;
        int countB = 0;
        flag = true;
        for(int i=0; i<n; i++) {
            if(vecSearch(s[i], A, countA) && flag) {
                cout << "A ";
                countA++;
                flag = false;
            }
            else if(vecSearch(s[i], B, countB) && flag == false) {
                cout << "B ";
                countB++;
                flag = true;
            }
            else cout << "A ";
        }
        cout << "\n";
    }
    else cout << "NO\n";
    printVec(A);
    printVec(B);
    cout << "\n\n";
    // for(int i=0; i<n; i++)
    //     cout << s[i] << " ";
    // cout << "\n";

    return 0;
}