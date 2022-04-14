
class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";  //for n==1
        if(n==2) return "11";  //for n==2
        string s="11";
        for(int i=3;i<=n;i++)
        {
            string str="";
            s+='&';
            int count=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]==s[j-1]) count++;
                else{
                    str+=to_string(count);
                    str+=s[j-1];
                    count=1;
                }
            }
            s=str;
        }
        return s;
    }
};
