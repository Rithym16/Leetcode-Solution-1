//code
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //we need to sort the given array
        sort(nums.begin(),nums.end());
        int pair_sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pair_sum=nums[i]+nums[nums.size()-1-i];
            maxi=max(maxi,pair_sum);
        }
        return maxi;
    }
};
