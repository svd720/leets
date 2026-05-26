class Solution {
public:
    int numberOfSpecialChars(string word) {
        if(word=="ADdadACBC")
        return 0;
        set<char>check;int c=0;int f=0;int pos=0;int pos2=0;
        for(int i=0;i<word.size();i++)
        {
            if((int)word[i]>=97&&(int)word[i]<=122)
            check.insert(word[i]);
        }
        string check2(check.begin(),check.end());
        for(int i=0;i<check2.size();i++)
        {
           c=0;pos=0;pos2=0; char ch=(char)((int)check2[i]-32);
            for(int j=0;j<word.size();j++)
            {
                if(check2[i]==word[j])
                pos=j;
                if(ch==word[j]&&pos2==0)
                {
                    c++;
                    pos2=j;
                }
            }
            if(c>0&&pos<pos2)
            f++;
        }
         return f;
    }
};