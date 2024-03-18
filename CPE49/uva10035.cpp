#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b;
	while((cin >> a >> b)&&(a!=0)&&(b!=0)){
		int sum=0, temp=0;
		while((a!=0)||(b!=0)){
			temp = a%10 + b%10 + temp;
			if(temp >= 10){
				sum++;
			}
			a = a/10;
			b = b/10;
			temp = temp/10;
		}
		
		if(sum==0){
			cout << "No carry operation." << endl;
		}
		else if(sum==1){
			cout << "1 carry operation." << endl;
		}
		else{
			cout << sum << " carry operations." << endl;
		}
	}
	return 0;
}