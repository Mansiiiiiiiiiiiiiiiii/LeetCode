class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int n=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=0){

                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2; i++){
            nums[2*i] =pos[i];
            nums[2*i+1] = neg[i];
        }
        return nums;
    }
};