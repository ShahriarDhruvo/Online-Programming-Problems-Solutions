#include <bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

// My hopeless implementation T_T (Has a small defect :))
// int string_modulo(string s, int n)
// {
//     int r = 0, l = 1, in = 0, k, v = 0;
//     bool flag = false;
//     while(l != s.length()+1) {
//         k = 0;
//         char q[100000] = {"\0"};
//         //
//         //cout << in << " " << l << " " << v << "\n";
//         for(int j=in; j<l; j++) {
//             if(r != 0 && flag) {
//                 string str = to_string(r);
//                 //cout << str << "***\n";
//                 for(int i=0; i<str.length(); i++) {
//                     q[k] = str[i];
//                     k++;
//                 }
//                 flag = false;
//             }
//             q[k] = s[j];
//             k++;
//         }
//         v = atoi(q);
//         //
//         //cout << v << "*\n";
//         if(v > n) {
//             in = l;
//             r = v % n;
//             l++;
//             flag = true;
//             //
//             cout << r << " **\n";
//         }
//         else {
//             l++;
//             flag = true;
//         }
//         if(v < n && l == s.length()+1) r = v;
//     }
//     return r;
// }

// Implemented this string_modulo from online :V 
int string_modulo(string num, int a) 
{  
    int res = 0; 
   
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
}

int main()
{
    //FastIO;
    string n;
    int c=0;
    while(cin >> n) {
        if(c) cout << "\n";
        bool flag = false, flag2 = false;
        if((string_modulo(n, 4) == 0 && string_modulo(n, 100) != 0) || string_modulo(n, 400) == 0) {
            cout << "This is leap year.\n";
            flag = true;
        }
        if(string_modulo(n, 15) == 0) {
            cout << "This is huluculu festival year.\n";
            flag2 = true;
        }
        if(flag && string_modulo(n, 55) == 0) cout << "This is bulukulu festival year.\n";
        if(!flag && !flag2) cout << "This is an ordinary year.\n";
        c++;
    }

    return 0;
}