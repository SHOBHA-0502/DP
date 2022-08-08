#include<bits/stdc++.h>
using namespace std;

 int main(){
    int n ; int m ;
    cin>>n >>m;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    int pos=0;
    for(int i =0 ; i<n ; i++){
        if(i==0 && arr[i]==0){
           pos+=3;
        }
        else if(i<n-1 && arr[i]==0){
            int k = abs(arr[i-1]-arr[i+1]);
            if(k==0){
                pos+=3;
            }
            else if(k==1){
                pos+=3;
            }
            else if(k==2){
                pos+=1;
            }
        
            else if(i==n-1 && arr[i]==0){
           pos+=3;
        }
    }
    }
    cout<<pos<<endl;
   
 }