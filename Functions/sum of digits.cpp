#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
    int digSum= 0;

    while(num > 0){
        int lastDig= num %10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main(){
    cout<<sumOfDigits(1452);

    return 0;
}