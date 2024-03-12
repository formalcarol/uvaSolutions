#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	int k=0;
	while(getline(cin, str)){
		for(auto& i: str){
			if(i == '\"'){
				if(k%2==0){
					cout << "``";
				}
				else{
					cout << "''";
				}
				k++;
			}
			else{
				cout << i;
			}
		}
		cout << endl;
	}
	return 0;
}