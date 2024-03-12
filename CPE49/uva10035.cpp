#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m && (n||m)){
		int cnt=0, k=0;
		while(n||m){
			k = n%10 + m%10 + k;
			if(k>=10){
				cnt++;
			}
			n = n/10;
			m = m/10;
			k = k/10;
		}
		
		if(cnt == 0){
			cout << "No carry operation." << endl;
		}
		else if(cnt == 1){
			cout << "1 carry operation." << endl;
		}
		else{
			cout << cnt << " carry operations." << endl;
		}
	}
	return 0;
}