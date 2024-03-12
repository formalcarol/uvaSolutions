#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase, sum, dif;
	cin >> kase;
	while(cin >> sum >> dif){
		if(sum >= dif){
			if((sum+dif)%2 != 0){
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