#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		int a, b=0, c=0;
		vector<int> num;
		
		int s;
		for(int i=0; i<n; i++){
			cin >> s;
			num.push_back(s);
		}
		
		sort(num.begin(), num.end());
	
		if(n%2)	a = num[n/2];
		else	a = num[n/2-1];
		
		int min=10000, sum;
		for(auto i: num){
			sum=0;
			for(auto j: num)	sum += abs(i-j);
			if(min>sum){
				min=sum;
				b=1;
			}
			else if(min==sum)	b++;
		}
		
		for(int i=num[0]; i<=num[n-1]; i++){
			sum=0;
			for(auto j: num)	sum += abs(i-j);
			if(min==sum)		c++;
		}
		
		cout << a << " " << b << " " << c << endl;
	}
	return 0;
}