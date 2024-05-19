#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n, p;
		cin >> n >> p;
		bool num[n]={false};
		
		int day[p]={0};
		for(auto& i: day){
			cin >> i;
		}
		
		for(auto m: day){
			for(int i=m; i<=n; i+=m){
				num[i-1]=true;
			}
			for(int i=0; i<n; i++){
				if((i%7==5)||(i%7==6)){
					num[i]=false;
				}
			}
		}
		
		int ans=0;
		for(int i=0; i<n; i++){
			if(num[i]){
				ans++;
			}
		}
		cout << ans << endl;;
	}
	return 0;
}