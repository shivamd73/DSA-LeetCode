class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3(word1.size() + word2.size(), ' ');
        int i,k=0;
        for(i=0;i<word1.size()&&i<word2.size();i++)
        {
            word3[k++]=word1[i];
            word3[k++]=word2[i];
        }
        while(i<word1.size())
            word3[k++]=word1[i++];
        while(i<word2.size())
            word3[k++]=word2[i++];
        return word3;
    }
};