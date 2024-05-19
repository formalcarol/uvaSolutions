#include<bits/stdc++.h>
using namespace std;

int p[1000000]={0};

int main(){
	for(int i=2; i<1000; i++){
		for(int j=2*i; j<1000000; j+=i)	p[j]=1;
	}

	int n, rn;
	while(cin >> n){
		int ori=n;
		for(rn=0; n>0; n/=10)	rn = rn*10+(n%10);
		
		if(p[ori])	cout << ori << " is not prime." << endl;
		else if(p[rn])	cout << ori << " is prime." << endl;
		else if(ori==rn)		cout << ori << " is prime." << endl;
		else	cout << ori << " is emirp." << endl;
	}
	return 0;
}