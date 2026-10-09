class Solution {
public:
    int minInsertions(string s) {
       int  count =0;
        int result=0;
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                count++;
                i++;
            }else {
                if(count>0) {
                    count--;
                }else {
                    result++;
                }
                if(s[i+1]==')')
                i+=2;
                else{
                result++;
                i+=1;
                }
            }
        }

        return result+2*count;
    }
};