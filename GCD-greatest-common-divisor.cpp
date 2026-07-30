#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int gcd=1;

    int minNum = min(a,b);
    for(int i=1;i<=minNum;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD OF "<<a<<" and "<<b<<" is "<<gcd<<endl;
    return 0;
}