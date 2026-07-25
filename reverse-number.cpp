#include<iostream>
using namespace std;
#include<climits>

class Solution{
    public:
    int reverse(int n){
        long long reverse=0;
        while(n>0){
            int digit=n%10;

            while(reverse>INT_MAX/10 || reverse<INT_MIN/10){
                return 0;
            }
            reverse = reverse*10+digit;
            n=n/10;
        }
        return reverse;
    }
};

int main(){
    Solution sol;
    int n;
    cin>>n;

    int result = sol.reverse(n);
    cout<<result<<endl;

    return 0;
}