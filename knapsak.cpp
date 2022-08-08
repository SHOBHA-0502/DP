#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int knapsak(int w,int wt[],int val[],int n){
    if(n==0||w==0){
        return 0;
    }
    if(wt[n-1]>w){
        return knapsak(w,wt,val,n-1);
    }
    else{
         return  max( val[n-1]+ knapsak(w-wt[n-1],wt,val,n-1) ,knapsak(w,wt,val,n-1));
    }
}

int main(){
    int n ;
    cin>>n ;
    int val[n];
    int wt[n];
    for(int i =0 ; i<n ; i++){
        cin>>val[i];
    }
     for(int i =0 ; i<n ; i++){
        cin>>wt[i];
    }
    int w;
    cin>>w;
    cout<<knapsak(w,wt,val,n)<<endl;

}