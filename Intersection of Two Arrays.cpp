class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            if(find(nums2.begin(),nums2.end(),nums1[i])!=nums2.end())
            {
                if(find(v.begin(),v.end(),nums1[i])==v.end())
                    v.push_back(nums1[i]);
            }
        }
        return v;
    }
};