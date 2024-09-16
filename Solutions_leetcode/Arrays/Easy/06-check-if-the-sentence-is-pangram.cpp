class Solution {
public:
    bool checkIfPangram(string sentence) {
        // 97
        bool letter[26] = {false};
        for(int i = 0; i< sentence.length();i++){
            letter[sentence[i]-97] = true;
        }
        bool check = true;
        for(int i =0; i<26;i++){
            if(letter[i] == false){
                return false;
            }
        }
        return true;
    }
};

// or


class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> chars(26,0);

        for(int i=0;i<sentence.length();i++){
           chars[sentence[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(chars[i]==0) return false;
        }
        return true;
    }
};