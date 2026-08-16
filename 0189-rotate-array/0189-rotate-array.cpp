class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int arr[nums.size()],j=0;
        k%=nums.size();
        for(int i=nums.size()-k;i<nums.size();i++)
            arr[j++]=nums[i];
        for(int i=0;i<nums.size()-k;i++)
            arr[j++]=nums[i];
        for(int i=0;i<nums.size();i++)
            nums[i]=arr[i];
        // k%=nums.size();
        // if(k!=0)
        // {
        // long int arr[k],j=0;
        // for(int i=nums.size()-k-1;i>=0;i--)
        // {
        //     if(j<k)
        //         arr[j++]=nums[i+k];
        //     nums[i+k]=nums[i];
        // }
        // j=k-1;
        // for(int i=0;i<k;i++)
        //     nums[i]=arr[j--];
        // }
    }
};