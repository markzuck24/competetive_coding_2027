#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Determine whether all characters of string s appear in string t 
    in the same order, though not necessarily consecutively.

    Example: s = "ace", t = "abcde" → true



    string s = "ace";
    string t = "abcde";

    int i = 0, j = 0;
    
    int n = s.length();
    int m = t.length();
    
    while (i < n && j < m) {
        if (s[i] == t[j])
            i++;

        j++;
    }

    cout << (i == n ? "true" : "false");
    return 0;

    
    /*
    
    Problem: Given a sentence containing words separated by spaces, 
    return the length of the last word. 
    
    Ignore trailing spaces.
    
    
    Example: "Hello World   "
    Output: 5
    
    
    string s = "Hello World   ";
    string word, last = "";
    stringstream ss(s);

    while (ss >> word)
        last = word;

    cout << last.length();
    return 0;

    */
    
    /*
    
    Problem: A pair (i, j) is good when i < j and arr[i] == arr[j]. 
    Count all good pairs.

    Example: [1, 2, 3, 1, 1, 3]
    Output: (1,1) (1,1), (1,1), (3,3) --> 4
    (0,3), (0,4) (3,4), (2,5) --> 4
    
    
    int arr[] = {1, 2, 3, 1, 1, 3};
    int n = 6, count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
    }

    cout << count;
    return 0;
    */
    

    /*
    
    
    
    Problem: Each row in a 2D array represents a customer's bank balances across different banks. Calculate each customer's total wealth and return the maximum.
    
    
    Example: [[1, 2, 3], [3, 5, 1]] 
    Output: 9


    int accounts[2][3] = {
        {1, 2, 3},
        {3, 2, 1}
    };

    int mx = 0;

    for (int i = 0; i < 2; i++) {
        
        int wealth = 0;

        for (int j = 0; j < 3; j++)
            wealth += accounts[i][j];

        mx = max(mx, wealth);
    }

    cout << mx;
    return 0;
    */
    
        
    /*
    
    Check if the given string is Pallindrome.
    
    amma
    radar 
    abba
    
    
    
    string s = "rader";
    int n = s.length();
    int st = 0;
    int e = n-1;
    int flag = 1;
    
    while (st <= e)
    {
        if (s[st] != s[e])
        {
            flag = 0;
            break;
        }
        
        st++;
        e--;
    }
    
    if(flag ==1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    
    return 0;
    
    */
    
    /*
    
    Check whether a string starts and ends with the same character
    
    "radar" --> Yes
	"Aditya" --> No
	
        string s = "radar";
    
        if (s[0] == s[s.length() - 1])
            cout << "Yes";
        else
            cout << "No";
    
        return 0;
    
	*/
	
	
	
	/*
	
	Problem: Create a new string by removing every numeric digit from the original string while preserving all other characters.

    Example: "Room42B, Floor3"
    Output: "RoomB, Floor"
    
    
    string s = "Room42B, Floor3";
    string result = "";

    for (char ch : s) {
        if (ch < '0' || ch > '9')
            result += ch;
    }

    cout << result;
    return 0;

*/

}
