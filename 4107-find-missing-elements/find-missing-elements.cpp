class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());vector<int>nums2;
        int smallest =nums[0];int k=0;
        int largest=nums[nums.size()-1];
        for(int i=smallest;i<=largest;i++)
        {
            if(nums[k]==i)
            k++;
            else if(nums[k]!=i)
             nums2.push_back(i);

        }
        return nums2;
    }
};