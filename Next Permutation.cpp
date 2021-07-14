class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-2;
        int element_of_interest;
        while(i>=0&&nums[i]>=nums[i+1])
        {
            i--;
        }
        //find greter element on right side
        if(i>=0)
        {
            int j=nums.size()-1;
            while(j>=0&&nums[j]<=nums[i])
                j--;
            
            swap(nums[i],nums[j]);
        }
        //Now reverse the remaining number
        i=i+1;
       int j=nums.size()-1;
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++; j--;
        }  
        
    }
};