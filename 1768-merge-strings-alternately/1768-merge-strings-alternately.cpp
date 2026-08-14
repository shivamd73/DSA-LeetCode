class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3(word1.size() + word2.size(), ' ');
        int i,j,k=0;
        for(i=0,j=0;i<word1.size()&&j<word2.size();i++,j++)
        {
            word3[k++]=word1[i];
            word3[k++]=word2[j];
        }
        while(i<word1.size())
            word3[k++]=word1[i++];
        while(j<word2.size())
            word3[k++]=word2[j++];
        return word3;
    }
};