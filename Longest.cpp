class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        int left =0,right=0,maxLen=INT_MIN;
        unordered_set<char> st;
        while(right <n){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);
                maxLen=max(maxLen,right-left+1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return maxLen;
        
    }
};