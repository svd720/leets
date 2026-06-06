class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum;
        leftsum.push_back(0);
        vector<int>rightsum;
        rightsum.push_back(0);
        int lsum=0;int rsum=0;
        for(int i=1;i<nums.size();i++)
        {
             lsum+=nums[i-1];
            leftsum.push_back(lsum);
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            rsum+=nums[i+1];
            rightsum.push_back(rsum);
        }
        reverse(rightsum.begin(),rightsum.end());
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
              result.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return result;
    }
};