#include<bits/stdc++.h>
using namespace std;

int checkPrime(int num){
    int count= 0;

    for(int i=1;i<num; i++){
        if( num%i==0){
            count++;
        }
    }
    if(count==2){
        return 0;
    }
    return 1;
     
}
int main(){
   int n;
   cin>>n;

   cout<<checkPrime(n);
}