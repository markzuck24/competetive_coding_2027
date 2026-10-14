#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    
    Count Subarrays Whose Sum Is Divisible by K
    
    Problem statement: Given an array of integers and a positive integer K, count all contiguous subarrays whose sum is divisible by K.
    
    Example: [2, 1, 3], K = 3
    output: [2,1], [3], [2,1,3]
    
    


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


    
    /*
    
    Calculate the Prefix Sum Array
    
    Problem statement: Given an array, create a new array where each position contains the sum of all elements from index 0 to that position.
    
    Example: [2, 4, 1, 5, 3]
    output: [2, 6, 7, 12, 15]
    
    
    int main() {
    int arr[] = {2, 4, 1, 5, 3};
    int prefix[5];
    int n = 5;

    prefix[0] = arr[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    return 0;
}
    
 */
 
    
    /*
    
    Find the Longest Subarray with a Given Sum (Positive Numbers)
    
    
    Problem statement: Given an array of positive integers and a target sum, find the length of the longest contiguous subarray whose sum equals the target. If none exists, print 0.
    
    
    Example: [1, 2, 1, 1, 1, 3, 2], target 3
    Output: 3 


    int main() {
    int arr[] = {1, 2, 1, 1, 1, 3, 2};
    int n = 7, target = 3;

    int left = 0, sum = 0, longest = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            int length = right - left + 1;

            if (length > longest) {
                longest = length;
            }
        }
    }

    cout << "Longest length = " << longest;

    return 0;
}
    
 */  
    
    /*
    
    Find the Product of All Elements Except the Current Element
    
    
    Problem statement: Create a result array in which each position contains the product of all the other array elements, without dividing by the current element.
    
    Example: [1, 2, 3, 4]
    Output: [24, 12, 8, 6]
    
    */
    
    
    /*
    
    int main() {
    int arr[] = {1, 2, 3, 4};
    int result[4];
    int n = 4;

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = 0; j < n; j++) {
            if (i != j) {
                product *= arr[j];
            }
        }
        
        result[i] = product;
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
*/



	
	/*
	
	Problem statement: Find an element that is strictly greater than its immediate neighbors. 
	For this problem, assume the array has at least three elements and look only at interior positions.
	
	Example: [1, 3, 8, 4, 2, 5]
	Output: 8.
	

    int main() {
    int arr[] = {1, 3, 8, 4, 2, 5};
    int n = 6;

    bool found = false;

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] &&
            arr[i] > arr[i + 1]) {

            cout << "Peak index = " << i << endl;
            cout << "Peak value = " << arr[i];

            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No interior peak found";
    }

    return 0;
}

*/
	
	
	

}
