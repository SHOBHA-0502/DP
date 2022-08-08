#include<bits/stdc++.h>
using namespace std ;
int f(int n, vector<int>vp,vector<int>vb,int x){
    int dp[n+1][x+1];
    if(n==0){
        return 0;
    }
    if(x==0){
        return 0;
    }
    for(int i =0 ; i<=n ; i++){
        dp[i][0]=0;
        
    }
     for(int i =0 ; i<=x; i++){
        dp[0][i]=0;
        
    }
    for(int i =1;i<=n;i++){
        for(int j =1 ;j<=x;j++){
            if(j>=vp[i-1]){
             dp[i][j]=max(vb[i-1]+dp[i-1][j-vp[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]= dp[i-1][j];
            }
        }
    }
    return dp[n][x];

     
     
 }



int main(){
   int n ;
   int x;
   cin>>n>>x;
   if(n==0){
    return 0;
   }
   if(x==0){
    return 1;
   }
   vector<int>vp,vb;
   for(int i =0 ; i<n;i++){
    int a ;
    cin>>a ;
    vp.push_back(a);
   }
   for(int i =0 ; i<n;i++){
      int a ;
      cin>>a ;
      vb.push_back(a);
   }

   int z = f(n,vp,vb,x);
   cout<<z<<endl;
}