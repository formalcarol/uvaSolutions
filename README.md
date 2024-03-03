## 常用函數
1. tolower('I')轉成小寫, toupper('i')轉成大寫, abs(n)絕對值, size(), sqrt(n)開平方 
2. str.find(char) 在str中尋找char，並回復char的index
    - ref: uva401#26
3. vector<int> text(26), vector<pair<int, char>> ans
    - ref:uva10008
4. isalpha(c) 判斷c是否為子母(非符號或數字或空格等)，回復bool
5. sort(ans.begin(), ans.end(), [](auto a, auto b)) sort(nums.begin(), nums.end());
    - ref: uva10008
6. push_back()
7. for(auto& i: ans) for(auto& i : nums)
8. cout << setw(4) << kase++ << "." 格式控制
9. substr(0, h)
    - ref: uva11576



## 注意事項
1. while(getline(cin, str)) 和 while(cin >> str) 的差別
    - while(cin >> str)遇到空格、換行都會斷開，但while(getline(cin, str))只有遇到換行才段開
    - ex. "how are you"
        - while(cin >> str1 >> str2 >> str3), str1="how", str2="are", str3="you"
        - while(getline(cin, str)), str="how are you"

## 刷題記錄
| 231209  | uva10161 |
| 231210  | uva11576 |
| 240227  | uva401, uva10093 |
| 240228  | uva100, uva10035, uva10041, uva10055, uva10929, uva11321 |
| 240229  | uva10101 |
| 240301  | uva10008, uva10420 |
| 240302  | uva11332 |
| 240303  | uva10222 |