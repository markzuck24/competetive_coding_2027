#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	Find the Maximum Sum of Non-Adjacent Elements
	
	Problem statement: Find the maximum sum obtainable by selecting elements such that no two selected elements are adjacent. You may select no elements, so an array containing only negative numbers has answer 0.
	
	
	Example: [3, 2, 7, 10]
	Output: 13 --> 3 + 10 
	
	
    int arr[] = {3, 2, 7, 10};
    int n = 4;

    int best[4];

    best[0] = (arr[0] > 0) ? arr[0] : 0;

    for (int i = 1; i < n; i++) {
        int take = arr[i];

        if (i >= 2)
            take += best[i - 2];

        int skip = best[i - 1];

        best[i] = (take > skip) ? take : skip;
    }

    cout << "Maximum sum = " << best[n - 1];
    return 0;
}



	/*
	
	Find the Longest Subarray with At Most Two Distinct Values
	
	Problem statement: Given an array, find the length of the longest contiguous subarray containing no more than two distinct values.
	
	Example: [1, 2, 1, 2, 3, 3]
	Output: [1, 2, 1, 2] --> 4
	
	

    int arr[] = {1, 2, 1, 2, 3, 3};
    int n = 6;
    int longest = 0;

    for (int i = 0; i < n; i++) {
        int first = arr[i];
        int second = 0;
        bool hasSecond = false;

        for (int j = i; j < n; j++) {
            if (arr[j] != first) {
                if (!hasSecond) {
                    second = arr[j];
                    hasSecond = true;
                } else if (arr[j] != second) {
                    break;
                }
            }

            int length = j - i + 1;

            if (length > longest)
                longest = length;
        }
    }

    cout << "Longest length = " << longest;
    return 0;
}
*/


	
	
	
	/*
	
	Find the Smallest Difference Between Two Sorted Arrays
	
	Problem statement: Given two arrays sorted in ascending order, find the smallest absolute difference between an element of the first array and an element of the second.
	
	
	Example: A = [1, 4, 8, 10], B = [2, 5, 9, 12]
	Output: 1
	
	
    int a[] = {1, 4, 8, 10};
    int b[] = {2, 5, 9, 12};

    int n = 4, m = 4;
    int i = 0, j = 0;
    int minimum = abs(a[0] - b[0]);

    while (i < n && j < m) {
        int diff = abs(a[i] - b[j]);

        if (diff < minimum)
            minimum = diff;

        if (a[i] < b[j])
            i++;
        else
            j++;
    }

    cout << "Minimum difference = " << minimum;
    return 0;
}

*/

	
	/*
	
	Find the Previous Smaller Element
	
	Problem statement: For each element, find the nearest element to its left that is strictly smaller. If none exists, print -1.

Example: [4, 2, 5, 3, 7] 
Output:  [-1, -1, 2, 2, 3]

    int arr[] = {4, 2, 5, 3, 7};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int answer = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                answer = arr[j];
                break;
            }
        }

        cout << answer << " ";
    }

    return 0;

*/

	
	/*
	
	Find the Next Greater Element for Every Array Element
	
	Problem statement: For each element, find the first element to its right that is strictly greater. If no greater element exists, print -1.
	
	Example: [4, 5, 2, 10, 8]
	Output: [ 5, 10, 10, -1, -1]
	
	
    int arr[] = {4, 5, 2, 10, 8};
    int n = 5;

    for (int i = 0; i < n; i++) {
        int answer = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                answer = arr[j];
                break;
            }
        }

        cout << answer << " ";
    }

    return 0;

*/


	
	/*
	
	Find the Best Time to Buy and Sell Once
	
	
	Problem statement: Given daily stock prices, find the maximum profit possible by buying once and selling later. If no profit is possible, return 0.
	
	Example: [7, 1, 5, 3, 6, 4]
	Output: 5 --> 6-1 = 5
	
	
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = 6;

    int minimumPrice = prices[0];
    int maximumProfit = 0;

    for (int i = 1; i < n; i++) {
        int profit = prices[i] - minimumPrice;

        if (profit > maximumProfit)
            maximumProfit = profit;

        if (prices[i] < minimumPrice)
            minimumPrice = prices[i];
    }

    cout << "Maximum profit = " << maximumProfit;
    return 0;
*/


}
