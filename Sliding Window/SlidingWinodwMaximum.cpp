class Solution {
public:
    //Idea here to use deque data structure efficintly.. In this question we 
    //have to find the maxinum element in the fixed sized sliding window..
  
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        deque<int>dq;
        int n = nums.size();
        int i=0,j=0;
        
        while(j<n){
          
            /* till the last element in deque is smaller than the current number
we remove that element from deque because we want to find the maximum element 
in that window... Now just think we have greater element than the element 
which is at the end of deque then that smaller element is of no use for us
so simply we remove it from the back of deque*/
          
            while(dq.size()>0 && dq.back()<nums[j]){
                dq.pop_back();
            }
          
            //after removing all the smaller elements we push the larger element
            // into the queue
          
            dq.push_back(nums[j]);
            
            /* now we know this is fixed sized sliding window so until our 
            window size reaches k we should increase our j */
          
            if(j-i+1<k)j++;
            
            /*as soon as our window becomes k sized then the front element 
            of deque is our maximum element from that particular window */
          
            else if(j-i+1 == k){
                res.push_back(dq.front());
                
                //if our i is pointing to the same element which is present 
                // at the front of deque then we should remove it
              
                if(nums[i] == dq.front())dq.pop_front();
               
                //this is the point where we slide our window
                i++;j++;
            }
            
        }
        return res;
    }
};
