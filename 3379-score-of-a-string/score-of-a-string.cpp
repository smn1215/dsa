class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        int l=s.length();
        for (int i=1;i<l;++i){
            score += abs(s[i]-s[i-1]);
        }
        return score;
        
    }
};