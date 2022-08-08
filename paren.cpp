#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f =t;
    while(t--){
    int n,m ; 
    cin>>n >> m;
    int l = min(n,m);
    int count =0;
   for(int i =1; i<=l;i++){
         count+=i;
   }
        cout << "Case #" <<f-t<<": " <<count<<endl;
    }
}