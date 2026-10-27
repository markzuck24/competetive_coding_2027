#include <bits/stdc++.h>
using namespace std;

int main() {
    
    Create an array containing only positive elements

Problem: Create a new array containing only elements greater than zero, 
preserving their original order.

Example: [-2, 5, 0, 8, -1, 3]
Output: [5,8,3]



    int arr[] = {-2, 5, 0, 8, -1, 3};
    vector<int> result;

    for (int x : arr) {
        if (x > 0)
            result.push_back(x);
    }

    for (int x : result)
        cout << x << " ";

    return 0;


    
    /*
    
    
    Find the largest difference between adjacent elements
    
    Problem: Find the largest absolute difference between any two neighboring elements.
    
    Example: [4, 12, 5, 20, 8]
    Output: 15
    
    int arr[] = {4, 12, 5, 20, 8};
    int n = 5, largest = 0;

    for (int i = 0; i < n - 1; i++) {
        int difference = abs(arr[i] - arr[i + 1]);
        largest = max(largest, difference);
    }

    cout << largest;
    return 0;

*/




    
    /*
    
    
    Find the sum of elements at odd indices
    
    Example: [10, 20, 30, 40, 50, 60]
    
    Output: 120
    
//code1
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, total = 0;

    for (int i = 1; i < n; i += 2)
        total += arr[i];

    cout << total;
    return 0;

//code2
  int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, total = 0;

    for (int i = 0; i < n; i += 1)
    {
        if(i%2 == 1)
        {
            total += arr[i];
        }
    }
        

    cout << total;
    return 0;
    
    
    //code3
  int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6, total = 0;

    while(i < n)
    {
        if (i%2 == 1)
        {
            total += arr[i];
        }
        
        i += 1
    }
        

    cout << total;
    return 0;
    
    
    
    */
    
    
    
    /*
    
    Count adjacent equal pairs
    
    Problem: Count how many pairs of neighboring elements have equal values. 
    Overlapping pairs are NOT allowed.
    
    Example: [2, 2, 3, 3, 3, 1]
    Output: 3 --> (2,2), (3,3), (3,3)
    
    

    int arr[] = {2, 2, 3, 3, 3,3,1};
    int n = 6, count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1])
            count++;
            i++;
    }

    cout << count;
    
    */
    
    /*
    
    Count adjacent equal pairs
    
    Problem: Count how many pairs of neighboring elements have equal values. 
    Overlapping pairs are allowed.
    
    Example: [2, 2, 3, 3, 3, 1]
    Output: 3 --> (2,2), (3,3), (3,3)
    
    

    int arr[] = {2, 2, 3, 3, 3, 1};
    int n = 6, count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1])
            count++;
    }

    cout << count;


*/


    
    
    /*
    
        Find the index of the first element divisible by K
        
        Problem: Find the zero-based index of the first element divisible by K. 
        If no such element exists, print -1. Assume K is nonzero.
        
        Example: [7, 11, 18, 24, 30], K = 6
        Output: 
        
        part-1 --> 1st elem --> 18 (2)
        part-2 --> last elem --> 30 (4)
    
    
    //1st occurance
    int arr[] = {7, 11, 18, 24, 30};
    int n = 5, k = 6, answer = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            answer = i;
            break;
        }
    }

    cout << answer;
    return 0;



//last occurance
    int arr[] = {7, 11, 18, 24, 30};
    int n = 5, k = 6, answer = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] % k == 0) {
            answer = i;
        }
    }

    cout << answer;
    return 0;
    

	*/
	
	/*
	
	Calculate the product of all odd elements
	
	Problem: Calculate the product of all odd-valued elements in an array. 
	If there are no odd elements, print 1.
	
	Example: [2, 3, 4, 5, 6]
	Output: 15 
	
    int arr[] = {2, 3, 4, 5, 6};
    int product = 1;

    for (int x : arr) {
        if (x % 2 != 0)
            product *= x;
    }

    cout << product;
    return 0;

    */
    
	
	/*
	
    Count elements within a given range
    Problem: Given an array and two integers L and R, 
    count the elements that fall within the inclusive range [L,R]
    
    Example: [3, 8, 12, 5, 17, 9], L = 5, R = 12
    Output: 4
    
    
    int arr[] = {3, 8, 12, 5, 17, 9};
    int L = 5, R = 12, count = 0;

    for (int x : arr) {
        if (x >= L && x <= R)
            count++;
    }

    cout << count;
    return 0;



*/

	/*
	
	Check whether a string contains a given substring
	
	Problem: Given a string and a pattern, 
	determine whether the pattern occurs anywhere inside the string.
	
	Example: String = "competitive programming", pattern = "program"
	Output: Yes
	
	
    string s = "competitive programming";
    string pattern = "program";

    if (s.find(pattern) != string::npos)
        cout << "Yes";
    else
        cout << "No";

    return 0;

*/



}
