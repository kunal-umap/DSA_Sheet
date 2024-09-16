class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int indx = ruleKey == "type"?0:(ruleKey=="color"?1:2);
        int ans = 0;
        for(int i = 0; i< items.size();i++){
            if(ruleValue == items[i][indx]) ans++;
        }
        return ans;
    }
};