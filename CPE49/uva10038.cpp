#include<bits/stdc++.h>
using namespace std;

bool check(int n, int num[]){
	int cnt[n]={0};
	for(int i=0; i<n-1; i++){
		int temp=abs(num[i]-num[i+1]);
		cnt[temp]++;
		if((0>=temp)||(temp>=n)||(cnt[temp]!=1))	return false;
		//差值應介於1到n-1間，且每個差值只能出現1次
	}
	return true;
}

int main(){
	int n;
	while(cin >> n){
		int num[n]={0};
		for(int i=0; i<n; i++){
			cin >> num[i];
		}
		if(check(n, num))	cout << "Jolly" << endl;
		else cout << "Not jolly" << endl;
	}
	return 0;
}