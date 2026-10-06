#include <bits/stdc++.h>
using namespace std;

int main() {


// Given an array of int, find the min element in it


int numbers[5] = {25, 78, 12, 90, 45};


int mn = numbers[0];

for(int i=0; i<5; i++)
{
    if(numbers[i] < mn)
    {
        mn = numbers[i];
    }
    
}

cout << mn << endl;

/*

// Given an array of int, find the max element in it

int numbers[5] = {25, 78, 12, 90, 45};


int mx = numbers[0;

for(int i=0; i<5; i++)
{
    if(numbers[i] > mx)
    {
        mx = numbers[i];
    }
    
}

cout << mx << endl;
*/

/*

// Reverse an Array

int numbers[5] = {10, 20, 30, 40, 50};


for(int i=4; i>=0; i--)
{
    cout << numbers[i] << endl;
}
*/


/*

    int numbers[8] = {10, 20, 10, 30, 10, 40, 20, 10};
    
    // Find how many times 10 occurs.
    
    int count = 0;
    
    for (int i = 0; i < 8; i++) {
    
        if (numbers[i] == 10) {
            count++;
        }
    }
    
    cout << "10 occurs " << count << " times";
*/


/*

// Take a number from the user and determine whether it exists in an array.

int numbers[6] = {10, 25, 30, 45, 50, 75};

int key;
cin >> key;
bool found = false;
int ind = -1;
int n =6;

for(int i=0; i<n; i++)
{
    if(numbers[i] == key)
    {
        found = true;
        ind = i;
        break;
    }
    
    
}

if(found)
{
    cout << "Element found at index:" << ind << endl;
}
else
{
    cout << "Element not found";
}

*/


/*

    for (int i = 1; i <= 10; i++) {
    
        if (i % 2 == 0) {
            continue;
        }
    
        cout << i << " ";
    }
*/
	
// 	for (int i = 1; i <= 10; i++) {

//         if (i == 6) {
//             break;
//         }
    
//         cout << i << " ";
//     }






}
