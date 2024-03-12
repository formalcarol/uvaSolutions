#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	while(cin >> a){
		string s;
		stringstream trans;
		int temp, sum=0, cnt=0, j=0;
		int coef[1000]={0};
		
		trans.str("");
		cin.ignore();
		getline(cin, s);
		trans << s;
		
		while(trans >> temp){
			coef[cnt++]=temp;
		}
		
		for(int i=cnt-1; i>0; i--){
			sum += i*coef[j]*pow(a, i-1);
			j++;
		}
		cout << sum << endl;
	}
	return 0;
}