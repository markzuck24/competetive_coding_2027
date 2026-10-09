#include <bits/stdc++.h>
using namespace std;

int main() {


/*

Merge Two Sorted Arrays


Problem statement: Given two arrays sorted in ascending order, merge them into one sorted array without sorting the result afterward.

Input: [1, 4, 7] and [2, 3, 8]

Output: [1, 2, 3, 4, 7, 8]
*/


    int a[] = {1, 4, 7};
    int b[] = {2, 3, 8};
    int c[6];

    int i = 0, j = 0, k = 0;

    while (i < 3 && j < 3) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < 3) {
        c[k++] = a[i++];
    }

    while (j < 3) {
        c[k++] = b[j++];
    }

    for (int x = 0; x < 6; x++) {
        cout << c[x] << " ";
    }

    return 0;
    
    


/*

Remove All Occurrences of a Given Element


Problem statement: Remove every occurrence of a target value by shifting the remaining elements to the left. Print the resulting array and its new logical size.

Input: [2, 5, 2, 8, 2, 9], target 2 


Output: [5, 8, 9]
*/



/*
  int arr[] = {2, 5, 2, 8, 2, 9};
    int n = 6, target = 2;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != target) {
            arr[j] = arr[i];
            j++;
        }
    }

    cout << "New size = " << j << endl;

    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
*/


    
/*

Right Rotate an Array by K Positions

Problem statement: Rotate an array to the right by k positions.

Example: [1, 2, 3, 4, 5], k = 2 --> [4, 5, 1, 2, 3]

*/

/*


    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;

    k = k % n;

    int temp[5];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }

    return 0;
    
 */
 


/*

Left Rotate an Array by One Position

Problem statement: Given an array, rotate all elements one position to the left. The first element should move to the last position.

[10, 20, 30, 40, 50] --> [20, 30, 40, 50, 10]

*/


/*

int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
*/

    

/*
Find Pair with a Given Sum

Given an array and a target value, find all pairs whose sum is equal to the target.

Array:
2 7 4 5 3 8

Target = 10

output: 
2 + 8 = 10 
7 + 3 = 10 
2 pairs

*/


/*

    int arr[] = {2, 7, 4, 5, 3, 8};
    int n = 6;

    int target;

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                cout << arr[i] << " + "
                     << arr[j] << " = "
                     << target << endl;
            }
        }
    }

    return 0;
*/

    

/*

Find the Longest Increasing Consecutive Sequence


Find the length of the longest continuously increasing portion of an array.


Input: 1 2 3 2 4 5 6 1
output: 4
*/

/*


    int arr[] = {1, 2, 3, 2, 4, 5, 6, 7, 1};
    int n = 9;
    //ans: 5
    
    int currentLength = 1;
    int longestLength = 1;

    for (int i = 1; i < n; i++) {

        if (arr[i] > arr[i - 1]) {
            currentLength++;
        }
        else {
            currentLength = 1;
        }

        if (currentLength > longestLength) {
            longestLength = currentLength;
        }
    }

    cout << "Longest increasing length = " << longestLength;

    return 0;
    
*/


/*
An index is called an equilibrium index if the sum of elements on its left is equal to the sum of elements on its right.

input: 1 3 5 2 2
output: if consider 5
left sum = 1+3 = 4
right sum = 2 + 2 = 4 
*/

  
/*

    int arr[] = {1, 3, 5, 2, 2};
    int n = 5;

    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {

        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            cout << "Equilibrium index = " << i;
            return 0;
        }

        leftSum += arr[i];
    }

    cout << "No equilibrium index";

    return 0;
    
*/


}
