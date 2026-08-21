class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum,count=0;
        for(int i=0;i<nums.size();i++)
        {
            sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum==k)
                    count++;
            }
        }
        return count;
        // int sum,count=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum=0;
        //         for(int l=i;l<=j;l++)
        //         {
        //             sum+=nums[l];
        //             // if(sum>k)
        //             //     break;
        //         }
        //         if(sum==k)
        //         {
        //             count++;
        //         }
        //         // if(sum>k)
        //         //     break;
        //     }
        // }
        // return count;
    }
};