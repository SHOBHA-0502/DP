#include<bits/stdc++.h>
using namespace std;
void printf(int ind ,vector<int>v ,int s,int sum ,int arr[],int n){
     if(ind==n){
        if(s==sum){
            for(int i =0 ; i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return ; 
      }
     v.push_back(arr[ind]);
     printf(ind+1 ,v ,s+arr[ind],sum ,arr, n);
     v.pop_back();
      printf(ind+1 ,v ,s,sum ,arr, n);


     
}

int main(){
    int arr[]={1,2,1};
    int n =3;
    int sum = 2;
    vector<int>v;
    printf(0,v,0,sum,arr,n);

}
