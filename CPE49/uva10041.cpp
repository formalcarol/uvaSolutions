#include "bits/stdc++.h"
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int ans=0, n;
		cin >> n;
		vector<int> nums(n);
		for(auto& i : nums){
            cin >> i;
        }
        
        sort(nums.begin(), nums.end());
        
        int mid = nums[n/2];
        for(auto& i : nums){
            ans += abs(mid-i);
        }
		cout << ans << endl;
	}
}