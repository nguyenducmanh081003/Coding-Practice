class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int f0 = x;
        long long f1 = 0;
        while(x != 0){
            int y = x % 10;
            x /= 10;
            f1 = f1 * 10 + y;
        }
    return f1 == f0;
    }
};
