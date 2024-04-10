## 常用函數
1. for(auto& i: nums) 
   - 有出現&，代表可以訪問、訪問
   for(auto& i: nums)
   - 沒出現&，只能訪問，不可訪問

## sorting
### vector
- sort(nums.begin(), nums.end()); 由大至小排序
  sort(nums.begin(), nums.end(), cmp); cmp必定是bool, ref:uva11321
    - 若希望由小至大，則b>a
    - 若希望奇前偶後，則a&1
    - a>b 是希望根據a, b大小排序, ex. 3>2
      a%m > b%m 是希望根據a, b的餘數大小排序, ex. 2%3 > 3%3
  sort(ans.begin(), ans.end(), [](auto a, auto b)) 

### array
- sort(arr, arr+n); ref: uva10041

2. str.find(char) 在str中尋找char，並回復char的index
    - ref: uva401#26
3. vector<int> text(26), vector<pair<int, char>> ans
    - ref:uva10008
4. isalpha(c) 判斷c是否為子母(非符號或數字或空格等)，回復bool
6. push_back()

8. cout << setw(4) << kase++ << "." 格式控制
    - ref: uva10101
9. substr(0, h)
    - ref: uva11576
10. set<int> sum;   
    sum.insert(arr[i]+arr[j]);  //集合沒有重複的值
    - ref: uva11063
1. while(getline(cin, str)) 和 while(cin >> str) 的差別
    - while(cin >> str)遇到空格、換行都會斷開，但while(getline(cin, str))只有遇到換行才段開
    - ex. "how are you"
        - while(cin >> str1 >> str2 >> str3), str1="how", str2="are", str3="you"
        - while(getline(cin, str)), str="how are you"

## 相關主題
1. 回文: uva11349, uva401
2. 排序: uva11321