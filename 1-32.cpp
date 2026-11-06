#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Given a string, reverse only the vowels while keeping all other characters in their original positions.
    
    Input: "hello"
    Output: holle
    
    
    
    #include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    string vowels = "aeiouAEIOU";

    int left = 0;
    int right = s.size() - 1;

    while (left < right) {

        while (left < right &&
               vowels.find(s[left]) == string::npos)
            left++;

        while (left < right &&
               vowels.find(s[right]) == string::npos)
            right--;

        swap(s[left], s[right]);

        left++;
        right--;
    }

    return s;
}

int main() {
    cout << reverseVowels("hello");
}


    
    /*
    
    Problem: Determine whether a word uses capital letters correctly.

    A word is considered valid if:
    1. All letters are uppercase.
    2. All letters are lowercase.
    3. Only the first letter is uppercase.
    
    
    Input: "Google"
    Output: True 
    
    
    Input2: "FlaG"
    Output: False
        


bool detectCapitalUse(string word) {
    int upperCount = 0;

    for (char ch : word) {
        if (isupper((unsigned char)ch))
            upperCount++;
    }

    if (upperCount == word.size())
        return true;

    if (upperCount == 0)
        return true;

    if (upperCount == 1 && isupper((unsigned char)word[0]))
        return true;

    return false;
}

int main() {
    cout << boolalpha << detectCapitalUse("Google") << endl;
    cout << boolalpha << detectCapitalUse("FlaG");
}
*/




    
    /*
    
    Problem: Given two non-negative integers represented as strings, 
    return their sum as a string.
    
    
    Input:
    num1 = "123"
    num2 = "456"
    
    output: "579"
    
    
    
string addStrings(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;

    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {

        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int total = digit1 + digit2 + carry;

        result += char('0' + total % 10);

        carry = total / 10;

        i--;
        j--;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main() {
    cout << addStrings("123", "456");
}

*/
    
    /*
    
    Problem: Given a string, repeatedly remove pairs of adjacent identical characters until no such pair remains.
    
    Input: "abbaca"
    Output: aaca --> ca
    


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

Problem: String t is created by randomly shuffling string s and adding one extra character. Find the extra character.

Input:
s = "abcd"
t = "abced"

Output: "e"


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
	
	Problem: A string is called nice if, for every letter present, both its uppercase and lowercase forms are also present.

Find the longest nice substring. If multiple answers have the same length, return the first one. Return an empty string if no nice substring exists.


Input: s = "YazaAay"
Output: "aAa"



#include <bits/stdc++.h>
using namespace std;

string longestNiceSubstring(string s) {
    string answer = "";

    for (int i = 0; i < s.size(); i++) {
        unordered_set<char> chars;

        for (int j = i; j < s.size(); j++) {
            chars.insert(s[j]);

            bool nice = true;

            for (char ch : chars) {

                if (islower((unsigned char)ch)) {
                    if (!chars.count(toupper((unsigned char)ch))) {
                        nice = false;
                        break;
                    }
                }
                else {
                    if (!chars.count(tolower((unsigned char)ch))) {
                        nice = false;
                        break;
                    }
                }
            }

            int length = j - i + 1;

            if (nice && length > answer.size()) {
                answer = s.substr(i, length);
            }
        }
    }

    return answer;
}

int main() {
    cout << longestNiceSubstring("YazaAay");
}


*/
	
	/*
	
	Problem: Given two strings, return the length of the longest uncommon subsequence.

    A string is an uncommon subsequence if it is a subsequence of one string but not the other.


    Input:
    a = "aba"
    b = "cdc"

    Output: 3
    

int findLUSlength(string a, string b) {
    if (a == b)
        return -1;

    return max(a.size(), b.size());
}

int main() {
    cout << findLUSlength("aba", "cdc");
}

*/


}
