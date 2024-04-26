#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int cnt=0;		//要放在while外，不會因為換行就重新計數
	while(getline(cin, str)){
		for(auto& i: str){
			if(i=='\"'){
				cnt++;
				if(cnt%2)	cout << "``";
				else	cout << "''";
			}
			else	cout << i;
		}
		cout << endl;
	}
	return 0;
}