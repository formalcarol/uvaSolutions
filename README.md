## 輸入資料
1. 讀入kase筆資料, #uva10041
```
int kase;
cin >> kase;
while(kase--){
    //程式碼
}
```
2. 沒有說有幾筆資料，讀到結束, #uva10055
```
int s;
while(cin >> s){
    //程式碼
}
```
3. 讀到0結束, #uva10035
```
int s;
while(cin >> s && (s != 0)){
    //程式碼
}
```

## 數字
### 數字限制
- int 介於 -(2^31)~(2^31)-1 或 小於10 digits
- unsigned int 介於 0~(2^32)-1
- long long int 介於 -(2^63)~(2^63)-1
### 123拆分成1, 2, 3, #uva10035
```
int main(){
    int a, b, lenA, lenB;   //int不可以用.size()或.length()，故沒有lenA=a.size();
    cin >> a >> b;
    int arrA[11]={0}, arrB[11]={0}, sum[12]={0};
    divide(a, arrA, lenA);
    divide(b, arrB, lenB);
}
void divide(int n, int arr[], int& len){
	for(len=0; n!=0; len++){
		arr[len] = n%10;
		n /= 10;
	}
}
```

## vector
- vector<int> num;              //uva10041
- num.clear();                  //uva10041
- cin >> s; num.push_back(s);   //uva10041
- 由小排到大 sort(num.begin(), num.end());  //uva10041

## Sort, Search

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