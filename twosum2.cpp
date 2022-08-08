#include<bits/stdc++.h>
using namespace std ;

int  main(){
    long long  n ;
    cin>>n;
    long long  sum = (n*(n+1))/2;
    vector<int>v;
    if(sum%2!=0){
        cout<<"0";
        return 0;
    }
    for(int i =1 ; i<=n;i++){
           v.push_back(i);
    }
    int a =(sum/2);
    int dp[n+1][a+1];
    
    for(int i =0 ;i<=a;i++){
        dp[0][i]= 0;
    }
    for(int i = 0 ;i<=n;i++){
        dp[i][0]=1;
    }
    dp[0][0]=1;
    long long m = 1e9 +7;
    for(int i =1; i<=n; i++){
        for(int j =1; j<=a;j++){
            if(j>=v[i-1]){
                dp[i][j]=(dp[i-1][j]+dp[i-1][j-v[i-1]])%m;
            }
            else{
                dp[i][j]= (dp[i-1][j])%m;
            }
        }

    }
    long long l = 500000004;
    cout<<(dp[n][a]*l)%m;




    
    return 0;
}