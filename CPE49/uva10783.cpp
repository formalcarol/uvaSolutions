#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase, a, b, i=1;
	cin >> kase;
	while(cin >> a >> b){
		int sum=0;
		if(!(a%2))	a+=1;
		
		while(a<=b){
			sum+=a;
			a+=2;
		}
		cout << "Case " << i << ": " << sum << endl;
		i++;
	}
	return 0;
}