#include <bits/stdc++.h>
using namespace std;

int main(){
	string str1, str2;
	while(getline(cin, str1)){
		getline(cin, str2);
		int idx[2][26]={0};		//2string * 26alpha
	
		for(auto i: str1){		//calculate str1
			idx[0][i-'a']++;
		}
		for(auto i: str2){		//calculate str2
			idx[1][i-'a']++;
		}
		for(auto i: str2){
			idx[1][i-'a'] = min(idx[0][i-'a'], idx[1][i-'a']);
		}
		
		for(int i=0; i<26; i++){
			while(idx[1][i] != 0){
				cout << char('a'+i);
				idx[1][i]--;
			}
		}
		cout << endl;
	}
	return 0;
}