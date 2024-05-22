#include <iostream>
using namespace std;

int main(){
	//build fib table
	int fib[40]={0, 1};             //0 1 1 2 3 5 8，但判斷是1 2 3 5 8 (第19行設置i>=2)
	for(int i=2; i<40; i++){		//fib[40]<100,000,000
		fib[i]=fib[i-1]+fib[i-2];
	}
	
	int kase;
	cin >> kase;
	
	while(kase--){
		int num;
		bool preone = false;
		cin >> num;
		cout << num << " = ";
		for(int i=39; i>=2; i--){   //num=1，i=2，進入for，輸出1，進入if，num=0，preone=true，i=1，不會再進for，因為不滿足i>=2
			if(num >= fib[i]){      //num=2，i=3，進入for，輸出1，進入if，num=0，preone=true，i=2，再進for，進入else if，輸出0，i=1，結束
				cout << "1";
				num -= fib[i];
				preone = true;
			}
			else if(preone){
				cout << "0";
			}
		}
		cout << " (fib)" << endl;
	}
	return 0;
}