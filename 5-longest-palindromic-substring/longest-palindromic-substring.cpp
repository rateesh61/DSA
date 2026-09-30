class Solution {
public:
    int dp[1002][1002];
bool isPalin(string &s, int i, int j) {
        if (i >= j)
            return true;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i] != s[j])
            return dp[i][j] = 0;

        return dp[i][j] = isPalin(s, i + 1, j - 1);
    }

    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = 0, start = 0;
        memset(dp,-1,sizeof(dp));
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (isPalin(s,i,j)) {
                    if (j-i+1 > maxlen) {
                        maxlen = j-i+1;
                        start = i;
                    }
                }
            }
        }

        return s.substr(start, maxlen);
    }
};
