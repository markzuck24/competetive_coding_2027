#include <bits/stdc++.h>
using namespace std;

int main() {


Check Whether Two Arrays Are Equal

Problem statement: 
Two arrays are equal if they have the same size and the same elements in the same order.


Example: [1, 2, 3, 4] and [1, 2, 3, 4]
Ans: yes


#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {1, 2, 3, 4};
    int n = 4;

    bool equal = true;

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            equal = false;
            break;
        }
    }

    if (equal) {
        cout << "Arrays are equal";
    } else {
        cout << "Arrays are not equal";
    }

    return 0;
}



/*

Find the Longest Consecutive Run of Equal Elements

Problem statement: 
Find the maximum number of consecutive positions containing the same value.

Example: [1, 1, 2, 2, 2, 3, 3, 1]
Ans: 3 

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3, 1};
    int n = 8;

    int current = 1, longest = 1;
    int value = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current++;
        } else {
            current = 1;
        }

        if (current > longest) {
            longest = current;
            value = arr[i];
        }
    }

    cout << "Longest run length = " << longest << endl;
    cout << "Value = " << value;

    return 0;
}
/


/*

Find the Longest Alternating Even-Odd Subarray

Problem statement: 
Find the length of the longest contiguous subarray in which even and odd numbers
alternate.


Example: [2, 5, 8, 7, 4, 6, 3]
Ans: 5 --> [2, 5, 8, 7, 4]


int main() {
    
    int arr[] = {2, 5, 8, 7, 4, 6, 3};
    int n = 7;

    int current = 1, longest = 1;

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] % 2 != arr[i - 1] % 2) {
            current++;
        } else {
            current = 1;
        }

        if (current > longest) {
            longest = current;
        }
    }

    cout << "Longest alternating length = " << longest;

    return 0;
}
*/


/*

    
    Check Whether Two Arrays Are Permutations
    
    Problem statement: Determine whether two arrays contain the same elements 
    with the same frequencies, regardless of order.
    
    Example: [1, 2, 2, 3] and [2, 3, 2, 1]
    Output: Yes
    
    
    
    int main() {
    int a[] = {1, 2, 2, 3};
    int b[] = {2, 3, 2, 1};
    int n = 4;

    bool permutation = true;

    for (int i = 0; i < n; i++) {
        
        int countA = 0, countB = 0;

        for (int j = 0; j < n; j++) {
            if (a[j] == a[i]) countA++;
            if (b[j] == a[i]) countB++;
        }

        if (countA != countB) {
            permutation = false;
            break;
        }
    }

    if (permutation) {
        cout << "Arrays are permutations";
    } else {
        cout << "Arrays are not permutations";
    }

    return 0;
}

*/

    
/*    
    
    Find the Maximum Sum of a Contiguous Subarray
    
    Problem statement: Find the largest possible sum of a contiguous subarray.
    The subarray must contain at least one element.
    
    Example: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    Ans: [ 4, -1, 2, 1 ] --> 6
    
    
    
    #include <iostream>
using namespace std;

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = 9;

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + arr[i] < arr[i]) {
            currentSum = arr[i];
        } else {
            currentSum += arr[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << "Maximum subarray sum = " << maxSum;

    return 0;
}
    
 */
 
    

/*	
	Find the Pair with the Minimum Absolute Difference
	
	
	Problem statement: Find two elements whose absolute difference is the smallest. For simplicity, assume the array contains at least two elements.
	
	Example: [10, 3, 20, 8, 15]
	Output: [10,8] --> 2 


	
    int arr[] = {10, 3, 20, 8, 15};
    int n = 5;

    int minDiff = abs(arr[0] - arr[1]);
    int first = arr[0], second = arr[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);

            if (diff < minDiff) {
                minDiff = diff;
                first = arr[i];
                second = arr[j];
            }
        }
    }

    cout << "Pair = " << first << ", " << second << endl;
    cout << "Difference = " << minDiff;

    return 0;

*/


}
