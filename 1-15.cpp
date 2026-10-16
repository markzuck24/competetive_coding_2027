#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    /*
    
    Find the Longest Mountain in an Array
    
    
    Problem statement: A mountain is a contiguous sequence that strictly increases to a peak and then strictly decreases. Find the length of the longest mountain. A valid mountain must contain at least three elements.
    
    
    Example: [2, 1, 4, 7, 3, 2, 5]
    Output: [ 1, 4, 7, 3, 2]
    */
    

    int arr[] = {2, 1, 4, 7, 3, 2, 5};
    int n = 7;
    int longest = 0;

    for (int i = 1; i < n - 1; i++) 
    {
        if (arr[i] > arr[i - 1] &&
            arr[i] > arr[i + 1]) 
        {

            int left = i;
            int right = i;

            while (left > 0 &&
                   arr[left - 1] < arr[left]) 
        ``  {
                left--;
            }

            while (right < n - 1 &&
                   arr[right] > arr[right + 1]) 
            {
                right++;
            }

            int length = right - left + 1;

            if (length > longest)
                longest = length;
        }
    }

    cout << "Longest mountain = " << longest;
    return 0;

    
    
    
    /*
    
    Find the Number of Triplets with a Given Sum
    
    Problem statement: Count all triplets at three distinct indices whose sum equals a target value.
    
    Example: [1, 2, 3, 4, 5], target 9
    
    Output: 2 
    (1,3,5) and (2,3,4)
    
    */
    
    /*
    

    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, target = 9;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == target) {
                    cout << arr[i] << ", "
                         << arr[j] << ", "
                         << arr[k] << endl;
                    count++;
                }
            }
        }
    }

    cout << "Total triplets = " << count;
    return 0;

*/

    
    /*
    
    Find the Number of Pairs with a Difference of K
    
    Problem statement: Count pairs of elements at different indices whose absolute difference equals K. Count each pair of indices only once.
    
    Example: [1, 5, 3, 4, 2], K = 2
    Output: 3 --> (1,3) (5,3) (4,2)
    
    
    int arr[] = {1, 5, 3, 4, 2};
    int n = 5, k = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (abs(arr[i] - arr[j]) == k) {
                count++;
            }
        }
    }

    cout << "Number of pairs = " << count;
    return 0;

*/

    

    
    /*
    
    Find the Minimum Absolute Sum of Two Elements
    
    Problem statement: Find two elements at different indices whose sum has the smallest absolute value.
    
    Example: [-8, 4, 5, -2, 10]
    Output: 4 & -2 --> 2 

    int arr[] = {-8, 4, 5, -2, 10};
    int n = 5;

    int bestA = arr[0], bestB = arr[1];
    int bestSum = arr[0] + arr[1];

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];

            if (abs(sum) < abs(bestSum)) {
                bestSum = sum;
                bestA = arr[i];
                bestB = arr[j];
            }
        }
    }

    cout << "Pair = " << bestA << ", " << bestB << endl;
    cout << "Absolute sum = " << abs(bestSum);

    return 0;

*/

    
    
    
    /*
    
    
    Find the Maximum Product of Two Elements
    
    
    
    Problem statement: Find the maximum product obtainable by multiplying two elements at different indices. The array may contain positive and negative integers.
    
    
    Example: [-10, -3, 5, 6, -2]
    Output: 30
    
    [-5, -4, -2, 3]
    max product: -5*-4 = 20
    
    
    */
    
/*

    int arr[] = {-10, -3, 5, 6, -2};
    int n = 5;
    
    sort(arr, arr + n);
    
    int product1 = arr[0] * arr[1];
    int product2 = arr[n - 1] * arr[n - 2];
    
    int maxProduct = max(product1, product2);
    
    cout << "Maximum Product = " << maxProduct << endl;
    
    return 0;

*/


}
