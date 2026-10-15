#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Find the Minimum Length Subarray with Sum at Least S
    
    Problem statement: Given an array of positive integers and a target S, find the minimum length of a contiguous subarray whose sum is at least S. Print 0 if no such subarray exists.
    
    
    Example: [2, 3, 1, 2, 4, 3], S = 7
    Output: 2 --> [4,3]
    
    
    
    int main() {
    int arr[] = {2, 3, 1, 2, 4, 3};
    int n = 6, target = 7;
    int minimum = n + 1;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum >= target) {
                int length = j - i + 1;

                if (length < minimum)
                    minimum = length;

                break;
            }
        }
    }

    if (minimum == n + 1)
        cout << 0;
    else
        cout << "Minimum length = " << minimum;

    return 0;
}


    
    
    /*
    
    Find the Smallest Missing Positive Integer
    
    Problem statement: Given an unsorted integer array, find the smallest positive integer that does not appear in it.
    
    Example: [3, 4, -1, 1]
    Output: 2
    


    int main() {
    int arr[] = {3, 4, -1, 1};
    int n = 4;
    int answer = 1;

    while (true) {
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (arr[i] == answer) {
                found = true;
                break;
            }
        }

        if (!found)
            break;

        answer++;
    }

    cout << "Smallest missing positive = " << answer;
    return 0;
}

*/


/*
    
    Find the Longest Subarray with Equal Numbers of 0s and 1s
    
    Problem statement: Given an array containing only 0 and 1, find the length of the longest contiguous subarray containing an equal number of zeros and ones.
    
    Example: [0, 1, 0, 0, 1, 1, 0]
    Output: 6
    
 
    int main() {
    int arr[] = {0, 1, 0, 0, 1, 1, 0};
    int n = 7;
    int longest = 0;

    for (int i = 0; i < n; i++) {
        int zeros = 0, ones = 0;

        for (int j = i; j < n; j++) {
            if (arr[j] == 0)
                zeros++;
            else
                ones++;

            if (zeros == ones) {
                int length = j - i + 1;

                if (length > longest)
                    longest = length;
            }
        }
    }

    cout << "Longest length = " << longest;
    return 0;
}

*/

    
    /*
    
    Find the Index Where Left and Right Products Are Equal
    
    Problem statement: Find an index where the product of all elements to its left equals the product of all elements to its right. Exclude the element at that index from both products. Assume the array contains positive integers greater than zero.

Example: [4, 3, 1, 6, 2]
Output: 2 

index : 2  
left pro = 4*3 = 12 
right pro = 6*2 = 12 



    int arr[] = {4, 3, 1, 6, 2};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int leftProduct = 1;
        int rightProduct = 1;

        for (int j = 0; j < i; j++) {
            leftProduct *= arr[j];
        }

        for (int j = i + 1; j < n; j++) {
            rightProduct *= arr[j];
        }

        if (leftProduct == rightProduct) {
            cout << "Index = " << i;
            return 0;
        }
    }

    cout << "No such index";
    return 0;

*/


    
  /*
  
    Answer Multiple Range-Sum Queries
    
    
    Problem statement: Given an array and several queries, each containing a starting index L and ending index R, calculate the sum of elements from index L to index R, inclusive.
    
    
    Example: Array [3, 5, 2, 8, 4]
    - Query L = 1, R = 3 → 15
    - Query L = 0, R = 2 → 10




    int arr[] = {3, 5, 2, 8, 4};
    int prefix[5];
    int n = 5;

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int L, R;
    cout << "Enter L and R: ";
    cin >> L >> R;

    if (L < 0 || R >= n || L > R) {
        cout << "Invalid range";
    } else {
        int sum = prefix[R];

        if (L > 0) {
            sum -= prefix[L - 1];
        }

        cout << "Range sum = " << sum;
    }

    return 0;

*/


	
	/*
	
	Count Subarrays Whose Sum Is Divisible by K
	
	Problem statement: Given an array of integers and a positive integer K, count all contiguous subarrays whose sum is divisible by K.
	
	Example: [2, 1, 3], K = 3
	Output: 3 --> [2,1], [3], [2,1,3]
	


    int main() {
    int arr[] = {2, 1, 3};
    int n = 3, k = 3;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum % k == 0)
                count++;
        }
    }

    cout << "Valid subarrays = " << count;
    return 0;
}


*/

}
