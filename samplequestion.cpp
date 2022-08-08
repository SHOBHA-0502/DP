#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int k =t;
    while(t--){
    int n,m ; 
    cin>>n >> m;
    vector<int>v;
    for(int i =0;i<n;i++){
        int a;
        cin>>a ;
        v.push_back(a);
        }
        int sum = accumulate(v.begin(),v.end(),0);
        cout << "Case #" <<k-t <<": " << (sum%m)<<endl;
    }
}