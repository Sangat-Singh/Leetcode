class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()==goal.length() && (s+s).find(goal)!=string::npos)
        {
            return true;

        }
        return false;
    }
};