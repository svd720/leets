class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int evencount=0;int oddcount=0;int validsubs=0;
        for(int i=0;i<nums.size();i++)
        {
            evencount=0;oddcount=0;
            for(int j=i;j<nums.size();j++)
            {
             if(nums[j]%2==0)
             evencount++;
             if(nums[j]%2!=0)
             oddcount++;
              if(oddcount>0&&(long long)evencount*b<=(long long)a*oddcount)
              validsubs++;
            }
        }
        return validsubs;
    }
};