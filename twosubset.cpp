#include<bits/stdc++.h>
using namespace std ;
void f(int i,int a,vector<int>v,vector<int>&z,int &count){
    // cout<<"//"<<endl;
    int n = v.size();
    if(i>=n){
        int sum =0;
      for(int i =0 ;i<z.size();i++){
         sum+=z[i];
      }
      if(sum==a){
        count++;
      }
      return ;
    }
    z.push_back(v[i]);
    f(i+1,a,v,z,count);
    z.pop_back();
    f(i+1,a,v,z,count);
    

}


int  main(){
    int n ;
    cin>>n;
    int sum = n*(n+1)/2;
    vector<int>v;
    if(sum%2!=0){
        cout<<"0";
        return 0;
    }
    for(int i =1 ; i<=n;i++){
           v.push_back(i);
    }
    int a =(sum/2);
    vector<int>z;
    cout<<a<<endl;
     int count =0 ;
     f(0,a,v,z,count);
    cout<<(count/2)<<endl;
    
    return 0;
}