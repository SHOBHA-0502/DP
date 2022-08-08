#include<bits/stdc++.h>
using namespace std;
void printf(int ind , vector<int> v, int arr[], int n){
    if(ind>=n){
        for(int i =0 ; i<v.size();i++){
            cout<<v[i]<<" ";
        }
        if(v.size()==0){
            cout<<"{}";
        }
       cout<< endl;
       return ;
    }
    v.push_back(arr[ind]);
     printf(ind+1,v,arr,n);
    v.pop_back();
     printf(ind+1,v,arr,n);
}
int main(){
    int n=3 ;
    int arr[]={3,1,2}; 
    
    vector<int>v;
    printf(0,v,arr,n);
    return 0;


}