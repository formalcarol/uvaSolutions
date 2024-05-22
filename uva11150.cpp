#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, ans=0, k=0;
	while(cin >> n){
		ans=n;
		while(n>=3){
			k=n%3;
			n/=3;
			ans+=n;
			n+=k;
		}
		if(n==2)	ans++;
		cout << ans << endl;
	}
	return 0;
}