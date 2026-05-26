class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) { 
      int start=0;int end=numbers.size()-1;int index1,index2=0;
      while(start<end)
      {
        int sum=numbers[start]+numbers[end];
        if(sum==target){
            index1=start+1;index2=end+1;
            break;
        }
        if(sum>target)
        end--;
        if(sum<target)
        start++;
      }
       return {index1,index2};
    }
};