#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;	
	int j=1;
	while(cin >> n){
		int m[n]={0};
		set<int> sum;
		
		for(auto& i: m)	cin >> i;
		
		for(auto i: m){
			for(auto j: m)	sum.insert(i+j);
		}
		
		/*有n個相異的數值，兩兩配對(自己跟自己也可)
		第1個元素，有n種配對；第2個元素，有n-1種配對...第n個元素，有1種配對
		為梯形，n*(n+1)/2*/
		if(sum.size()==(1+n)*n/2)	cout << "Case #" << j << ": It is a B2-Sequence." << endl << endl;
		else	cout << "Case #" << j << ": It is not a B2-Sequence." << endl << endl;
		j++;
	}
	
	return 0;
}