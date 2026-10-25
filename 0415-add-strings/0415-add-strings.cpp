class Solution {
public:
    string addStrings(string num1, string num2) {
        int s1 = num1.length()-1;
        int s2 = num2.length()-1;
        string ans ="";
        int carry =0;

        while(s1>= 0 || s2 >=0 || carry){
            int sum =carry;
            if(s1>=0){
                sum+= num1[s1] -'0';
                s1--;
            }

            if(s2>=0){
                sum+= num2[s2] -'0';
                s2--;
            }

            ans += to_string(sum%10);
            carry = sum/10;
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};