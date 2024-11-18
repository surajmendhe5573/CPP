// sum of all numbers from 1 to n which are divisible by 3

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum= 0;

    for(int i=0;i<=n; i++){
        if(i%3 == 0){
            sum+= i;
        }
    }

    cout<<"Sum is: "<<sum;
}