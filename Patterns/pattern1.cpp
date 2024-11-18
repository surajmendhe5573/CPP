// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=5;

//     for(int i=1;i<=n; i++){
//         for(int j=1;j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// /*
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// */


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;

    int num= 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}

/*
1 2 3 
4 5 6
7 8 9
*/