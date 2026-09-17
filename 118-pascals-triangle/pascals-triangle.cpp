class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>nums;vector<int>row;
        nums.push_back({1});
        if(numRows==1)
        return nums;
        nums.push_back({1,1});
        if(numRows==2)
        return nums;
        nums.push_back({1,2,1});
        if(numRows==3)
        return nums;
        for(int i=3;i<numRows;i++)
        {
            row.clear();
            row.push_back(1);
            for(int j=0;j<nums[i-1].size()-1;j++)
            {
                int sum=nums[i-1][j]+nums[i-1][j+1];
                row.push_back(sum);
            }
            row.push_back(1);
            nums.push_back(row); 
        }
      return nums;
    }
};