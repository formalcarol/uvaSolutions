#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int s, d;
	while(cin >> s >> d){
		long long int pos=0;
		while(pos<d){
			pos += s;
			s++;
		}
		cout << --s << endl;
	}
	return 0;
}