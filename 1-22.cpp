#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // string s = "Aditya";
    // cout << s.substr(0,3);

/*

    Find the common prefix of two strings
    
    Problem statement: Given two strings, find their longest common prefix: 
    the longest sequence of characters they share from the beginning.
    
    Example: "computer" and "compact"
    Output: "comp"
    
*/

Check whether one string is a prefix of another

Problem statement: Given two strings, 
determine whether the first string 
appears exactly at the beginning of the second string.

Example: First string = "data", second string = "database"
Output: yes


    string prefix = "data";
    string text = "database";

    if (text.find(prefix) == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;




/*

    string s1 = "computer";
    string s2 = "compact";
    int i = 0;
    int n = s1.length();
    int m = s2.length();
    
    while (i < n &&
          i < m &&
          s1[i] == s2[i]) {
        i++;
    }

    cout << s1.substr(0, i);
    return 0;
}

*/
    
    
    /*
    
    Check whether a string contains only digits
    
    Problem statement: Determine whether a non-empty string contains only the characters 0 through 9.
    
    Example: "204815"
    Output: Yes
    
    */

    /*
    
    int count = 0;
    
    string s = "204815";
    bool valid = !s.empty();

    for (char ch : s) {
        if (ch >= '0' && ch <= '9') {
            count++;
        }
    }
    
    int n = s.length();
    cout << n << endl;
    
    cout << ( count == n ? "Yes" : "No");
    return 0;
    */
    
    
    
/*

    string s = "204815";
    bool valid = !s.empty();

    for (char ch : s) {
        if (ch < '0' || ch > '9') {
            valid = false;
            break;
        }
    }

    cout << (valid ? "Yes" : "No");
    return 0;

*/

    
    
	
// 	Replace every vowel with a star
	
	/*
	
	Problem statement: Replace each vowel (a, e, i, o, u, in either case) with *. 
	Keep all other characters unchanged.
	
    Example: "Education"
    Output: "*d*c*t**n"
    
    
    string s = "Education";
    string vowels = "aeiouAEIOU";

    for (char &ch : s) {
        if (vowels.find(ch) != string::npos)
            ch = '*';
    }

    cout << s;
    return 0;
*/





}
