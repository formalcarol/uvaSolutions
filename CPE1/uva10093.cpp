#include <bits/stdc++.h>
using namespace std;

int main(){
	string in;
	while(cin >> in){
		int max=1, sum=0, temp, j;
		for(int i=0; i<in.size(); i++){
			if(('0' <= in[i])&&(in[i] <= '9')){
				temp = in[i]-'0';
				if(temp > max){
					max = temp;
				}
				sum += temp;
			}
			else if(('A' <= in[i])&&(in[i] <= 'Z')){
				temp = in[i]-'A'+10;
				if(temp > max){
					max = temp;
				}
				sum += temp;
			}
			else if(('a' <= in[i])&&(in[i] <= 'z')){
				temp = in[i]-'a'+36;
				if(temp > max){
					max = temp;
				}
				sum += temp;
			}
		}
		
		for(j=max; j<62; j++){
			if(sum%j == 0){
				cout << j+1 << endl;
				break;
			}
		}
		
		if(j == 62){
			cout << "such number is impossible!" << endl;
		}
	}
	return 0;
}