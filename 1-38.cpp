#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Given a string, find the minimum number of characters that must be deleted to make it a palindrome. The remaining characters must stay in their original relative order.
    
    Input:
    "abcda"
    
    Output: 2
    
    
    

int main() {
    string s = "abcda";

    int n = s.length();

    if (n == 0) {
        cout << 0;
        return 0;
    }

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        dp[i][i] = 1;
    }

    for (int length = 2; length <= n; length++) {

        for (int i = 0; i + length <= n; i++) {

            int j = i + length - 1;

            if (s[i] == s[j]) {
                dp[i][j] = 2;

                if (length > 2) {
                    dp[i][j] += dp[i + 1][j - 1];
                }
            }
            else {
                dp[i][j] = max(
                    dp[i + 1][j],
                    dp[i][j - 1]
                );
            }
        }
    }

    cout << n - dp[0][n - 1];

    return 0;
}



    
/*
    Problem: Given two sentences, find the words that appear exactly once in one sentence and do not appear in the other sentence. 
    Return the words in the order in which they first appear across the two sentences.
    
    
    Input:
    sentence1 = "apple banana mango"
    sentence2 = "banana orange apple"

    Output: ["mango", "orange"]
    


    int main() {
    string sentence1 = "apple banana mango";
    string sentence2 = "banana orange apple";

    vector<string> words;

    string word;

    stringstream ss1(sentence1);
    while (ss1 >> word) {
        words.push_back(word);
    }

    stringstream ss2(sentence2);
    while (ss2 >> word) {
        words.push_back(word);
    }

    unordered_map<string, int> frequency;

    for (string w : words) {
        frequency[w]++;
    }

    for (string w : words) {
        if (frequency[w] == 1) {
            cout << w << " ";
        }
    }

    return 0;
}

*/
    
    
    /*
    
    Problem: Given a sentence containing words separated by spaces, find the shortest word. If multiple words have the same length, return the first one.
    
    Input:
    "Learning DSA is fun"

    Output: "is"
    
    
    int main() {
    string sentence = "Learning DSA is fun";

    stringstream ss(sentence);

    string word;
    string shortest = "";

    while (ss >> word) {

        if (shortest == "" || word.length() < shortest.length()) {
            shortest = word;
        }
    }

    cout << shortest;

    return 0;
}

*/

    
    
    
    /*
    
    
    Problem: Given a list of strings, find the longest suffix shared by all strings. If no common suffix exists, return an empty string.
    
    Input:
    ["running", "jogging", "walking"]

    Output: "ing"
    
    

int main() {
    vector<string> words = {
        "running", "jogging", "walking"
    };

    if (words.empty()) {
        cout << "";
        return 0;
    }

    string suffix = "";

    int minLength = words[0].length();

    for (string word : words) {
        if (word.length() < minLength) {
            minLength = word.length();
        }
    }

    for (int i = 1; i <= minLength; i++) {

        char current = words[0][words[0].length() - i];

        bool same = true;

        for (int j = 1; j < words.size(); j++) {

            if (words[j][words[j].length() - i] != current) {
                same = false;
                break;
            }
        }

        if (!same) {
            break;
        }

        suffix = current + suffix;
    }

    cout << suffix;

    return 0;
}


*/
    

	
	/*
	
	Problem: Given three strings s1, s2, and result, determine whether result can be formed by interleaving the characters of s1 and s2 while maintaining the original order of characters in both strings.
	
	Input:
    s1 = "abc"
    s2 = "def"
    result = "adbcef"


    Output: True 
    
    
bool isShuffle(string s1, string s2, string result) {

    if (s1.length() + s2.length() != result.length()) {
        return false;
    }

    int i = 0;
    int j = 0;

    for (char ch : result) {

        if (i < s1.length() && s1[i] == ch) {
            i++;
        }
        else if (j < s2.length() && s2[j] == ch) {
            j++;
        }
        else {
            return false;
        }
    }

    return i == s1.length() && j == s2.length();
}

int main() {
    string s1 = "abc";
    string s2 = "def";
    string result = "adbcef";

    cout << (isShuffle(s1, s2, result) ? "True" : "False");

    return 0;
}

*/

    
}
