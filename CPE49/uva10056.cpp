#include <bits/stdc++.h>
using namespace std;

int main(){
	int kase;
    cin >> kase;
    while(kase--){
    	int n, i;
        float p;
        cin >> n >> p >> i;
        float q =1-p;
        if(p==0){
        	cout << "0.0000" << endl;
        }
        else{
        	float result = (pow(q, (i-1))*p)/(1-pow(q, n));
            cout.precision(4);
            cout << fixed << result << endl;
        }
    }
	return 0;
}

/*
獲勝機率p，失敗機率q=1-p
在第1回合第i人獲勝 = 前i-1人都失敗&第i人獲勝 = (q^(i-1))*p
在第2回合第i人獲勝 = (q^(n+i-1))*p + (q^(i-1))*p
    情況1: 第1回合沒有人獲勝 & 第2回合前i-1都失敗&第i人獲勝 = (q^n)*(q^(i-1))*p = (q^(n+i-1))*p
    情況2: 第1回合有人獲勝(但不是i) & 第2回合第i人獲勝 = (q^(i-1))*p
在第3回合第i人獲勝 = (q^(2n+i-1))*p + (q^(i-1))*p
    情況1: 第1回合沒有人獲勝 & 第2回合沒有人獲勝 & 第3回合前i-1都失敗&第i人獲勝 = (q^(2n+i-1))*p
    情況2: 第1回合沒有人獲勝 &
    情況3: 第1回合有人獲勝(但不是i) & 第2回合有人獲勝(但不是i) & 第3回合第i人獲勝 = (q^(i-1))*p
*/