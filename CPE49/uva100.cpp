/*
1 1
2 1
3 10 5 16 8 4 2 1
4 2 1
5 16 8 4 2 1
6 3 10 5 16 8 4 2 1
7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
8 4 2 1
9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
10 5 16 8 4 2 1
*/
#include <bits/stdc++.h>
using namespace std;

int len(int n){
	int cnt=1;
	while(n != 1){
		if(n%2 == 1){
			n = 3*n+1;
		}
		else{
			n = n/2;
		}
		cnt++;
	}
	return cnt;
}

int main(){
	int n, m;
	while(cin >> n >> m){
		int ans=1;
		for(int i=min(n, m); i<=max(n, m); i++){
			ans = max(len(i), ans);
		}
		cout << n << " " << m << " " << ans << endl;
	}
	return 0;
}