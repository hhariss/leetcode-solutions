class Solution {
public:
    int titleToNumber(string s) {
        int n = s.length();
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int c = s[i] - 'A' + 1;
            res = res * 26 + c;
        }
        return res;
    }
};
