#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Find the ASCII value of each character
    
    Problem statement: 
    Given a string containing basic ASCII characters, 
    print each character and its numeric ASCII value.
    
    Example: "Cat"
    
    C: 67
    a: 97
    t: 116


    string s = "Cat";

    for (char ch : s) {
        cout << ch << ": "
             << static_cast<int>(ch) << endl;
    }

    return 0;




    
    /*
    
    Remove all occurrences of a chosen character
    
    Problem statement: 
    Given a string and a character, remove every occurrence of that character while preserving the order of the remaining characters.
    
    Example: String = "programming", character = 'm'
    Output: "prograing"
    

    string s = "programming";
    char target = 'm';
    string result = "";

    for (char ch : s) {
        if (ch != target)
            result += ch;
    }

    cout << result;
    return 0;
*/


    
    
    /*
    
    Count the number of words in a sentence
    
    Problem statement: Count the words in a sentence. 
    Words are separated by one or more spaces, 
    and leading or trailing spaces should not affect the answer.
    
    Example: "  Learn   DSA today  "
    Output: 3


    string sentence = "  Learn   DSA today  ";
    string word;
    stringstream ss(sentence);
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << count;
    return 0;
}
*/


    
    /*
    
    Toggle the case of every letter
    
    
    Problem statement: 
    Convert uppercase letters to lowercase and lowercase letters to uppercase. 
    Leave digits, spaces, and punctuation unchanged.
    
    
    Example: "PyThOn 123"
    Output: pYtHoN 123
    

    string s = "PyThOn 123";

    for (char &ch : s) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';
        else if (ch >= 'A' && ch <= 'Z')
            ch = ch - 'A' + 'a';
    }

    cout << s;
    return 0;
*/

    
    /*
    
    Remove all spaces from a string
    
    Problem statement: Create a new string by removing every ordinary space character from the input.
    
    Example: "I love programming"
    Output: "Iloveprogramming"




    string s = "I love programming";
    string result = "";

    for (char ch : s) {
        if (ch != ' ')
            result += ch;
    }

    cout << result;
    return 0;
*/

    
    /*
    
    
    Count uppercase and lowercase letters
    
    Problem statement: Given a string containing English letters, count the uppercase letters and lowercase letters separately. Ignore digits, spaces, and punctuation.
    
    Example: "Hello WORLD 123"
    Output:
    Uppercase - 6 
    lowercase - 5
    

    string s = "Hello WORLD 123";
    int upper = 0, lower = 0;

    for (char ch : s) {
        if (ch >= 'A' && ch <= 'Z')
            upper++;
        else if (ch >= 'a' && ch <= 'z')
            lower++;
    }

    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower;

    return 0;

    */
    
    
    /*
    
    Find the longest word in a sentence
    
    Problem statement: Given a sentence containing words separated by spaces, print the longest word. If multiple words have the same maximum length, print the first one.
   
    Example: "Python makes coding enjoyable"
    Output: enjoyable    
    
    
    
    
    #include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence = "Python makes coding enjoyable";
    string word, longest = "";
    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << longest;
    return 0;
}
*/


    
/*

Replace every vowel with a star

Problem statement: 
Replace each vowel (a, e, i, o, u, in either case) with *. Keep all other characters unchanged.


Example: "Education"
Output: *d*c*t**n



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
