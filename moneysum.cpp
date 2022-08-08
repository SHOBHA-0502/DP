#include<bits/stdc++.h>
using namespace std ;
void  f(int i , int n , vector<int>v,vector<int>&l,set<int>&s){
  if(i>=n ){
    int sum =0;
    if(l.size()==0){
        return;
    }
    for(int j=0 ; j<l.size();j++){
       sum+=l[j];
    }
  
    s.insert(sum);
    
    return ;
  }
  l.push_back(v[i]);
  f(i+1,n,v,l,s);
  l.pop_back();
  f(i+1,n,v,l,s);

}
int  main(){
    int n ;
    
    cin>>n;
    vector<int>v;
    for(int i =0 ;i<n ; i++){
        int a ;
        cin>>a ; 
       v.push_back(a);
    }
    int i =0; 
    vector<int>l;
    set<int>s;
     set<int >::iterator itr;
    f(i , n ,v,l,s);
    cout<<s.size()<<endl;
      for (itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
    
    return 0;
}