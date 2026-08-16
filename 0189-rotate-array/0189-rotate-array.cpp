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
    }
};