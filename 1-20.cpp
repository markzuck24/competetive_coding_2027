#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    
    /*
    
    Interleave two arrays
    
    Problem statement: Given two arrays of equal length, create a new array by alternating elements from each array, starting with the first array.
    
    Example: A = [1, 2, 3], B = [7, 8, 9]
    Output: [1, 7, 2, 8, 3, 9]
    */
    
    
    /*
    
    Find the sum of elements at even indices
    
    Problem statement: 
    Calculate the sum of array elements located at even indices: 0, 2, 4, .... 
    Remember that array indexing starts at zero.
    
    Example: [5, 10, 15, 20, 25]
    Output: 5 + 15 + 25 =  45 
    */
    

    int arr[] = {5, 10, 15, 20, 25};
    int n = 5, total = 0;

    // for (int i = 0; i < n; i += 2) {
    //     total += arr[i];
    // }
    
    
    for (int i = 0; i < n; i += 1) {
        if(i%2 == 0)
        {
            total += arr[i];    
        }
        
    }
    

    cout << total;
    return 0;

    
    

    int a[] = {1, 2, 3};
    int b[] = {7, 8, 9};
    int result[6];
    
    a --> 0, 2, 4 
    b --> 1, 3, 5 
    
    
    for (int i = 0; i < 3; i++) {
        result[2 * i] = a[i];
        result[2 * i + 1] = b[i];
    }

    for (int x : result)
        cout << x << " ";

    return 0;




    /*
    
    Replace each element with its square
    Problem statement: 
    Create a new array in which every element is the square of the corresponding original element. 
    Keep the original array unchanged.
    
    Example: [-2, 3, 4, -5]
    Output: [4, 9, 16, 25]
    */
    
    /*
    
    Check whether an array is strictly positive
    
    Problem statement: Determine whether every element in an array is greater than zero. An array containing zero or a negative value does not satisfy the condition.
    
    Example: [4, 8, 1, 6]
    Output: Yes
    

    int arr[] = {4, 8, 1, 6};
    int n = 4;
    bool valid = true;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "Yes" : "No");
    return 0;

    */
    
    
    /*
    
    int arr[] = {-2, 3, 4, -5};
    int n = 4;
    int squared[4];
    int i = 0;
    
    for (int x: arr) {
        squared[i] = x*x;
        cout << squared[i];
        i++;
        
    }

    for (int x : squared)
        cout << x << " ";

    return 0;
}  
    */
    
    
/*
    int arr[] = {-2, 3, 4, -5};
    int n = 4;
    int squared[4];

    for (int i = 0; i < n; i++) {
        squared[i] = arr[i] * arr[i];
    }

    for (int x : squared)
        cout << x << " ";

    return 0;
*/


    
    /*
    
    Find the longest consecutive run of positive numbers
    
    Problem statement: 
    Find the length of the longest contiguous sequence 
    containing only positive numbers. Zero and negative values break the sequence.
    
    Example: [2, 3, -1, 4, 5, 6, 0, 8]
    Output: 3

    int arr[] = {2, 3, -1, 4, 5, 6, 0, 8};
    int current = 0, longest = 0;

    for (int x : arr) {
        if (x > 0) {
            current++;
            longest = max(longest, current);
        } else {
            current = 0;
        }
    }

    cout << longest;
    return 0;
    */
    

/*

Count elements that are divisible by both 3 and 5

Problem statement: 
Count how many elements in an array are divisible by both 3 and 5.
Also print them.

Example: [15, 10, 30, 9, 45, 7]
Output: 3 --> 15, 30, 45


    int arr[] = {15, 10, 30, 9, 45, 7};
    int count = 0;

    for (int x : arr) {
        if (x % 3 == 0 && x % 5 == 0)
            count++;
    }

    cout << count;
    return 0;


print(count)
*/



