#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k=1;
	while(cin >> n){
		int arr[n]={0};
		set<int> sum;
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
				sum.insert(arr[i]+arr[j]);
			}
		}
		
		if(sum.size() == (1+n)*n/2){
			cout << "Case #" << k << ": It is a B2-Sequence." << endl << endl;
		}
		else{
			cout << "Case #" << k << ": It is not a B2-Sequence." << endl << endl;
		}
		k++;
	}
	return 0;
}