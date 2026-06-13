class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string weight="";int sum=0;
        for(int i=0;i<words.size();i++)
        {
            sum=0;
            for(int j=0;j<words[i].size();j++)
            {
                for(int x=0;x<weights.size();x++)
                {
                    if(x==words[i][j]-'a')
                    sum+=weights[x];
                }
            }
            int o=sum%26;
            char ch = (char)122-o;

            weight+=ch;
        }
        return weight;
    }
};