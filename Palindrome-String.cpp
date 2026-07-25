#include<iostream>
using namespace std;

class Solution{
public:
    bool isPalindrome(string s){
        int left=0;
        int right=s.length()-1;

        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution sol;
    string s;
    cin>>s;

    bool result = sol.isPalindrome(s);

    if(result){
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;   
    }
    return 0;
}