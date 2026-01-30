class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int c=0,mc=0;
        map<int,int> mymap;
        for(int i: nums)
        {
            mymap[i]++;
        }
        
        int lf=-1,lfc=INT_MAX;
        for(auto& pair:mymap){
            if(pair.second<lfc){
                lf=pair.first;
                lfc=pair.second;

            }
        }
        return lf;
    }
};