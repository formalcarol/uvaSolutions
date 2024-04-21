#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase, n, s;		//有kase組，每組有n個數字
	vector<int> num;	//每組的數字會存入num
	
	cin >> kase;
	while(kase--){
		cin >> n;
		num.clear();
		
		for(int i=0; i<n; i++){
			cin >> s;
			num.push_back(s);
		}
		
		sort(num.begin(), num.end());	//由小排到大
		
		int mid = num[n/2];
		int sum = 0;
		for(int i=0; i<n; i++){
			sum += abs(num[i]-mid);
		}
		
		cout << sum << endl;
	}
	return 0;
}