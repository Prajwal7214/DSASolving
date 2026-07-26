#include<iostream>
using namespace std;
#include<vector>

class Solution{
public:
    int countDigitOccurence(vector<int>& nums,int digit){
        int count=0;

        for(int num : nums){
            while(num>0){
                int Lastdigit = num%10;
                if(Lastdigit == digit){
                    count++;
                }
                num = num/10;
            }
        }
        return count;
    }
};

int main(){
    Solution sol;

    int n;
    cout<<"enter size of array: ";
    cin>>n;
    vector<int> nums(n);

    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int digit;
    cout<<"find count of digit: ";
    cin>>digit;

    int result=sol.countDigitOccurence(nums,digit);
    cout<<"total count is: "<<result<<endl; 

    return 0;
}