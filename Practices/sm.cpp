// sum of n numbers 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

        // Check for a negative number
    if (n < 0) {
        cout << "Please enter a positive integer or zero." << endl;
        return 1;  // Exit the program if the number is negative
    }



    int sum= 0;

    for(int i=0;i<=n; i++){
        sum+= i;
    }    

    cout<<"The sum is: "<<sum;

    return 0;
}