#include<bits/stdc++.h>
using namespace std ;

int  main(){
    int n ;
    cin>>n ;
    int  arr[n][n];
    for(int i =1 ; i<=n ; i++){
        for(int j =1 ; j<=n ; j++){
            char a;
            cin>>a;
            if(a =='*'){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<"ll"<<" ";
        }
    }
    // cout<<arr[1][1]<<"//"<<endl;
// if(n==1 && arr[1][1]==1|| arr[n][n]==1){
//     cout<<'0'<<endl;
//     return 0;
// }
    for(int i =1 ; i<=n ; i++){
        for(int j =1 ; j<=n ; j++){
        
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // int dp[n][n];
    // int m = 1e9 +7;
    // for(int i=n; i>=1;i--){
    //     for(int j=n ; j>=1 ; j--){
    //         if(i==n && j==n){
    //             cout<<"ues"<<endl;
    //             dp[i][j]=1;
    //         }
    //         else{
    //         int opt1 = dp[i][j+1];
    //         int opt2 = dp[i+1][j];
    //         cout<< arr[i][j]<<" ;"<<endl;
    //         if(i== n|| arr[i][j]==1){
    //             cout<<"mer"<< arr[i][j]<<endl;
    //             opt2 =0;
    //         }
    //         if(j==n|| arr[i][j]==1){
    //             cout<<".eri"<<endl;
    //             opt1=0;
    //         }
    //         cout<<opt1<< " l "<<opt2<<endl;
    //         dp[i][j]= (opt1 + opt2)%m;
            
    //         }
    //         cout<<dp[i][j] << " " <<i<<j<< " d"<<endl;

    //     }
        
    // }
    // cout<< dp[1][1];
    

    
}