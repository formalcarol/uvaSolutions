#include<bits/stdc++.h>
using namespace std;

int main(){
	string str[101];				//不可以用={0}初始化，只可以for初始化為""
	int n=0, maxLen=0;
	while(getline(cin, str[n])){	//句子內有空格，不可用cin >> str[n]
		if(str[n].size()>maxLen)	maxLen=str[n].size();
		n++;
	}
	
	for(int i=0; i<maxLen; i++){	//i控制字元
		for(int j=n-1; j>=0; j--){	//j控制行數
			if(str[j].size()>i)	cout << str[j][i];
			else{
				if(j!=0)	cout << ' ';
			}
		}
		cout << endl;
	}
	return 0;
}