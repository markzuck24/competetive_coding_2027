#include <bits/stdc++.h>
using namespace std;

int main() {
  
Find the Majority Element

Problem statement: Find an element that occurs more than n / 2 times. If no such element exists, print a suitable message.

Example: [2, 2, 1, 2, 3, 2, 2] --> 2 

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 2, 1, 2, 3, 2, 2};
    int n = 7;

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > n / 2) {
            cout << "Majority element = " << arr[i];
            return 0;
        }
    }

    cout << "No majority element";

    return 0;
}




/*

  Find All Leaders in an Array
  
  Problem statement: An element is a leader if it is greater than every element to its right. The last element is always a leader.
  
  Example: [16, 17, 4, 3, 5, 2] --> [17, 5, 2]
  
  #include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    for (int i = 0; i < n; i++) {
        bool leader = true;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }

        if (leader) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
*/

  
  /*
  
  Problem statement: Rearrange an array so that all even numbers appear before all odd numbers. The order within each group does not need to be preserved.
  
  
  Example: [3, 8, 5, 2, 7, 4]
  output: [8, 2, 4, 3, 5 ,7]

int main() {
    int arr[] = {3, 8, 5, 2, 7, 4};
    int n = 6;

    int left = 0, right = n - 1;

    while (left < right) {
        while (left < right && arr[left] % 2 == 0) {
            left++;
        }

        while (left < right && arr[right] % 2 != 0) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

*/

  
  
 /*  
    Find the Intersection Without Duplicates
    
    Problem statement: Print distinct elements common to both arrays, even if an element appears multiple times in either input.
    
    Example: [2, 2, 4, 6, 6, 8] and [2, 6, 6, 10]
    output: [2, 6]
    
  */

/*

int main() {
    int a[] = {2, 2, 4, 6, 6, 8};
    int b[] = {2, 6, 6, 10};

    int n1 = 6, n2 = 4;

    for (int i = 0; i < n1; i++) {
        bool found = false;

        for (int j = 0; j < n2; j++) {
            if (a[i] == b[j]) {
                found = true;
                break;
            }
        }

        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = false;
                break;
            }
        }

        if (found) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
 */  
 /*   
    Problem statement: Print every distinct element that appears in either of two arrays. Do not print duplicates.
    
    Example: [1, 2, 3, 4] and [3, 4, 5, 6] 
    output: [1, 2, 3, 4, 5, 6]

#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {3, 4, 5, 6};
    
    int n1 = 4, n2 = 4;

    for (int i = 0; i < n1; i++) {
        cout << a[i] << " ";
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (b[i] == a[j]) {
                found = true;
                break;
            }
        }

        for (int j = 0; j < i; j++) {
            if (b[i] == b[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            cout << b[i] << " ";
        }
    }

    return 0;
}


*/


/*	
	
Problem statement: Given two arrays sorted in ascending order, merge them into one sorted array without sorting the result afterward.


Example: [1, 4, 7] and [2, 3, 8] → [1, 2, 3, 4, 7, 8]

*/

/*

#include <iostream>
using namespace std;

int main() {
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
}

*/

}
