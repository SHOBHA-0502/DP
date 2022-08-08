#include<bits/stdc++.h>
using namespace std ;
int  f( int x , vector<int>v){
    vector<int>dp(x+1,0);
    long long m= 1e9 + 7;
    int n = v.size();
    if(n==0){
        return 0;
    }
    if(x==0){
        return 1;
    }
    dp[0]=1;
    for(int i =0 ; i<n ; i++){
        for(int j =1; j<=x; j++){
            if(j>=v[i]){
                dp[j]= (dp[j] + dp[j-v[i]])%m;
            }
        }
    }
    return dp[x];
}
int main(){
    int n ;
    int x;
    cin>>n>>x;
    vector<int>v;
    for(int i =0 ;i<n ; i++){
        int a ;
        cin>>a ; 
       v.push_back(a);
    }
    cout<< f(x, v)<<endl;

}