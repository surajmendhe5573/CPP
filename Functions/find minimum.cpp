#include<bits/stdc++.h>
using namespace std;

int minOfTwo(int a,  int b){
    if( a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<"Min: "<<minOfTwo(7, 57);

    return 0;
}


// Parameters: Used in function definitions.
// Arguments: Used in function calls.