#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Count vowels appearing at indices 0, 2, 4, .... Treat uppercase and lowercase vowels equally.

Example: "education"

Output: 3


    
    /*
    
    Problem: Given a sentence and a prefix, add that prefix before every word while keeping the word order unchanged.

    Example: Sentence = "red blue green", prefix = "my_"


    Output: "my_red my_blue my_green"
    
    
    string sentence = "red blue green";
    string prefix = "my_";
    string word;
    stringstream ss(sentence);

    while (ss >> word) {
        cout << prefix << word << " ";
    }

    return 0;
*/

    
    
    /*
    
    Problem: Determine whether two English strings are equal when uppercase and lowercase letters are treated as equivalent.

    Example: "Hello" and "hELLo"
    Output: Yes 
    
    
    

    string s1 = "Hello";
    string s2 = "hELLo";

    if (s1.length() != s2.length()) {
        cout << "Not Equal";
        return 0;
    }

    bool equal = true;

    for (int i = 0; i < s1.length(); i++) {
        if (tolower((unsigned char)s1[i]) !=
            tolower((unsigned char)s2[i])) {
            equal = false;
            break;
        }
    }

    cout << (equal ? "Equal" : "Not Equal");
    return 0;


*/



    
    /*
    
    Problem: Two strings are isomorphic if each character in the first string consistently maps to one character in the second string, and two different characters cannot map to the same character.

Example: "egg" and "add" → true




    string s = "egg", t = "add";

    unordered_map<char, char> mapping;
    unordered_set<char> used;
    bool valid = s.length() == t.length();

    for (int i = 0; valid && i < s.length(); i++) {
        char a = s[i], b = t[i];

        if (mapping.count(a)) {
            if (mapping[a] != b)
                valid = false;
        } else {
            if (used.count(b)) {
                valid = false;
            } else {
                mapping[a] = b;
                used.insert(b);
            }
        }
    }

    cout << (valid ? "true" : "false");
    return 0;

*/




    
    /*
    
    Problem: 
    Given a sentence, reverse the order of its words. 
    Remove extra spaces between words and at the ends.
    
    Example: "the sky is blue"
    Output: "blue is sky the"
    
    
    string s = "the sky is blue";
    string word;
    stringstream ss(s);
    vector<string> words;

    while (ss >> word)
        words.push_back(word);

    reverse(words.begin(), words.end());

    for (int i = 0; i < words.size(); i++) {
        if (i > 0) cout << " ";
        cout << words[i];
    }

    return 0;

    */
    
    
    
    /*
    
    Problem: Remove all occurrences of a given value from an array in-place. Return the number of remaining elements; the first part of the array should contain the retained elements.
    
    Example: arr = [3, 2, 2, 3], value = 3
    Output: [2,2] --> len = 2 
    
    

    int arr[] = {3, 2, 2, 3};
    int n = 4, value = 3, k = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[k] = arr[i];
            k++;
        }
    }

    cout << "Length: " << k << endl;
    cout << "Remaining: ";

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;

*/

    
    /*
	
	Given an array of lowercase strings, find all characters that appear in every string.

    If a character appears multiple times in every string, 
    include it that many times in the result.

    Input:
    ["bella", "label", "roller"]
    
    Output: ['e', 'l', 'l']
    
    


vector<char> commonCharacters(vector<string>& words) {
    vector<char> result;

    for (char ch = 'a'; ch <= 'z'; ch++) {

        int mn = 100000;

        for (string word : words) {
            int count = 0;

            for (char c : word) {
                if (c == ch)
                    count++;
            }

            mn = min(mn, count);
        }

        for (int i = 0; i < mn; i++) {
            result.push_back(ch);
        }
    }

    return result;
}

int main() {
    vector<string> words = {
        "bella", "label", "roller"
    };

    vector<char> result = commonCharacters(words);

    for (char ch : result)
        cout << ch << " ";

    return 0;
}

*/


}
