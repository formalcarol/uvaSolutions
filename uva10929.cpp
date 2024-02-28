//abs(sum(odd bit)-sum(even bit)) is 0 or 11
#include <bits/stdc++.h>
using namespace std;

int main(){
	string n;
	while(cin >> n && (n!="0")){
		int odd=0, even=0;
		for(int i=0; i<n.size(); i++){
			if(i%2){
				even = even+(n[i]-'0');
			}
			else{
				odd = odd+(n[i]-'0');
			}
		}
		if(abs((even-odd))%11 != 0){
			cout << n << " is not a multiple of 11." << endl;
		}
		else{
			cout << n << " is a multiple of 11." << endl;
		}
	}
	return 0;
}