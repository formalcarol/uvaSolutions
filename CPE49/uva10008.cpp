#include<bits/stdc++.h>
using namespace std;

int main(){
	int len;
	int cnt[128]={0};   //ASCII有128碼
	char c;
	while(cin >> c){        //第1個輸入是kase，但數字不包含計算，會被忽略，所以不用寫
		len++;              //全部的char，包含數字和符號
		cnt[toupper(c)]++;  //toupper(char 數字)=數字的ASCII, toupper(char 符號)=符號的ASCII，所以都不會影響A~Z的區間
	}                       //toupper('4')=52, toupper('!')=33
	while(--len){           //題目要求根據count排序，最大的就是len，所以直接從len往下數，沒有排序
		for(c='A'; c<='Z'; c++){
			if(cnt[c]==len)	cout << c << ' ' << cnt[c] << endl;
		}
	}
	
	return 0;
}