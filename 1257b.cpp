#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,t;
	cin>>t;
	vector<int> v;
	int i=1;
	while(i<10000){
		v.push_back(i);
		i*=3;
	}
	while(t--){
		cin>>x;
		int ans = INT_MAX;
		bool f=0;
		for(int j=0;j<v.size();j++){
			if(v[j]>=x)
			{
				ans = v[j];break;
			}
			for(int k=j+1;k<v.size();k++)
			{
				if(v[j]+v[k]<ans && v[j]+v[k]>=x)
					ans=v[j]+v[k];
				if(v[j]+v[k]==x)
				{
					f=1;break;
				}
			}
			if(f)
				break;
		}	
		cout<<ans<<endl;
	}
	return 0;
}
