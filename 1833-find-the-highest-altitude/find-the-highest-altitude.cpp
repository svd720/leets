class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitudes;
        altitudes.push_back(0);
        int sum=0;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            altitudes.push_back(sum);
        }
        int max=INT_MIN;
         for(int i=0;i<altitudes.size();i++)
         {
         if(altitudes[i]>max)
         max=altitudes[i];
         }
        return max;
    }
};