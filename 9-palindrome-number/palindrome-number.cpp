class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string t=s;
        reverse(t.begin(),t.end());
        return t==s? 1: 0;
    }
};