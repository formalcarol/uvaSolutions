#include<iostream>
#include<string>
using namespace std;

int main(){
	string n;
	while(cin >> n){
		int sum=0, max=1, temp, j;
		for(int i=0; i<n.size(); i++){
			if('0'<=n[i] && n[i]<='9'){
				temp = n[i]-'0';
				if(max < temp){
					max = temp;
				}
				sum += temp;
			}
			else if('A'<=n[i] && n[i]<='Z'){
				temp = n[i]-'A'+10;
				if(max < temp){
					max = temp;
				}
				sum += temp;
			}
			else if('a'<=n[i] && n[i]<='z'){
				temp = n[i]-'a'+36;
				if(max < temp){
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
		if(j==62){
			cout << "such number is impossible!" << endl;
		}
	}
	return 0;
}

/*
1. 題目: (n)base(ans) 可以被ans-1整除, 2<=ans<=62 給n找最小的ans
   -> ex. (5)base(6)=5 可以被6-1=5整除
   -> ex. (10)base(2)=2 可以被2-1=1整除
   -> ex. (11)base(2)=3 可以被2-1=1整除
   -> ex. (B)base(12)=11 可以被12-1=11整除
   -> ex. (236)base(12)=330 可以被12-1=11整除
   -> ex. (752)base(8)=490 可以被8-1=7整除
   -> ex. (AB5)base(14)=2119 可以被14-1=13整除
2. n有x位數，每個位數相加sum為k的倍數，且n為k+1進位
   -> ex. n=5有1位數 sum=5為k的倍數，且5為b進位
1. 題目要求ans整除sum
2. 先確認sum
   -> ex. n=5 sum=5, n=15, sum=6, n=AB, sum=21
   -> 因為輸入可能不只一個char(ex. 12)，所以第9行每次都處理1個char
   -> 每個char透過ASCII分別處理: 0-9, A-Z(代表10-35), a-z(代表36-61)，再累加成為sum
3. 在計算sum過程中，要保留所有char的最大數值max
   因為n的base一定大於等於max -> ex. n=15 base=10>=5, n=A base=16>=10
   因此第32行尋找ans時，從max開始到62
   -> ex. n=5 sum=5 max=5 j=5 5%5 ans=5+1=6
   -> ex. n=10 sum=1 max=1 j=1 1%1 ans=1+1=2            -> 
   -> ex. n=11 sum=2 max=1 j=1 2%1 ans=1+1=2
   -> ex. n=B sum=11 max=11 j=11 11%11 ans=11+1=12
   -> ex. n=236 sum=11 max=6 j=6~11 11%11 ans=11+1=12    
   -> ex. n=752 sum=14 max=7 j=7 14%7 ans=7+1=8
   -> ex. n=AB5 sum=26 max=11 j=11~13 26%13 ans=13+1=14
*/