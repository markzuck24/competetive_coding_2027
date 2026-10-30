#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Given a stack of integers, find the smallest element without changing the order of the elements.
    
    Input: [10, 5, 20, 3, 15]
    Output: 3


int findMinimum(stack<int> st) {
    if (st.empty())
        return -1;

    int mn = INT_MAX;

    while (!st.empty()) {
        mn = min(mn, st.top());
        st.pop();
    }

    return mn;
}


    /*
    
    Given a string containing (), {}, and [], determine whether all brackets are properly balanced.

    A closing bracket must match the most recently opened unmatched bracket.




bool isBalanced(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if (ch == ')' && top != '(')
                return false;

            if (ch == '}' && top != '{')
                return false;

            if (ch == ']' && top != '[')
                return false;
        }
    }

    return st.empty();
}

*/




    
    /*
    
    Given a string containing only opening ( and closing ) parentheses, determine whether the parentheses are balanced.

    A string is balanced if:
    - Every opening parenthesis has a corresponding closing parenthesis.
    - Every opening parenthesis is closed in the correct order.


Input:
"((()))"

Output:
Balanced

Input:
"(()"

Output:
Not Balanced


bool isBalanced(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(') {
            st.push(ch);
        }
        else {
            if (st.empty())
                return false;

            st.pop();
        }
    }

    return st.empty();
}


*/

    
    /*
    
    Given a string, reverse it using a stack.

    Push each character into the stack and then pop the characters to obtain the reversed string.

    Input:"Aditya"
    Output: "aytidA"
    
    string s = "PYTHON";

    stack<char> st;

    for (char ch : s) {
        st.push(ch);
    }

    string result = "";

    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << result;

    return 0;

*/


    
    /*
    
    Given an array of integers, reverse its elements using a stack.

    You must first push all array elements into the stack and then retrieve them one by
    one to construct the reversed array.


    Input:
    [10, 20, 30, 40, 50]

    Output:
    [50, 40, 30, 20, 10]
    
    
    
    vector<int> arr = {10, 20, 30, 40, 50};

    stack<int> st;

    for (int x : arr) {
        st.push(x);
    }

    vector<int> result;

    while (!st.empty()) {
        result.push_back(st.top());
        st.pop();
    }

    for (int x : result) {
        cout << x << " ";
    }

    return 0;
    */


    
    
    
    /*
    
    Problem: Given two lowercase strings, calculate how many character additions or removals are required to make their character frequencies equal. Each insertion or deletion changes one character.

    Example: s = "abc", t = "aab"
    
    aab --> remove a, insert c --> abc 
    ans = 2 
    
	
	abc
	a -> 1 
	b-> 1
	c -> 1

    aab 
    a->2 
    b->1 
    
    a -> -1 
    b -> 0
    c -> 1 
	
	0 -> balanced 
	+1 --> extra 
	-1 --> lesser 
	
	

    string s = "abc";
    string t = "aab";
    
    int freq[26] = {0};

    for (char ch : s)
        freq[ch - 'a']++;

    for (char ch : t)
        freq[ch - 'a']--;

    int operations = 0;

    for (int count : freq)
        operations += abs(count);

    cout << operations;
    return 0;

	*/
	
	/*
	
	
	
	Problem: Given a non-empty string, find the character that occurs most frequently. If multiple characters have the same highest frequency, return the one that appears first in the string.
	
	
	Example: "success"
	
	Output: 's'
	
	
	//First occured char
    string s = "succcess";
    unordered_map<char, int> freq;

    for (char ch : s)
        freq[ch]++;

    char answer = s[0];

    for (char ch : s) {
        if (freq[ch] > freq[answer])
            answer = ch;
    }

    cout << answer;
    return 0;



	last-occurance
	Example: "successc"
	
	Output: 'c'
	
	//last occured char
    string s = "succcess";
    unordered_map<char, int> freq;

    for (char ch : s)
        freq[ch]++;

    char answer = s[0];

    for (char ch : s) {
        if (freq[ch] >= freq[answer])
            answer = ch;
    }

    cout << answer;
    return 0;
    
	*/

}
