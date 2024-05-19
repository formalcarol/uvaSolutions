#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	while(cin >> n >> m){
		if(m==1 || m==0){
			cout << "Boring!" << endl;
			continue;
		}
		
		int i=n;
		while(n%m==0 && n>1){
			n/=m;
		}
		
		if(n!=1)	cout << "Boring!" << endl;
		else{
			n=i;
			while(n%m==0 && n>1){
				cout << n << " ";
				n/=m;
			}
			cout << '1' << endl;
		}
	}
	return 0;
}