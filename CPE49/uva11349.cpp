#include<bits/stdc++.h>
using namespace std;

bool check(int n, long long int m[]){
	int left=0, right=n*n-1;
	while(left<right){
		if(m[left]!=m[right]||m[left]<0||m[right]<0)	return false;
		left++;
		right--;
	}
	return true;
}

int main(){
	int kase; cin >> kase;
	int j=1;
	while(kase--){
		int n;
		string s;
		cin >> s >> s >> n;
		long long int m[n*n]={0};
		for(auto& i: m)	cin >> i;
		
		if(check(n, m))	cout << "Test #" << j << ": Symmetric." << endl;
		else	cout << "Test #" << j << ": Non-symmetric." << endl;
		j++;
	}
	return 0;
}