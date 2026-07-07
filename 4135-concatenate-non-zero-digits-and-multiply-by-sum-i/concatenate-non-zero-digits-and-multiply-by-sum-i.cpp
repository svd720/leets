class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<long long>sum1;long long sum2=0;long long sum=0;
        while(n!=0)
        {
            if(n%10!=0)
            sum1.push_back(n%10);
            n=n/10;
        }
        reverse(sum1.begin(),sum1.end());
        for(int i=0;i<sum1.size();i++)
        {
            sum=sum*10+sum1[i];
        }
        long long x=sum;
        while(sum!=0)
        {
            sum2+=sum%10;
            sum=sum/10;
        }
        return x*sum2;

    }
};