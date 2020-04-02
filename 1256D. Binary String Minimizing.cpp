#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false)

using namespace std;

int main()
{
	//FastIO;
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		long long k;
		scanf(" %d %lld", &n, &k);

		char arr[n];
		vector <int> vec;
		scanf("%s", arr);

		for(int i=0; i<n; i++){
			if(arr[i] == '0'){
				vec.push_back(i);
			}
		}

		int j = 0;
		bool foo = false;

		for(int i=0; i<n; i++){
			if(arr[i] != '0'){
				if(k == 0 || j == vec.size() || foo) break;
				while(i > vec[j]){
					j++;
					if(j == vec.size()){
						foo = true;
						break;
					}
				}
				if(k == 0 || j == vec.size() || foo) break;
				if(k >= vec[j]-i){
					k -= vec[j]-i;
					swap(arr[vec[j]], arr[i]);
					j++; 
				}
			}
		}

		for(long long i=0; i<n; i++)
			printf("%c", arr[i]);
		printf("\n");
	}

	return 0;	
}