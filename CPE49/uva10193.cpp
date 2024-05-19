#include<bits/stdc++.h>
using namespace std;

//輾轉相除法，求最大公因數
int gcd(int p, int q){
	if(p<q)	return gcd(q, p);
	if(q==0)	return p;
	return gcd(q, p%q);

}

//二進位字串 轉 十進位數字
int stringToInt(char s[]){
	int ans=0;
	for(int i=0; i<31; i++){
		if(s[i]=='\0')	break;
		ans*=2;
		if(s[i]=='1')	ans+=1;
	}
	return ans;
}

int main(){
	int kase;
	cin >> kase;
	for(int k=1; k<=kase; k++){
		char s1[31], s2[32];
		cin >> s1 >> s2;
		int n1=stringToInt(s1);
		int n2=stringToInt(s2);
		
		if(gcd(n1, n2)>1){
			cout << "Pair #" << k << ": All you need is love!" << endl;
		}
		else{
			cout << "Pair #" << k << ": Love is not all you need!" << endl;
		}
	}
	return 0;
}