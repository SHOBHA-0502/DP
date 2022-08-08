#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f =t;
    while(t--){
    int n,m ; 
    cin>>n >> m;
    string s ;
    cin>>s;
    int count =0;
    while(m--){
    int x,y;
    cin>>x>>y;
    string  k = s.substr(x-1,y-x+1);
    map<char,int>m;
    // cout<<k<<"//"<<endl;
    for(int i =0 ; i<k.size();i++){
      m[k[i]]++;
    }
    bool b = true;
    string ans = "yes";
    if(k.size()>1){
    for(auto i:m){
        // cout<<i.second<<"  ll"<<endl;
      if((i.second)%2 !=0 && b==true){
         b= false;
      }
      else if((i.second)%2 !=0 && b==false){
          ans = "no";
      }
    }
    }
    // cout<<ans<<" ]]"<<endl;
    if(ans == "yes"){
      count++;
    }
    }
    

   
        cout << "Case #" <<f-t<<": " <<count<<endl;
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int f =t;
//     while(t--){
//     int n,m ; 
//     cin>>n >> m;
//     int l = min(n,m);
//     int count =0;
//    for(int i =1; i<=l;i++){
//          count+=i;
//    }
//         cout << "Case #" <<f-t<<": " <<count<<endl;
//     }
// }