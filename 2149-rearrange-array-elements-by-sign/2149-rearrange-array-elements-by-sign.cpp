class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int temp[nums.size()],j=0,k=0,t=0;
        vector<int> arr;
        while(j<nums.size() && k<nums.size())
        {
            if(t==0)
            {
                if(nums[j]>0)
                {
                    arr.push_back(nums[j++]);
                    t=1;
                }
                else
                    j++;
            }
            else
            {
                if(nums[k]<0)
                {
                    arr.push_back(nums[k++]);
                    t=0;
                }
                else
                    k++;
            }

        }
        while(j<nums.size())
            if(nums[j]>0)
                arr.push_back(nums[j++]);
            else
                j++;
        while(k<nums.size())
            if(nums[k]<0)
                arr.push_back(nums[k++]);
            else
                k++;
        return arr;
    }
};