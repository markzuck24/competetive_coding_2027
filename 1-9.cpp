#include <bits/stdc++.h>
using namespace std;

int main() {


/*

An index is called an equilibrium index if the sum of elements on its left is equal to the sum of elements on its right.


Input: 1 3 5 2 2
Output: 2 

left sum = 1+3 = 4 
right sum = 2 + 2 = 4 

*/



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
    
    
    

/*

Find the Second Smallest Element

Find the second smallest distinct element in an array.


Input:  15 8 25 4 12 4 20
Output: 8
*/


/*

    int arr[] = {15, 8, 25, 4, 12, 4, 20};
    int n = 7;

    int smallest = arr[0];
    int secondSmallest = 1000000;

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second smallest = " << secondSmallest;

    return 0;

*/


/*
Find Missing Number

An array contains numbers from 1 to N, but one number is missing.

Input:
1 2 3 5 6

N = 6

Ans: 4 
*/


/*

 int arr[] = {1, 2, 3, 5, 6};
    int n = 6;

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) {
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number = " << missing;

    return 0;
 */   
    
    
    

/*
Find Common Elements in Two Arrays


Given two arrays, print elements that are present in both arrays.

Array 1:
10 20 30 40 50

Array 2:
30 40 60 70 10

Ans: 10, 30, 40

*/

/*

    int a[] = {10, 20, 30, 40, 50};
    int b[] = {30, 40, 60, 70, 10};

    int n1 = 5;
    int n2 = 5;

    for (int i = 0; i < n1; i++) {

        bool found = false;

        for (int j = 0; j < n2; j++) {

            if (a[i] == b[j]) {
                found = true;
                break;
            }
        }

        if (found) {
            cout << a[i] << " ";
        }
    }

    return 0;
    
 */
 
    
/*

Separate Positive, Negative and Zero

Given an integer array, count:

Positive numbers
Negative numbers
Zeros
Even numbers
Odd numbers



*/

/*

    int arr[] = {-5, 0, 8, -2, 7, 0, 4, -9};

    int n = 8;

    int positive = 0;
    int negative = 0;
    int zero = 0;
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zero++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;

    return 0;
 */
 
    
    

// Check Whether the Array is Sorted

// Determine whether an array is sorted in ascending order.

// Input:
// 10 20 25 30 45


// output: Yes 


/*

Find the Largest Difference Between Two Elements


Find the maximum difference between two elements.


7 1 5 3 6 4

Ans: 6

*/

/*
    int arr[] = {10, 20, 25, 30, 45};
    int n = 5;
    
    int mx = arr[0];
    int mn = arr[0];
    
    for(int i=0;i<n;i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
        else if (arr[i] < mn)
        {
            mn = arr[i];
        }
        
    }
    
    int ans = mx - mn;
    cout << ans << endl;
    
*/


/*

 int arr[] = {10, 20, 25, 30, 45};
    int n = 5;

    bool sorted = true;

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
 */   
    


   /*
   
    int arr[] = {5, 0, 2, 0, 8, 3, 0, 7};
    int n = 8;

    int position = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position] = arr[i];
            position++;
        }
    }

    while (position < n) {
        arr[position] = 0;
        position++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
*/


}
    
