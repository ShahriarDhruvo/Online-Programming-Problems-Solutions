#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	FastIO;
	string s;
	cin >> s;

	map <int, int> m;

	for(int i=0; i<s.size(); i++) m[i] = 1;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '(') break;
		else m[i] = 0;
	}

	for(int i=s.size()-1; i>=0; i--){
		if(s[i] == ')') break;
		else m[i] = 0;
	}

	for(int i=0; i<s.size()-1; i++){
		if(s[i] == ')' && s[i+1] == '('){
			m[i] = 0;
			m[i+1] = 0;
		}
	}

	int o = 0, c = 0, op = 0;
	vector <int> ovec, cvec;
	vector <int> pvec;

	for(int i=0; i<s.size(); i++){
		if(s[i] == '(' && m[i] == 1){
			o++;
			ovec.push_back(i);
		}
		else if(s[i] == ')' && m[i] == 1){
			c++;
			cvec.push_back(i);

			int k = 0;
			for(int j=i+1; j<s.size(); j++){
				if(s[j] == ')' && m[j] == 1){
					c++;
					k++;
					cvec.push_back(j);
				}
				else break;
			}

			i += k;
			int n = min(ovec.size(), cvec.size());

			for(int k=0; k<n; k++){
				m[ovec[k]] = -1;
				pvec.push_back(ovec[k]);
			}
			for(int k=0; k<n; k++){
				m[cvec[k]] = -1;
				pvec.push_back(cvec[k]);
			}

			ovec.clear();
			cvec.clear();
			op++;
			o = 0;
			c = 0;
		}
	}

	for(int i=0; i<s.size(); i++){
		for(int j=i+1; j<s.size()-1; j++){
			if(s[j] == '(' && s[j+1] ==')' && (m[j] != -1 && m[j+1] != -1)){
				op++;
				pvec.push_back(j);
				pvec.push_back(j+1);
				break;
			}
		}
	}

	sort(pvec.begin(), pvec.end());

	cout << op << "\n";
	if(pvec.size() != 0)
		cout << pvec.size() << "\n";
	for(auto i:pvec)
		cout << i+1 << " ";
	
	return 0;
}