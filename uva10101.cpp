#include<bits/stdc++.h>
using namespace std;

//45897458973958 = 4589745,89,73,9,58 = 89l 73h 9s 58
//4589745 = 45,89,7,45 = 45l 89h 7s 45k

void divide(int a, int start){
	int mod[] = {100, 100, 10, 100};			//控制後面
	int base[] = {100000, 1000, 100, 1};		//控制前面
	char* s[] = {" lakh", " hajar", " shata", ""};
	for(int k=0; k<4; k++){
		int v=a/base[k]%mod[k];
		if(v==0 && start==false)	continue;	//若是第1個片段(start=0)，且該片段沒有滿前面的單位(v=0)，則不用輸出，跳至該片段的下1個單位，k++
		start=true;								//ex.   89745,0000000, b=89745=0089745是第1個片段(start=0)，且lakh=0，則不用輸出，繼續判斷hajar
		if(v)	cout << " " << v << s[k];		//ex. 1289745,0000000, b=1289745是第1個片段(start=0)，但lakh=12，則需輸出，再判斷hajar
	}
}

int main(){
	long long int n, kase=1;
	while(cin >> n){
		cout << setw(4) << kase++ << ".";
		
		int base=10000000;
		int a=n/base/base%base;		//第15位(最多有999999999999999)
		int b=n/base%base;			//第8-14位
		int c=n%base;				//第1-7位
		
		divide(a, 0);
		if(a)	cout << " kuti";
		
		divide(b, a);
		if(a|b)	cout << " kuti";
		
		divide(c, a|b);
		
		if(n==0)	cout << " 0";
		cout << endl;
	}
	return 0;
}