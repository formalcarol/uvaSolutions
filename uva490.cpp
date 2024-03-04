#include <bits/stdc++.h>
using namespace std;

int main(){
	string str[101];
	int n=0, maxLen=0;
	
	while(getline(cin, str[n])){
		if(str[n].size() > maxLen){
			maxLen = str[n].size();
		}
		n++;
	}
	
	for(int i=0; i<maxLen; i++){		//i is col, first to end 
		for(int j=n-1; j>=0; j--){		//j is row, back to first
			if(str[j].size() > i){
				cout << str[j][i];
			}
			else{
				if(j!=0){
					cout << ' ';
				}
			}
		}
		cout << endl;
	}
	return 0;
}