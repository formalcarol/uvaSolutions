#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n, cnt=0;
		cin >> n;
		int num[n];
		for(auto& i: num)	cin >> i;
		
        //bubble sort
		for(int i=n-1; i>0; i--){
			for(int j=0; j<=i-1; j++){
				if(num[j] > num[j+1]){
					swap(num[j], num[j+1]);
					cnt++;
				}
			}
		}
		
		cout << "Optimal train swapping takes " << cnt << " swaps." << endl;
	}
	return 0;
}