#include <bits/stdc++.h>
using namespace std;

int main(){
	string key="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
	string str;
	while(getline(cin, str)){
		for(auto i: str){
			if(i != ' '){
				cout << key[key.find(tolower(i))-2];
			}
			else{
				cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}