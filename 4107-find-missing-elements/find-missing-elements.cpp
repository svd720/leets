class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());vector<int>nums2;
        int smallest =nums[0];int c=0;
        int largest=nums[nums.size()-1];
        for(int i=smallest;i<=largest;i++)
        {
            c=0;
            for(int j=0;j<nums.size();j++)
            {
                 if(i==nums[j])
                 {
                    c++; break;
                 }
            }
            if(c==0)
            nums2.push_back(i);
        }
        return nums2;
    }
};