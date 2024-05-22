#include<bits/stdc++.h>
using namespace std;
//x=7, coef={1, -1}, len=2
//2x^3+3x^2-1, 6x^2+6x
//x=7, coef={2, 3, 0, -1}, len=4
int main(){
	int x;
	while(cin >> x){
		int len, ans=0, j=0;
		int coef[1000]={0};
		
		for(len=0;;len++){
			cin >> coef[len];
			if(getchar()=='\n')	break;
		}

		//len應該要先-1再和係數乘，但第14行的break使得最後一次的len沒有+1，所以本來就少1，不用再減
		for(int i=len; i>0; i--){
			ans += i*coef[j]*pow(x, i-1);
			j++;
		}
		cout << ans << endl;
	}
	return 0;
}