#include<bits/stdc++.h>
using namespace std;

int main(){
	string dic="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string str;
	while(getline(cin, str)){
		for(auto i: str){
			if(i!=' ')	cout << dic[dic.find(tolower(i))-2];
			else		cout << ' ';
		}
		cout << endl;
	}
	return 0;
}