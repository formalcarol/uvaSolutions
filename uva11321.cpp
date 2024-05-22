#include <bits/stdc++.h>
using namespace std;
//&&是且，但&是AND最後一位，若(數字&1)=數字為奇數

int m, n;
bool cmp(int a, int b){
	if(a%m != b%m)	return b%m > a%m;			//餘數不相等，則餘數小的先
	else if((a&1) && (b&1))		return a > b;	//ab皆為奇數，則大的先
	else if(!(a&1) && !(b&1))	return b > a;	//ab皆為偶數，則小的先
	else return a&1;							//1奇1偶，則奇的先
}

int main(){
	while(cin >> n >> m){
		cout << n << ' ' << m << endl;

		vector<int> num(n);
		for(auto& i: num){
			cin >> i;
		}
		
		sort(num.begin(), num.end(), cmp);		//sort(num, num+n, cmp);
		for(auto i: num){
			cout << i << endl;
		}
	}
	return 0;
}