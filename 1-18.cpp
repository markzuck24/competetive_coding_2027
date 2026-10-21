#include <bits/stdc++.h>
using namespace std;

int main() {
    
    Find the first non-repeating character in a string
    
    Problem: 
    Find the first character that appears exactly once. If every character repeats, print None. Assume lowercase English letters.
    
    Input: swiss
    Output: w
    
    
    string s = "swiss";
    int freq[26] = {0};

    for (char ch : s)
        freq[ch - 'a']++;

    char answer = '\0';

    for (char ch : s) {
        if (freq[ch - 'a'] == 1) {
            answer = ch;
            break;
        }
    }

    if (answer == '\0')
        cout << "None";
    else
        cout << answer;

    return 0;

        
    /*
    
    Check whether two strings are anagrams
    
    Problem: Two strings are anagrams if they contain the same characters with the same frequencies, 
    regardless of order. Assume the strings contain lowercase English letters.
    
    Input: listen, silent
    Yes --> Anagrams.
    
    
    string s1 = "listen";
    string s2 = "silent";
    
    int freq[26] = {0};

    if (s1.length() != s2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    for (char ch : s1)
        freq[ch - 'a']++;

    for (char ch : s2)
        freq[ch - 'a']--;

    bool valid = true;

    for (int x : freq) {
        if (x != 0) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "Anagrams" : "Not Anagrams");
    return 0;

    */
    
    /*
    
    Find the sum of digits at even and odd positions
    
    Problem: Given a positive integer, count digit positions from the right, starting at position 1. 
    Calculate the sum of digits at odd positions and even positions separately.
    
    
    Input: 5274
    Output: 
    
    even pos sum = 5+7 = 12 
    odd pos sum = 2 + 4 = 6
    */
    
    
    /*
    
    int n = 5274;
    int position = 1, oddSum = 0, evenSum = 0;

    while (n > 0) {
        int digit = n % 10;

        if (position % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        position++;
        n /= 10;
    }

    cout << "Odd-position sum: " << oddSum << endl;
    cout << "Even-position sum: " << evenSum;

    */
    
    
    
    /*
    
    Find the Nth Fibonacci number
    
    Problem: 
    The Fibonacci sequence starts with 0, 1. 
    Each subsequent term is the sum of the previous two. Find the term at zero-based index N.
    
    input 7 --> 
    0, 1, 1, 2, 3, 5, 8, 13, 21.....
    
    int n =8;
    int prev = 0;    
    int curr = 1;
    int temp = 0;
    for(int i=2; i<=n ; i++)
    {
        temp = curr + prev;
        prev = curr;
        curr = temp;
    }
    
    cout << temp;
    */
    
    /*
    given a number, find the number of digits in it. 
    
    153 --> 3 
    */
    
    
    /*
    
    int n = 154;
    // 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 125+65 = 190 != 154 --> not Armstrong
    int temp = n;
    int d = count_digit(n);
    // cout << d << endl;
    int sm = 0;
    
    while(n>0)
    {
        int k = n%10;
        int p = 1;
        for(int i=1; i<=d; i++)
        {
            p *= k;
        }
        
        sm += p;
        n /= 10;
    }
    
    if(sm == temp)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    
    */
    
    /*
    
    Check whether a number is an Armstrong number
    
    A number is an Armstrong number 
    if the sum of each digit raised to the number of digits equals the original number.
    
    Input 153:
    digits = 3 
    1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 125 + 28 = 153 = 153 --> armstrong
    */
    
    
    
    /*

int count_digit(int n)
{
    int digits = 0;
    
    while(n>0)
    {
        n = n/10; 
        digits++;
    }
    
    return digits;
    
    
}
*/


	
	/*
	Find the factorial of the given number:
	n! => 5! = 120.
	
	
	
	int n = 5;
	int f = 1;
	
	for(int i=n; i>=1; i--)
	{
	    f = f*i;
	}
	
	cout << f << endl;
	
	cout << fact(n) << endl;
	*/

}

/*
int fact(int n)
{
    if(n == 1)
    {
        return n;
    }
    
    return n*fact(n-1);
}
*/
