#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	bool next=false;
	while(getline(cin, str)){
		if(next)	cout << endl;
		
		int cnt[128]={0};
		
		for(int i=0; i<str.size(); i++){
			cnt[int(str[i])]++;
		}
		
		for(int i=1; i<str.size(); i++){
			for(int j=127; j>=32; j--){
				if(cnt[j]==i)	cout << j << " " << i << endl;
			}
		}
		next=true;
	}
	return 0;
}