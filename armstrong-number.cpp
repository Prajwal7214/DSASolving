#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    int original=n;

    //count no. of digits
    int count=0;
    int temp=n;

    while(temp>0){
        count++;
        temp = temp/10;
    }

    //calculate armstrong no.
    int sum=0;
    temp=n;

    while(temp>0){
        int digit = temp%10;
        sum = sum + round(pow(digit,count));
        temp = temp/10;
        cout << "Digit = " << digit
     << " Power = " << pow(digit, count)
     << " Sum = " << sum << endl;
    }

    cout << "Final Sum = " << sum << endl;
    if(sum==original){
        cout<<original<<" is an armstrong number"<<endl;
    }
    else{
        cout<<original<<" is not an armstrong number"<<endl;
    }
    
    return 0;
}