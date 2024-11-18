// // Triangle pattaern with stars
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n= 5;

//     for(int i=0;i<n; i++){
//         for(int j=0;j<i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


// Triangle pattern with numbers
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n= 4;

    for(int i=0;i<n; i++){
        for(int j=0;j<i+1; j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}