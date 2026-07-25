#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int original=n;
//     long long reverse=0;

//     while(n>0){
//         int digit=n%10;
//         reverse = reverse*10+digit;
//         n/=10;
//     }
//     if(original==reverse){
//         cout<<"is palindrome"<<endl;
//     }
//     else{
//         cout<<"not palindrome"<<endl;
//     }
//     return 0;

//     }

//leetcode solution
class Solution{
    public:
    bool isPalindrome(int n){
        if(n<0){
            return false;
        }

        int original=n;
        long long reverse=0;

        while(n>0){
            int digit=n%10;
            reverse = reverse*10+digit;
            n=n/10;
        }
        if(original==reverse){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;

    int result = sol.isPalindrome(n);
    if(result){
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;

    }