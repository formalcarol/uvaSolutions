#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    char c;
    vector<int> text(26);
    while(cin >> c){
        if(isalpha(c)){
            text[int(toupper(c))-'A']++;
        }
    }
    
    vector<pair<int, char>> ans;
    for(int i=0; i<26; i++){
        if (text[i]){				//delete the alpha which count=0
            ans.push_back({text[i], char(i+'A')});
        }
    }
    
    sort(ans.begin(), ans.end(), [](auto a, auto b){
        if (a.first == b.first){
            return a.second < b.second;	//if a.int = b.int then smaller ASCII first
        }
        return a.first > b.first;		//bigger int first
    });
    
    for (auto& i: ans){
        cout << i.second << " " << i.first << endl;
    }
    
    return 0;
}