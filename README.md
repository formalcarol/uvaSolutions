## 輸入資料
1. 讀入kase筆資料, uva10041
```
int kase;
cin >> kase;
while(kase--)
```
2. 沒有說有幾筆資料，讀到結束, uva10055
```
while(cin >> s)
```
3. 讀到0結束, #uva10035
```
while(cin >> s && (s != 0))
while(cin >> a >> b && (a != 0 || b != 0))
```
### 注意事項
```
char c;
string str;
cin >> c;			//會忽略空格
cin.get(c);			//不會忽略空格，換行停止
getline(cin, str);	//不會忽略空格，換行停止
```

## 輸出資料
```
cout.precision(4);              //輸出固定4位數，uva10056
cout << fixed << ans << endl;

cout << setw(4) << kase++ << ".";   //保留4位, uva10101
```

## 數字
### 數字限制
- int 介於 -(2^31)~(2^31)-1 或 小於10 digits
- unsigned int 介於 0~(2^32)-1
- long long int 介於 -(2^63)~(2^63)-1
### 注意事項
- int不可以用.size()，但str有.size()
### 奇數偶數
- &&是且，但&是AND最後一位，若(數字&1)=數字為奇數, uva11321
### 123456拆分成特定節斷, #uva10035, #uva10101
```
int main(){
    int n=123456;

    //固定截斷，分成12,34,56
    int base=100;
    int a=n/base/base%base; //獲得12
    int b=n/base%base;      //獲得34
    int c=n%base;           //獲得56

    //不固定節斷，分成1,23,456
    divide(n);
}
void divide(int n){
	int base[]={100000, 1000, 1};   //獲得前面
    int mod[]={10, 100, 1000};      //獲得後面
    for(int k=0; k<3; k++){
        int v=a/base[k]%mod[k];     
    }
}
```

## 字元
- ASCII有128碼，空格=32，'0'-'9'=48-57，'A'-'Z'=65-90，'a'-'z'=97-122
- toupper(char 數字)=數字的ASCII, toupper(char 符號)=符號的ASCII    //uva10008
- str.find(target)	//在str中尋找target

## vector
```
vector<int> num;                          //uva10041
num.clear();                              //uva10041
cin >> s; num.push_back(s);               //uva10041
sort(num.begin(), num.end());             //由小排到大uva10041
```

## map
```
map<string, int> cnt;                             //uva10420
cin >> country; cnt[country]++;                   //key會自動排序, uva10420
```

## set
1. 會自動排序
2. 相同的元素只會出現1次
```
set<int> sum;                           //uva11063
for(auto i: m){                         //uva11063
    for(auto j: m)	sum.insert(i+j);
}
sum.size()==(1+n)*n/2                   //uva11063
```

## for(auto& i: cnt)
```
//num是vector
for(auto& i: num){      //i的修改會影響到num, uva11321
    cin >> i;
}
for(auto i: num){       //i的修改不會影響到num, uva11321
    cout << i << endl;
}
```
```
//cnt是map
for(auto i=cnt.begin(); i!=cnt.end(); i++){		  //輸出1: i是指標, uva10420
    cout << i->first << " " << i->second << endl;       
}
for(auto& i: cnt) {                               //輸出2: i是物件, uva10420
	cout << i.first << " " << i.second << endl;
}
```

## stack
```
stack<int> st;      //宣告, uva100931
st.push(i%2);       //加值
cout << st.top();   //輸出最晚進的值
st.pop();           //刪最晚進的值
```

## Sort, Search
```
int main(){
    vector<int> vec={2, 4, 3, 1, 5};
    //預設升序排列
    sort(vec, vec+5);
    sort(vec.begin(), vec.end());
    //降序排列
    sort(vec, vec+5, greater<int>());
    sort(vec.begin(), vec.end(), greater<int>());
    //自定義降序排列
    sort(vec.begin(), vec.end(), cmp1);
    //自定義其他排序1: 餘數升序排列, uva11321
    sort(vec.begin(), vec.end(), cmp2);
    //自定義其他排序2: 奇數先偶數後, uva11321
    sort(vec.begin(), vec.end(), cmp3);
}

//cmp只要return true，就是第1個參數先，第2個參數後
bool cmp1(int a, int b){
    return a>b;             //若a大b小，則a>b為true，a先b後，降序排列
}                           //若a小b大，則a>b為false，b先a後，降序排列
bool cmp2(int a, int b){
    return b%m > a%m;       //若a%m大b%m小，則b%m>a%m為false，b先a後，則餘數小的先
}                           //若a%m小b%m大，則b%m>a%m為true，a先b後，則餘數小的先
bool cmp3(int a, int b){    //若1奇1偶
    return a&1;             //若a為奇，則a&1為true，則a先b後，則奇先偶後
}                           //若a為偶，則a&1為false，則b先a後，則奇先偶後
```
## Greedy Algorithm
- 使用迴圈，每次都選最好的

## Dynamic Programming

## Graph Traversal
### DFS
### BFS

## Minimum Spanning Tree
### Prim
### Kruskal

## Shortest Path
### Bellman-Ford
### Dijkstra
### Floyd-Warshall
### A*

## Maximum Flow
### Floyd-Fulkerson
### Push-Relabel