#include<iostream>
#include<cmath>
using namespace std;

class Solution{
    public:
    double myPow(double x,int n){
        long long exponent = n;

        if(exponent<0){
            x = 1/x;
            exponent = -exponent;
        }

        double ans =1;

        while(exponent>0){
            if(exponent%2==1){
                ans *= x;
            }

            x *= x;
            exponent /= 2;

        }
        return ans;
    }
};

int main(){
    Solution sol;
    double x;
    int n;
    cin>>x>>n;

    double result = sol.myPow(x,n);
    cout<<"result is: "<<result<<endl;

    return 0;
}