#include <bits/stdc++.h>
using namespace std;

bool check(int n, long long int mat[]){
	int left=0, right=n*n-1;
	while(left < right){
		if((mat[left] != mat[right])||(mat[left]<0)||(mat[right]<0)){
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main(){
	int kase, i=1;
	cin >> kase;
	while(kase--){
		int n;
		string s;
		cin >> s >> s >> n;
		long long int mat[n*n]={0};
		for(int i=0; i<n*n; i++){
			cin >> mat[i];
		}
		if(check(n, mat)){
			cout << "Test #" << i << ": Symmetric." << endl;
		}
		else{
			cout << "Test #" << i << ": Non-symmetric." << endl;
		}
		i++;
	}
	return 0;
}