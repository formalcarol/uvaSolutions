#include <bits/stdc++.h>
using namespace std;

void split(long long int num){
	if(num >= 10000000){
		split(num/10000000);
		cout << " kuti";
		num %= 10000000;
	}
	if(num >= 100000){
		split(num/100000);
		cout << " lakh";
		num %= 100000;
	}
	if(num >= 1000){
		split(num/1000);
		cout << " hajar";
		num %= 1000;
	}
	if(num >= 100){
		split(num/100);
		cout << " shata";
		num %= 100;
	}
	if(num){
		cout << " " << num;
	}
}

int main(){
	long long int num;
	int kase = 1;
	while(cin >> num){
		cout << setw(4) << kase++ << ".";
		if(num){
			split(num);
		}
		else{
			cout << " 0";
		}
		cout << endl;
	}
	return 0;
}