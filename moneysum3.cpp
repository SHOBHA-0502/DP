#include<bits/stdc++.h>
using namespace std ;


int  main(){
    int n ;
    cin>>n;
    set<int>s;
     set<int >::iterator i;
    while(n--){
        int x;
        cin>>x ;
        if(s.size()==0){
    
            s.insert(x);
            continue;
        }

        vector<int>temp;
        int k = s.size();
        for(i = s.begin();i!=s.end();i++){
    
              temp.push_back(*i+x);
         }
         s.insert(x);
        
        for(int j =0 ; j<temp.size();j++){

            s.insert(temp[j]); 
        }

         
    }
    cout<<s.size()<<endl;
    i=s.begin();
     for(i = s.begin();i!=s.end();i++){
              cout<<*i<<" ";
         }
    
   

}