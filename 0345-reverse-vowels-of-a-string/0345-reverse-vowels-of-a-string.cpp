class Solution {
public:
    string reverseVowels(string s) {
        stack<char> st;

        for( char ss : s){
            if(ss == 'a' || ss == 'e' || ss =='i' || ss == 'o' || ss =='u' || ss == 'A' || ss == 'E' || ss =='I' || ss == 'O' || ss =='U'){
                st.push(ss);
            }
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] =='i' || s[i] == 'o' || s[i] =='u' || s[i] == 'A' || s[i] == 'E' || s[i] =='I' || s[i] == 'O' || s[i] =='U'){
                s[i] = st.top();
                st.pop();
            }
        }

        return s;
    }
};