// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;

//     for(int i=1;i<=n; i++){
//         for(int j=1;j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// /*
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0;i<n; i++){
        for(int j=1;j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/