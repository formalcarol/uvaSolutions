#include "bits/stdc++.h"
using namespace std;

int n, m;

bool cmp(int a, int b){
	if(a%m != b%m){
		return a%m < b%m;
	}
	else{
		if((a&1) && (b&1)){			//both odd
			return a > b;
		}
		else if(!(a&1) && !(b&1)){	//both even
			return a < b;
		}
		else{						//one is odd, one is even
			return a&1;				//if a=0, cmp=a&1=0, then b>a
		}							//if a=1, cmp=a&1=1, then a>b
	}
}

int main(){
	while (cin >> n >> m){
		cout << n << " " << m << endl;
		
		vector<int> nums(n);
		for (auto& i : nums){
            cin >> i;
        }
		
		sort(nums.begin(), nums.end(), cmp);
		
		for(auto& i: nums){
			cout << i << endl;
		}
	}
	//first while n=15, m=3
	//print n, m (#25)
	//run while, until no cin
	//second while n=0, m=0
	//print n, m (#25)
	return 0;
}