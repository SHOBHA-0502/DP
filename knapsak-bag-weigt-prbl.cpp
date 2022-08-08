int knapsak(int wt[],int val[],int w , int n){
    //base case for the recursion 
    if(n==0|| w==0){
        return 0;
    }
    //code for choise diagram ..
    /* besically when the element of weight array have less weight then the limit
    weight then we have two choise 
    1) to include that weight in the array 
    2) or not include the weight in the array
    But when the weight of the element is greater than the weight of the bag then 
   1) the we have only ine choise not to include 
   */
  if(wt[n-1]<=w){
    return max(wt[n-1]+ knapsak(wt,val,w-wt[n-1],n-1),knapsak(wt,val,w,n-1));

  }
  else{
    return knapsak(wt,val,w,n-1);
  }

}