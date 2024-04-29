#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase, sum, dif;
	cin >> kase;
	while(cin >> sum >> dif){
		if(sum >= dif){
			if((sum+dif)%2 != 0){	//sum和dif必是同號，同號相加為偶數
				cout << "impossible" << endl;
			}
			else{
				int a=(sum+dif)/2;
				int b=(sum-dif)/2;
				cout << a << ' ' << b << endl;
			}
		}
		else{
			cout << "impossible" << endl;
		}
	}
	return 0;
}