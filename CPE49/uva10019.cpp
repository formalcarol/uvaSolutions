#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n;
		cin >> n;
		int b1=0, b2=0;
		//dec to bin
		for(int i=n; i>0; i/=2){
			b1 += i%2;
		}
		//hex to bin
		for(int i=n; i>0; i/=10){           //取每一位數
			for(int j=i%10; j>0; j/=2){
				b2 += j%2;
			}
		}
		cout << b1 << ' ' << b2 << endl;
	}
	return 0;
}