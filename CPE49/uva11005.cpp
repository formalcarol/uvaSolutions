#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	for(int k=1; k<=kase; k++){
		if(k>1)	cout << endl;                   //case和case間的換行
		cout << "Case " << k << ":" << endl;
		
		//字元需要的ink量table
		int ink[36]={0};
		for(int i=0; i<36; i++){
			cin >> ink[i];
		}
		
		int kase2;
		cin >> kase2;
		while(kase2--){
			int number;
			cin >> number;
			
			int ans[37]={0};
			for(int base=2; base<=36; base++){      //number轉成base進位
				for(int i=number; i>0; i/=base){
					ans[base] += ink[i%base];
				}
			}
			
            //找最小值
			int min = ans[2];
			for(int i=2; i<=36; i++){
				if(ans[i]<min)	min=ans[i];
			}
			cout << "Cheapest base(s) for number " << number << ":";
			for(int i=2; i<=36; i++){   //最小值只有1個，但擁有最小值的不只1個
				if(min==ans[i])	cout << " " << i;
			}
			cout << endl;
		}
	}
	return 0;
}