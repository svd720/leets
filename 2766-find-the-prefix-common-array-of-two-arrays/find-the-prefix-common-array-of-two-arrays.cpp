class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();vector<int>result;vector<int>test1;int c=0;
        vector<int>test2;
        for(int i=0;i<n;i++)
        {
            c=0;
           test1.push_back(A[i]);
           test2.push_back(B[i]);
           for(int j=0;j<test1.size();j++)
           {
            for(int x=0;x<test2.size();x++)
            {
                if(test1[j]==test2[x])
                c++;
            }
           }
           result.push_back(c);
            }
        return result;
    }
};