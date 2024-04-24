#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1, str2;
	while(getline(cin, str1)){
		getline(cin, str2);
		
		int cnt1[26]={0};
		int cnt2[26]={0};
		
		for(auto i: str1)	cnt1[i-'a']++;
		for(auto i: str2)	cnt2[i-'a']++;
		
		for(auto i: str2)	cnt2[i-'a']=min(cnt1[i-'a'], cnt2[i-'a']);
		
		for(int i='a'; i<='z'; i++){
			while(cnt2[i-'a']){
				cout << char(i);
				cnt2[i-'a']--;
			}
		}
		cout << endl;
	}
	return 0; 
}