#include<bits/stdc++.h>
using namespace std;

int factorialN(int n){
    int fact= 1;

    for(int i=1;i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout<<"factorial is: "<<factorialN(5);

    return 0;
}


// Parameters: Used in function definitions.
// Arguments: Used in function calls.