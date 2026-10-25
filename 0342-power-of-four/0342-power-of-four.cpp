class Solution {
public:
    bool isPowerOfFour(int n) {
        long long ans=1;
        while(ans <= n){
            if(ans == n) return true;
            ans *= 4;
        }
        return false;
    }
};