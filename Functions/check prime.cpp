#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n){
    bool isPrime= true;

    for(int i=2;i<=n-1; i++){
        if(n%i == 0){
            isPrime= false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime Number";
    }else{
        cout<<"Not Prime";
    }
}
int main(){
    checkPrime(7);

    return 0;
}

