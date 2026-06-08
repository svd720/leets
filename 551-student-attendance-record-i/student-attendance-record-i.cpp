class Solution {
public:
    bool checkRecord(string s) {
        int a=0;string late="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            a++;
            if(s[i]=='L')
            {
                late+=s[i];
            }
            else if(s[i]!='L')
            {
                if(late.size()>=3)
                return false;
                late="";

            }
        }
        if(a>=2||late.size()>=3)
        return false;
        return true;
    }
};