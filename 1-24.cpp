#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Given a binary array containing only 0 and 1, find the maximum number of consecutive 1s.

    Example: [1, 1, 0, 1, 1, 1] → 3
    
    
    int arr[] = {1, 1, 0, 1, 1, 1};
    int current = 0, mx = 0;

    for (int x : arr) {
        if (x == 1) {
            current++;
            mx = max(mx, current);
        } else {
            current = 0;
        }
    }

    cout << mx;
    return 0;



    
    /*
    
    Problem: Remove all occurrences of a given value from an array in-place. Return the number of remaining elements; the first part of the array should contain the retained elements.

Example: arr = [3, 2, 2, 3], value = 3 → Remaining array: [2, 2], length: 2


    int arr[] = {3, 2, 2, 3};
    int n = 4, value = 3, k = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != value) {
            arr[k] = arr[i];
            k++;
        }
    }

    cout << "Length: " << k << endl;
    cout << "Remaining: ";

    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";

    return 0;
*/


    
    /*
    
    Problem: Given a sorted array of distinct integers and a target, 
    return its index if found. 
    Otherwise, return the index where it should be inserted to maintain sorted order.

    Example: arr = [1, 3, 5, 6], target = 2 → 1


    int arr[] = {1, 3, 5, 6};
    int n = 4, target = 2;
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << mid;
            return 0;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << left;
    return 0;
*/


    /*
    
    Problem: Rearrange an array so that all negative numbers appear before all non-negative numbers. 
    The relative order of elements needs to be preserved.

    Example: [3, -1, 4, -2, 0] → [-1, -2, 3, 4, 0]

    
    int arr[] = {3, -1, 4, -2, 0};
    int n = 5;
    vector<int> result;

    for (int x : arr)
        if (x < 0) result.push_back(x);

    for (int x : arr)
        if (x >= 0) result.push_back(x);

    for (int x : result)
        cout << x << " ";

    return 0;

*/

    
    /*
    
    Problem: Find the element that occurs more than n / 2 times. 
    Assume such an element is guaranteed to exist.
    
    Example: [3, 2, 3, 3, 1]
    Output: 3
    
    

    int arr[] = {3, 2, 3, 3, 1};
    int n = 5;

    sort(arr, arr + n);
    cout << arr[n / 2];

    return 0;
*/

    
    /*
    
    Problem: An array contains N distinct numbers from the range 0 to N, with one number missing. Find the missing number.
    
    Example: [3, 0, 1]
    Output: 2 
    
    int arr[] = {3, 0, 1};
    int n = 3;
    int expected = n * (n + 1) / 2;
    int actual = 0;

    for (int x : arr)
        actual += x;

    cout << expected - actual;
    return 0;
    */
    
    
    /*
    
    Problem: Return the common elements, including repeated occurrences. 
    Each occurrence can be used only as many times as it appears in both arrays.
    
    Example: A = [1, 2, 2, 3], B = [2, 2, 4]
    Output: [2,2]
    */
    
    
    /*
    
    vector<int> a = {1, 2, 2, 3};
    vector<int> b = {2, 2, 4};

    unordered_map<int, int> freq;
    vector<int> result;

    for (int x : a)
        freq[x]++;

    for (int x : b) {
        if (freq[x] > 0) {
            result.push_back(x);
            freq[x]--;
        }
    }

    for (int x : result)
        cout << x << " ";

    return 0;

    */
    
    /*
    
    Problem: Every integer in an array appears exactly twice except one integer, 
    which appears once. Find that number.
    
    Example: [4, 1, 2, 1, 2]
    output: 4
    
    
    int arr[] = {4, 1, 2, 1, 2};
    int answer = 0;

    for (int x : arr)
        answer ^= x;

    cout << answer;
    return 0;

    */
    
    
    
	
	// Given a number, count the number of digit in it.
/*	
	
	int n = 1473;
	//ans = 4 
	int count = 0;
	while(n>0)
	{
	    n = n/10;
	    count++;
	}
	
	cout << count;
*/	
	
	
	// Given a number, print each of its digit on a new line 
	
	/*	
	int n = 1473;
	int count = 0;
	int d= -1;
	while(n>0)
	{
	    d = n%10;
	    cout << d << endl;
	    
	    n = n/10;
	    
	}
	*/
	
	    
	// Given a number, reverse it.
	
	
	/*
	
	int n = 1473;
	//ans = 3741
	
	int count = 0;
	int d= -1;
	int r_n = 0;
	while(n>0)
	{
	    d = n%10;
	    r_n = r_n*10 + d;
	    
	    n = n/10;
	}
	
	cout << r_n << endl;
	*/
	
	
	

}
