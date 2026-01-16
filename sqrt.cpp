#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        if(x < 2) return x;
        int left = 1;
        int right = x / 2;
        while(left <= right){
            int mid = (right + left) / 2;
            long long y = (long long)mid * mid;
            if(y == x){
                return mid;
            }
            else if(y > x){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
    return right;
    }
};

int main()
{
    long long x;
    cin >> x;
    Solution sol;
    cout << sol.mySqrt(x)<<endl;
    return 0;
}
