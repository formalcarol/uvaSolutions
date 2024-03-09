#include <bits/stdc++.h>
using namespace std;

bool isOdd(int a){
	if(a%2 == 1){
		return true;
	}
	return false;
}

int main(){
	int kase, a, b, i=1;
	cin >> kase;
	while(cin >> a >> b){
		int sum=0;
		if(!isOdd(a)){
			a+=1;
		}
		while(b >= a){
			sum += a;
			a+=2;
		}
		cout << "Case " << i << ": " << sum << endl;
		i++;
	}
	return 0;
}