class Solution {
public:
        string s;
        int idx=0;
        int n;
    

    set<string> getUnit(){
        set<string> result;
        if(s[idx]=='{'){
            idx++;
            result=performUnion();
            idx++;
            
        }
        else{
            result={string(1,s[idx])};
            idx++;
        }
        return result;
    }



    set<string> performConcat(){
        set<string> result={""};
        while(idx<n && (s[idx]=='{'|| isalpha(s[idx]))){
            set<string> temp=getUnit();

            set<string> concatResult;
            for( const string& left: result ){
                for(const string & right: temp){
                    concatResult.insert(left+right);
                }
            }
            result= concatResult;

        }
        return result;
    }

    set<string> performUnion(){
        set<string> result;
        while(true){
            set<string> temp=performConcat();
            result.insert(temp.begin(),temp.end());

            if(idx < n && s[idx]==',') 
             idx++;
            else 
             break;

        }
        return result;
    }

    vector<string> braceExpansionII(string expression) {
        n=expression.length();
        s=expression;
        set<string> st=performUnion();
        vector<string> result(begin(st),end(st));

        return result;


    }
};