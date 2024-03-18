#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n, sum=0;
		cin >> n;
		int arr[n]={0};
		for(int i=0; i<n; i++){
			cin >> arr[i];
		}
		
		sort(arr, arr+n);
		for(int i=0; i<n; i++){
			sum += abs(arr[n/2]-arr[i]);
		}
		cout << sum << endl;
	}
	return 0;
}