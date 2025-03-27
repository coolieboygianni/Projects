#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = ""; // initialize empty string for merged result
        int i = 0, j = 0; //initialize 2 int variables to traverse word1 and 3 indices
        while (i < word1.size() && j < word2.size()) { //itterates through the legnth of i and j
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }
        while (i < word1.size()) { // if there are remaining characters in word1 append to result str
            result += word1[i];
            i++;
        }
        while (j < word2.size()) { // if there are remaining char in word2 append them to result
            result += word2[j];
            j++;
        }
        return result;
    }
};