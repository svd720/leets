class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>nums;
        if(rowIndex==0)
        return {1};
        if(rowIndex==1)
        return {1,1};
        if(rowIndex==2)
        return {1,2,1};
        nums.push_back({1});nums.push_back({1,1});nums.push_back({1,2,1});
        vector<int>row;
        for(int i=3;i<=rowIndex;i++)
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
            return row;
        
    }
};