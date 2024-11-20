// // Print an array.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int marks[5]= {99, 76, 88, 98, 87};

//     for(int i=0;i<5; i++){
//         cout<<marks[i]<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number of array elements: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements: "<<endl;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

   cout<<"These are array elemenets: "<<endl;
   for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
   }

    return 0;

}