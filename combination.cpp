#include<bits/stdc++.h>
using namespace std ;
int f(int n){
    vector<long long>dp(n+1,0);
    long long m =1e9+7;
      if(n<0){
        return 0;
     }
     if(n==0){
        return 1;
     }
     if(n==1){
        return 1;
     }
     if(n==2){
        return 2;
     }
     dp[0]=1;
     dp[1]=1;
     dp[2]=2;
     for(int i =3;i<=n;i++){
        for(int j =1 ; j<=6; j++){
            if(i>=j){
                dp[i] = (dp[i]+dp[i-j])%m;
            }
        }
     }
   return (dp[n]);
   

    
     
}
int main(){
    int n ; 
     cin>>n ;
    cout<<f(n)<<endl;
     
     

}