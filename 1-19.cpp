#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    
    Find the element closest to zero
    
    Problem statement: 
    Given an array containing positive and negative integers, find the element whose absolute value is smallest. 
    If two elements are equally close to zero, choose the positive one.
    
    
    Example: [-8, 3, -2, 5, 2]
    Output: 2 
    

    int arr[] = {-8, 3, -2, 5, 2};
    int n = 5;
    int answer = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (abs(arr[i]) < abs(answer) ||
            (abs(arr[i]) == abs(answer) &&
             arr[i] > answer)) {
            answer = arr[i];
        }
    }

    cout << answer;
    return 0;




    
    /*
    
    Find the difference between the sum of even and odd elements
    
    Problem statement: 
    Calculate the sum of even-valued elements and the sum of odd-valued elements. 
    Print the absolute difference between the two sums.
    
    Example: [2, 7, 4, 9, 6]
    Output: 4.
    even_sum = 2+4+6 = 12 
    odd_sum = 7+9 = 16 
    absolute_diff = 16-12 = 4
    */
    

    /*
    int arr[] = {2, 7, 4, 9, 6};
    int evenSum = 0, oddSum = 0;

    for (int x : arr) 
    {
        if (x % 2 == 0)
            evenSum += x;
        else
            oddSum += x;
    }

    cout << abs(evenSum - oddSum);
    return 0;
}

*/


    
    
/*

  Calculate the average of elements greater than a given value
  
  Problem statement: Given an array and a number K, calculate the average of all elements strictly greater than K. 
  If no element qualifies, print No elements.
  
  Example: Array = [10, 25, 30, 15, 40], K = 20
  Output: 25, 30, 40 --> avg = 95/3 = 31.67
  
  
    int arr[] = {10, 25, 30, 15, 40};
    int n = 5, k = 20;
    int total = 0, count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > k) {
            total += arr[i];
            count++;
        }
    }

    if (count > 0)
        cout << (double)total / count;
    else
        cout << "No elements";

    return 0;

*/

    
    
    
    /*
    HW 
    
    Find the longest consecutive sequence
    
    
    Find the first non-repeating character in a string
    
    Problem: Given an unsorted array of integers, find the length of the longest sequence of consecutive values. 
    The values need not be adjacent in the original array.
    
    Example: [100, 4, 200, 1, 3, 2]
    Output: 4 --> 1 ,2 ,3, 4 
    */
    
    /*
    
    Problem: Find the first character that appears exactly once. 
    If every character repeats, print None. Assume lowercase English letters.
    
    Input: swiss --> w
    
    
    
    string s = "swiss";
    int freq[26] = {0};

    for (char ch : s)
        freq[ch - 'a']++;

    bool flag = false;

    for (char ch : s) {
        if (freq[ch - 'a'] == 1) {
            flag = true;
            answer = ch;
            break;
        }
    }

    if (flag == false)
        cout << "None";
    else
        cout << answer;

    return 0;

    */
    
    
    /*
	Check whether two strings are anagrams
	
	Problem: Two strings are anagrams if they contain the same characters with the same frequencies, regardless of order. Assume the strings contain lowercase English letters.
	

    Example: 
    Input: listen, silent --> anagrams
    
    
    
    string s1 = "listen";
    string s2 = "silent";
    
    int freq[26] = {0};

    if (s1.length() != s2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    for (char ch : s1)
    {
        freq[ch - 'a']++;
    }
        
    // for (int elem: freq)
    // {
    //     cout << elem << " ";
    // }

    
    // cout << 'b' - 'a' << endl;
    
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

    

}
