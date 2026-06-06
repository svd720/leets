class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<long long >result(n,1);int c=1;
        const int mod =1e9+7;
        while(c<=k)
        {
            for(int i=1;i<result.size();i++)
            {
                long long  sum=((long long) result[i]+result[i-1])%mod;
                result[i]=sum;
            }
            c++;
        }
        return result[result.size()-1];
    }
};