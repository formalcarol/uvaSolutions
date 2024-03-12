#include <bits/stdc++.h>
using namespace std;
bool check(int i, int num[]){
	int cnt[i]={0};
	for(int k=0; k<i-1; k++){
		int temp = abs(num[k]-num[k+1]);
		cnt[temp]++;
		if((1 > temp) || (temp > i) || (cnt[temp]!=1)){
			return false;
		}
	}
	return true;
}

int main(){
	int i;
	while(cin >> i){
		int num[i]={0};
		
		for(int j=0; j<i; j++){
			cin >> num[j];
		}
		
		if(check(i, num)){
			cout << "Jolly" << endl;
		}
		else{
			cout << "Not jolly" << endl;
		}
	}
	return 0;
}