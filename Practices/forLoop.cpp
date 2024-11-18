// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     int sum= 0;
//     for(int i=0;i<=n; i++){
//         sum+= i;
//     }

//     cout<<"Sum is: "<<sum;

//     return 0;
// }

// print sum of all odd numbers from 1 to n.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum= 0;

    for(int i=0; i<=n; i++){
        if(i%2==0)
        sum+= i;
    }

    cout<<"The sum of all odd numbers is: "<<sum;
}