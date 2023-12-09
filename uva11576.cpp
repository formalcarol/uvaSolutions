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
					//s.substr = 'TED', 'TE', 'T', ''
					//ans.substr = 'CAT', 'AT', 'T', ''
					//when h=1, substr='T' will match
					ans += s.substr(h);
					//ans='CAT'+'ED'='CATED'
					break;
					//s.substr = 'ATE', 'AT', 'A', ''
					//ans.substr = 'CAT', 'AT', 'T', ''
					//when h=2, substr='AT' will match
					//ans='CAT'+'E'='CATE'
					//s.substr = 'TEA', 'TE', 'T', ''
					//ans.substr = 'ATE' ,'TE', 'E', ''
					//when h=2, substr='TE' will match
					//ans='CATE'+'A'='CATEA'
				}
			}
		}
		cout << ans.size() << endl;
	}
	return 0;
}