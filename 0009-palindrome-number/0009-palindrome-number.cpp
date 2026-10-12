class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=0;
        int old= x;
        if(x < 0) return false;
        if(x == 0) return true;

        while(x!=0){
            ans = ans*10+ x%10;
            x = x/10;
        } 
        return ans== old ? true : false;
    }
};