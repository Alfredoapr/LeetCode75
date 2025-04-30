class Solution {
public:
    string mergeAlternately(string word1, string word2) { 
        string fullWord = "";
        int aux = 0;
        if(word1.length() < word2.size()){
            for(int i = 0; i < word1.length(); i++){
                aux++;
                fullWord+=word1[i];
                fullWord+=word2[i];
            }
            for(int i = aux; i < word2.length(); i++){
                fullWord+=word2[i];
            }
        }else if(word1.length() > word2.size()){
            for(int i = 0; i < word2.length(); i++){
                aux++;
                fullWord+=word1[i];
                fullWord+=word2[i];
            }
            for(int i = aux; i < word1.length(); i++){
                fullWord+=word1[i];
            }
        }else{
            for(int i = 0; i < word1.length(); i++){
                fullWord+=word1[i];
                fullWord+=word2[i];
            }
        }
    return fullWord;
    }
};
