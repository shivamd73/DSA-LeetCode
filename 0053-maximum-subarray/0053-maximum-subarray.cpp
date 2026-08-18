class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN,s;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(s>sum)
                sum=s;
            if(s<0)
                s=0;
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