#include <bits/stdc++.h>
using namespace std;

int m, n;
bool cmp(int a, int b){
	if(a%m == b%m){
		if((a&1) && (b&1)){			//both odd, larg first
			return a > b;
		}
		else if(!(a&1) && !(b&1)){	//both even, small first
			return b > a;
		}
		else{						//one is odd and one is even, odd first
			return a&1;				//if a=0, cmp=a&1=0, then b>a
		}							//if a=1, cmp=a&1=1, then a>b
	}
	return b%m > a%m;				//if not equal, small mod first
}

int main(){
	while(cin >> n >> m){
		cout << n << ' ' << m << endl;
		vector<int> nums(n);
		for(auto& i: nums){
			cin >> i;
		}
		
		sort(nums.begin(), nums.end(), cmp);
		for(auto i: nums){
			cout << i << endl;
		}
	}
	return 0;
}