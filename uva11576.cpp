#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, k, w;
	cin >> n;
	while(cin >> k >> w){
		string ans;
		cin >> ans;
		w--;
		while(w--){
			string s;
			cin >> s;
			for(int h=s.size(); h>=0; h--){
				if(s.substr(0, h) == ans.substr(ans.size()-h)){
					ans += s.substr(h);
					break;
				}
			}
		}
		cout << ans.size() << endl;
	}
	return 0;
}

/*
1. n=2代表有2筆資料要輸入, k=3代表每個字串有3個char，w=2代表有2個字串要輸入
2. 總是兩兩字串相比較 
   -> CAT和TED比較
   -> CAT先和ATE比較(結果是CATE)，再CATE和TEA比較
3. 前面的字串要刪除 前面的 字母 -> ex. CAT的子字串'CAT', 'AT', 'T'
   後面的字串要刪除 後面的 字母 -> ex. TED的子字串'TED', 'TE', 'T'
4. 第10行假設前面的字串為ans，第14行後面的字串為s
   -> ans=CAT, s=TED
   --> 第15行for迴圈 h=3~0, s.substr(0, 3~0) v.s. ans.substr(0~3)
   --> s.substr = 'TED', 'TE', 'T', ''
   --> ans.substr = 'CAT', 'AT', 'T', ''
   --> 當h=1, substr='T'時相等 
   --> ans='CAT'+'ED'='CATED'

   -> ans=CAT, s=ATE
   --> for h=3~0, s.substr(0, 3~0) v.s. ans.substr(0~3)
   --> s.substr = 'ATE', 'AT', 'A', ''
   --> ans.substr = 'CAT', 'AT', 'T', ''
   --> 當h=2, substr='AT'時相等
   --> ans='CAT'+'E'='CATE'

   -> ans=CATE, s=TEA
   --> for h=3~0, s.substr(0, 3~0) v.s. ans.substr(0~3)
   --> s.substr = 'TEA', 'TE', 'T', ''
   --> ans.substr = 'ATE' ,'TE', 'E', ''
   --> 當h=2, substr='TE'時相等
   --> ans='CATE'+'A'='CATEA'
*/
