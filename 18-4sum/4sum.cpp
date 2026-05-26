class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());vector<vector<int>>result;
        if(nums.size()<4)
        return result;
        for(int i=0;i<nums.size()-2;i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                int start=j+1;int end=nums.size()-1;
                while(start<end)
                {
                    long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[start]+(long long)nums[end];
                    if(sum==target)
                    {
                        result.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start++;
                        end--;
                    }
                    if(sum>target)
                    end--;
                    if(sum<target)
                    start++;
                }
            }
        }
        set<vector<int>>check;
        check.insert(result.begin(),result.end());
         vector<vector<int>>resultt(check.begin(),check.end());
         return resultt;
    }
};