#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem statement: Given a list of intervals representing activities, select the maximum number of activities that can be performed without overlapping.
    
    
    Assume an activity ending at time 3 can be followed by another activity starting at time 3.
    
    
    Input:
    intervals = [[1,3], [2,4], [3,5], [5,7]]

Output:
    3 --> [1,3] [3,5] [5,7]
    
    

    /*
    
    Problem statement: Given an array and an integer K, find the minimum number of swaps required to bring all elements less than or equal to K together in a contiguous group. You can swap any two elements.
    
    
    Input:
    arr = [2, 1, 5, 6, 3]
    K = 3

    Output: 1

int main() {
    vector<int> arr = {2, 1, 5, 6, 3};
    int k = 3;

    int good = 0;

    for (int x : arr) {
        if (x <= k) good++;
    }

    int bad = 0;

    for (int i = 0; i < good; i++) {
        if (arr[i] > k) bad++;
    }

    int answer = bad;

    for (int i = good; i < arr.size(); i++) {
        if (arr[i - good] > k) bad--;
        if (arr[i] > k) bad++;

        answer = min(answer, bad);
    }

    cout << answer;
    return 0;
}
*/


    /*
    
    Problem statement: Given a string, determine whether it can become a palindrome by deleting at most one character.
    
    Input:
    s = "abca"

    Output: 
    True 
    
    
    abcba 

    abba
    
    

bool isPalindrome(string &s, int left, int right) {

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "abca";

    int left = 0;
    int right = s.length() - 1;

    bool result = true;

    while (left < right) {

        if (s[left] == s[right]) {
            left++;
            right--;
        }
        else {
            result =
                isPalindrome(s, left + 1, right) ||
                isPalindrome(s, left, right - 1);

            break;
        }
    }

    cout << (result ? "True" : "False");

    return 0;
}

*/

    
    /*
    
    Problem statement: An encoded string follows the format k[encoded_string], where the content inside the brackets must be repeated k times.

Decode the string and return the original message.


Input:
"3[a2[c]]"

Output: 3[acc] --> accaccacc


int main() {
    string s = "3[a2[c]]";

    stack<int> countStack;
    stack<string> stringStack;

    string currentString = "";
    int currentNumber = 0;

    for (char ch : s) {

        if (isdigit((unsigned char)ch)) {
            currentNumber =
                currentNumber * 10 + (ch - '0');
        }

        else if (ch == '[') {
            countStack.push(currentNumber);
            stringStack.push(currentString);

            currentNumber = 0;
            currentString = "";
        }

        else if (ch == ']') {
            int repeat = countStack.top();
            countStack.pop();

            string previous = stringStack.top();
            stringStack.pop();

            string decoded = "";

            for (int i = 0; i < repeat; i++) {
                decoded += currentString;
            }

            currentString = previous + decoded;
        }

        else {
            currentString += ch;
        }
    }

    cout << currentString;

    return 0;
}


*/

	
	/*
	
	Problem statement: Given a string, perform at most one swap between two characters to obtain the lexicographically smallest possible string.
	
	
	Input:
    s = "dcba"

    Output: "acbd"
    

    int main() {
    string s = "dcba";

    for (int i = 0; i < s.length(); i++) {

        char smallest = s[i];

        for (int j = i + 1; j < s.length(); j++) {
            smallest = min(smallest, s[j]);
        }

        if (smallest < s[i]) {

            int position = -1;

            for (int j = s.length() - 1; j > i; j--) {
                if (s[j] == smallest) {
                    position = j;
                    break;
                }
            }

            swap(s[i], s[position]);
            break;
        }
    }

    cout << s;

    return 0;
}


*/

}
