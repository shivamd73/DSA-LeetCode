class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                sum=nums[i];
                if(nums[i]<0)
                    nums[i]=0;
                continue;
            }
            nums[i]+=nums[i-1];
            if(nums[i]>sum)
                sum=nums[i];
            if(nums[i]<0)
                nums[i]=0;
        }
        // for(int i=0;i<nums.size();i++)
        // {
        //     s=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         s+=nums[j];
        //         // s=0;
        //         // for(int k=i;k<=j;k++)
        //         // {
        //         //     s+=nums[k];
        //         // }
        //         if(s>sum)
        //             sum=s;
        //     }
        // }
        return sum;
    }
};