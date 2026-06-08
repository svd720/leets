class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>num1;vector<int>num2;
        vector<int>p;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]<pivot)
           num1.push_back(nums[i]);
           if(nums[i]==pivot)
           p.push_back(nums[i]);
           else if(nums[i]>pivot)
           num2.push_back(nums[i]);
        }
        int x=0;int y=0;int z=0;
        for(int i=0;i<nums.size();i++)
        { 
            if(x<num1.size())
            {nums[i]=num1[x];x++;}
            else if(x>=num1.size()&&y<p.size())
            {nums[i]=p[y];
            y++;}
            else if(x>=num1.size()&&y>=p.size()&&z<num2.size())
            {
                nums[i]=num2[z];
                z++;
            }
        }
        return nums;
    }
};