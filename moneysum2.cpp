#include<bits/stdc++.h>
using namespace std ;


int  main(){
    int n ;
    cin>>n;
    vector<int>v;
    int sum=0;
    for(int i =0 ;i<n ; i++){
        int a ;
        cin>>a ; 
       v.push_back(a);
       sum+=a;
    }
   
    vector<bool>dp(sum+1,false);
    vector<int>bv;
    
    dp[0] =true;
    for(int i =0 ; i<n ; i++){
        for(int j =1 ; j<=sum ; j++){
             if(j>= v[i]){
                dp[j]=dp[j-v[i]] || dp[j];
                if(dp[j]==true){
                    bv.push_back(j);
                   
                }
             }
        }
    }
    cout<<bv.size()<<endl;
    for(int a =0 ; a<bv.size();a++){
     cout<<bv[a]<<" ";
    }
    
    
   
  
    
    return 0;

    

}