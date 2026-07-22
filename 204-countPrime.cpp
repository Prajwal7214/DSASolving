 /// prime no.s smaller then n
 //  TLE =time limit exceed mara raha hai
//  class Solution {
// private:
//     bool isPrime(int n){
//         if(n<=1){
//             return false;
//         }
//         for(int i=2;i<n;i++){
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
//     int countPrimes(int n) {
//        int cmt =0;

//        for(int i=2;i<n;i++){
//             if(isPrime(i))
//                 cmt++;
//        } 
//        return cmt;
//     }
// };

//////////////////////////////////////////////////////////////////////////
// time complexity O(n*log(log n))

//204. Count Primes
// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0
 
// Constraints:
// 0 <= n <= 5 * 106

#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int countPrime(int n){
        int cnt = 0;
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;

        for(int i=2;i<n;i++){
            if(prime[i]){
                cnt++;

                for(int j=2*i;j<n;j=j+i){ //i ke table jitne bhi no.s are hai unhe non-prime mark kro                    prime[j]=0;
                    prime[j] = 0;
                }
            }
        }
        return cnt;
    }
};

int main(){
    Solution sol;
    int n=0;
    cin>>n;

    int result = sol.countPrime(n);

    cout<<"no. of prime no.s are: "<<result<<endl;

    return 0;
    
}