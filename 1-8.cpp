#include <bits/stdc++.h>
using namespace std;

int main() {


Find the First Non-Repeating Element

Find the first element whose frequency is exactly 1.


4 5 4 6 5 7 6

7



 int arr[] = {4, 5, 4, 6, 5, 7, 6};
    int n = 7;

    for (int i = 0; i < n; i++) {

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << "First non-repeating element = " << arr[i];
            break;
        }
    }
    
    


/*

Find the First Repeating Element


Find the first element in the array that appears more than once.


5 7 3 7 2 3



  int arr[] = {5, 7, 3, 7, 2, 3};
    int n = 6;

    for (int i = 0; i < n; i++) {

        bool repeated = false;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                repeated = true;
                break;
            }
        }

        if (repeated) {
            cout << "First repeating element = " << arr[i];
            break;
        }
    }

    return 0;
*/

  
    
/*

Find the Frequency of Every Element

Print each unique element along with its frequency.


10 20 10 30 20 10


10 -> 3 
20 -> 2
30 -> 1


*/

/*
int arr[] = {10, 20, 10, 30, 20, 10};
    int n = 6;

    for (int i = 0; i < n; i++) {

        bool alreadyCounted = false;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyCounted = true;
                break;
            }
        }

        if (alreadyCounted)
            continue;

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }

    return 0;
    
  */
  

// Given an array, print all elements that occur more than once.

// 10 20 30 20 40 10 50 30

// 10 20 30

/*

int arr[] = {10, 20, 30, 20, 40, 10, 50, 30};
    int n = 8;

    for (int i = 0; i < n; i++) {

        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (arr[k] == arr[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << " ";
        }
    }

    return 0;
    
    
*/



/*
	Given an array, move all 0s to the end while maintaining the relative order of the non-zero elements.
	
	
input:	5 0 2 0 8 3 0 7
output:    5 2 8 3 7 0 0 0

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

    return 0;
    
    
*/

	
}
