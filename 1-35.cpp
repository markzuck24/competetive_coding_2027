#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // HW
    Problem: Given a string, determine whether every character appears exactly once.
    
    Input:
    "abcdef"

    Output: True 
    
    
    
    
    /*
    
    Problem: Given a string, remove consecutive duplicate characters 
    while keeping one occurrence of each consecutive group.
    
    
    Input:
    "aaabbccccdaa"
    
    Output: abcda
    
    
    int main() {
    string s = "aaabbccccdaa";

    string result = "";

    for (int i = 0; i < s.length(); i++) {
        if (i == 0 || s[i] != s[i - 1]) {
            result += s[i];
        }
    }

    cout << result;

    return 0;
}
*/

    
    
    /*
    
    Problem: Given a string, find the longest proper prefix that is also a suffix. 
    The complete string itself is not allowed as the answer.
    
    
    Input:
    "abcab"
    
    Output: "ab"
    
    prefixes: a, ab, abc, abca, abcab 
    suffixes: b, ab, cab, bcab, abcab 
    

    int main() {
    string s = "abcab";

    string answer = "";

    for (int length = 1; length < s.length(); length++) {

        string prefix = s.substr(0, length);
        string suffix = s.substr(s.length() - length);

        if (prefix == suffix) {
            answer = prefix;
        }
    }

    cout << answer;

    return 0;
}

*/


    
    /*
    
    Problem: Given a string, determine whether it can be constructed by repeating a smaller substring multiple times.
    
    
    Input:
    "abcabcabc"

    Output: True 
    
    Input:
    "abac"
    
    Output: False 
  
    int main() {
    string s = "abcabcabc";

    int n = s.length();

    bool possible = false;

    for (int length = 1; length < n; length++) {

        if (n % length == 0) {

            string pattern = s.substr(0, length);

            string repeated = "";

            for (int i = 0; i < n / length; i++) {
                repeated += pattern;
            }

            if (repeated == s) {
                possible = true;
                break;
            }
        }
    }

    cout << (possible ? "True" : "False");

    return 0;
}

*/

    
    /*
    
    Problem: Given a string containing only ( and ), 
    find the minimum number of parentheses that must be added to make the string balanced.
    
    Input:
    "(()"
	
	Output: 1
	
	
	Input:
    "()))(("

    Output: 4
	"()(())(())"
	

    int main() {
    string s = "(()";

    int openCount = 0;
    int additions = 0;

    for (char ch : s) {

        if (ch == '(') {
            openCount++;
        }
        else {
            if (openCount > 0) {
                openCount--;
            }
            else {
                additions++;
            }
        }
    }

    additions += openCount;

    cout << additions;

    return 0;
}


*/

	/*
	
	Problem: Given a string containing lowercase English letters, find the lexicographically smallest character.
	
	Input:
    "programming"

    Output: "a"
    


    int main() {
        
    string s = "programming";

    char smallest = s[0];

    for (char ch : s) {
        if (ch < smallest) {
            smallest = ch;
        }
    }

    cout << smallest;

    return 0;
}
*/

}
