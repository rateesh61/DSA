class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int mn=INT_MAX;
       
        vector<vector<int>> result;
        for (int i = 1; i < arr.size(); i++) {
        mn = min(mn, arr[i] - arr[i - 1]);
    }
    
    // Collect pairs with minimum difference
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - arr[i - 1] == mn) {
            result.push_back({arr[i - 1], arr[i]});
        }
    }
    
    return result;
        
    }
}    ; 
    