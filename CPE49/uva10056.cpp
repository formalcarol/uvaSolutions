#include<bits/stdc++.h>
using namespace std;

int main(){
	int kase;
	cin >> kase;
	while(kase--){
		int n, i;
		float p, q, ans;
		cin >> n >> p >> i;
		q = 1-p;
		ans = pow(q, i-1)*p/(1-pow(q, n));
		
		if(p){
			cout.precision(4);
	        cout << fixed << ans << endl;
        }
        else	cout << 0.0000 << endl;
		
	}
	return 0;
}

/*
獲勝機率p，失敗機率q=1-p
在第1回合第i人獲勝 = 前i-1人都失敗&第i人獲勝 = (q^(i-1))*p
在第2回合第i人獲勝 = 第1回合沒有人獲勝 & 第2回合前i-1都失敗&第i人獲勝 = (q^n)*(q^(i-1))*p = (q^(n+i-1))*p
在第3回合第i人獲勝 = 第1回合沒有人獲勝 & 第2回合沒有人獲勝 & 第3回合前i-1都失敗&第i人獲勝 = (q^(2n+i-1))*p
所以第i人獲勝機率 = 第1回合第i人獲勝+第2回合第i人獲勝+第3回合第i人獲勝+... = (q^(i-1))*p + (q^(n+i-1))*p + (q^(2n+i-1))*p
提出共同項q^(i-1)*p，並使用無線等比級數(r=q^n) = q^(i-1)*p*(1/(1-q^n))
*/