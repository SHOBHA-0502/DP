#include<bits/stdc++.h>
using namespace std;
int f(int n , long long x, vector<int>&c){
    if(n==0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    vector<long long >dp(x+1,INT_MAX);
    dp[0]=0;
      
    for(long long i =1; i<=x;i++){
        for(int j =0; j<n; j++){
               if(i>=c[j]){
                dp[i]=min(1+dp[i-c[j]],dp[i]);
               }
                
        }
       
    }
    if(dp[x]>x){
        return -1;
    }
    return dp[x];
    


}
int main(){
    int n ;
    long long  x;
    cin>>n>>x;
    vector<int>c;
    for(int i =0 ; i<n;i++){
           int a;
           cin>>a;
           c.push_back(a);
    }
    int k = f(n,x,c);
    
    cout<<k<<endl;
}
