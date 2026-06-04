class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int waviness=0;vector<int>nums;
        if(num1<=99&&num2<=99)
        return 0;
        for(int i=num1;i<=num2;i++)
        {
            int num=i; nums.clear();
            if(num>=100)
            {
            while(num!=0)
            {
                int r=num%10;
                nums.push_back(r);
                num=num/10;
            }
            for(int j=1;j<nums.size()-1;j++)
            {
                if(nums[j]>nums[j-1]&&nums[j]>nums[j+1]||nums[j]<nums[j-1]&&nums[j]<nums[j+1])
                waviness++;
            }
            }
        }
        return waviness;
    }
};