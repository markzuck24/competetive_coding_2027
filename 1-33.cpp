#include <bits/stdc++.h>
using namespace std;

int main() {
    
    /*
    
    Problem: Given an array of integers, find the third-largest distinct element. 
    If fewer than three distinct elements exist, print -1.
    
    
    Input:
    [10, 5, 20, 8, 20, 15]

    Output: 10

    int main() {
        vector<int> arr = {10, 5, 20, 8, 20, 15};
    
        set<int, greater<int>> s(arr.begin(), arr.end());
    
        if (s.size() >= 3) {
            auto it = s.begin();
            advance(it, 2);
            cout << *it;
        } else {
            cout << -1;
        }
    
        return 0;
    }

*/

    Problem: Given an array, 
    find the length of the longest contiguous subarray whose first and last elements are equal.
    
    Input:
    [1, 2, 3, 1, 4, 1]
    
    Output: 6


    
    
    /*
    
    Problem: Given a paragraph and a list of banned words, 
    return the most frequently occurring word that is not banned.
    
    Note: Ignore punctuation and uppercase/lowercase differences.
    
    
    
    Input:
    paragraph = "Bob hit a ball, the hit BALL flew far after it was hit."
    banned = ["hit"]

    Output: ball


string mostCommonWord(string paragraph, vector<string>& banned) {
    unordered_set<string> bannedSet(
        banned.begin(), banned.end()
    );

    unordered_map<string, int> freq;

    string word = "";

    for (int i = 0; i <= paragraph.size(); i++) {

        char ch = (i < paragraph.size())
                  ? paragraph[i] : ' ';

        if (isalpha((unsigned char)ch)) {
            word += tolower((unsigned char)ch);
        }
        else if (!word.empty()) {

            if (!bannedSet.count(word))
                freq[word]++;

            word = "";
        }
    }

    string answer = "";
    int maxCount = 0;

    for (auto& entry : freq) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
            answer = entry.first;
        }
    }

    return answer;
}

int main() {
    vector<string> banned = {"hit"};

    cout << mostCommonWord(
        "Bob hit a ball, the hit BALL flew far after it was hit.",
        banned
    );
}

*/

    
    /*
    Problem: Given a string, repeatedly remove pairs of adjacent identical characters until no such pair remains.
    
    Input: "abbaca"
    
    Output: abbaca -->aaca --> ca
    
    

    string removeDuplicates(string s) {
    string st = "";

    for (char ch : s) {

        if (!st.empty() && st.back() == ch) {
            st.pop_back();
        }
        else {
            st.push_back(ch);
        }
    }

        return st;
    }
    
    int main() {
        cout << removeDuplicates("abbaca");
    }
*/


    
    /*
    
    Problem: String t is created by randomly shuffling string s 
    and adding one extra character. Find the extra character.
    
    
    s = "abcd"
    t = "abcde"

    Op: "e"
    
    */
    
    /*
    char findDifference(string s, string t) {
    char result = 0;

    for (char ch : s)
        result ^= ch;

    for (char ch : t)
        result ^= ch;

    return result;
    }
    
    int main() {
        cout << findDifference("abcd", "abcde");
    }
*/

	
	/*
	Problem: Given two strings s and goal, determine whether goal is a rotation of s.
	
	
	s = "abcde"
    goal = "cdeab"
    
    Op: True
    */
    
    /*
    bool rotateString(string s, string goal) {
    if (s.size() != goal.size())
        return false;

    string combined = s + s;//abcdeabcde

    return combined.find(goal) != string::npos;
    }
    
    int main() {
        cout << boolalpha
             << rotateString("abcde", "cdeab");
    }

    */
    
    
}
