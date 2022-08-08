/* we use kadane algorithm  to ind maximum subarray sum which mai contain +ve number -ve numberss and 0
but to  find maximum subarry sum we use it 
the logic behind it that ;
maintain two variable
1) current sum ;
2) maximum sum ; 
and one check which is if (current sum become less than zero convert it to zero)
if(currentsum <0){
    current sum =0;
}


//////////////////////////////////////////////////
in find absolute sub array sum problem 
mainthain 4 variables 2variables for +ve maximum sum and 2variables for maximum -ve sum


currmax = currmax +nums[i];
maxsum = max(currmax , maxsum);
if(currmax <0){
    currmax =0;
}

///
currmin = currrmin + nums[i];
minsum =  min( currmin , minsum)

if(currmin>0){
    currmin=0;
}