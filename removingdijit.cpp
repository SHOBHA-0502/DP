#include<bits/stdc++.h>
using namespace std ;
int f(int n){
    if( n == 0){
        return 0;
    }
    string s = to_string(n);
    vector<char> a(s.begin(), s.end());
    char t = *max_element(a.begin(), a.end());
    
    int k = t-'0';
    // cout<<k<<"//"<<endl;
     return 1 + f(n-(k));


}

int  main(){
    int n ;
    cin>>n ;
    
    
    cout<< f(n)<<endl;;
    
    
    return 0;
}