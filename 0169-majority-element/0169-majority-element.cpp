class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int hashh[1000000],max=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     hashh[nums[i]]+=1;
        //     if(hashh[nums[i]]>hashh[max])
        //         max=nums[i];
        // }
        // return max;
        unordered_map<int,int> fr;
        for(int i:nums)
        {
            fr[i]++;
            if(fr[i]>nums.size()/2)
                return i;
        }
        return -1;
    }
};