#include<iostream>
using namespace std;

class Solution{
public:
    bool checkPerfectNumber(int num){
        int sum =0;

        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        if(sum==num){
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

    
    int result = sol.checkPerfectNumber(n);
    if(result){
        cout<<n<<" is a perfect number"<<endl;
    }
    else{
        cout<<n<<" is not a perfect number"<<endl;
    }

    return 0;
}