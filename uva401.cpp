#include<iostream>
#include<string>
using namespace std;

//Palindrome是左char=右char
bool isPalindrome(string str){
	int left=0, right=str.size()-1;
	while(left < right){
		if(str[left] != str[right]){
			return false;
		}
		left++;
		right--;
	}
	return true;
}

//Mirror是字典[左char]=右char
bool isMirror(string str){
	string dic =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	string rdic = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	int left=0, right=str.size()-1;
	while(left < right){
		size_t index = dic.find(str[left]); //尋找str[left]在dic的index
		if(str[right] != rdic[index]){
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int main(){
	string str;
	while(cin >> str){
		bool palindrome = isPalindrome(str);
        bool mirror = isMirror(str);
        
		if (!palindrome && !mirror){
            cout << str << " -- is not a palindrome.\n" << endl;
        }
        else if (palindrome && !mirror){
            cout << str << " -- is a regular palindrome.\n" << endl;
        }
        else if (!palindrome && mirror){
            cout << str << " -- is a mirrored string.\n" << endl;
        }
        else{
            cout << str << " -- is a mirrored palindrome.\n" << endl;
        }
	}
	return 0;
}