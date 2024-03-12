#include <bits/stdc++.h>
using namespace std;

int f(int num){
	if(num >= 10){
		return f(f(num/10)+(num%10));
	}
	return num;
}

int main(){
	int num;
	while(cin >> num && num!=0){
		cout << f(num) << endl;
	}
	return 0;
}