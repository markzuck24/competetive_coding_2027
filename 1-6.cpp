#include <bits/stdc++.h>
using namespace std;

int main() {


// 	cout << "Hi" << endl;
// 	cout << "Hi" << endl;
// 	cout << "Hi" << endl;
// 	cout << "Hi" << endl;
// 	cout << "Hi" << endl;


    // for(int i=1; i<=5; i++)
    // {
    //     cout << "Hi" << endl;   
    // }


// 	print 1 to 10 onto the screen


    // for(int i=1; i<=10; i++)
    // {
    //     cout << i << endl;    
    // }
    
    // for(int i = 10; i>=1 ; i--)
    // {
    //     cout << i << endl;
    // }
    
    
    // // print all the even numbers from 1 to 20.
    // for(int i=2; i<=20; i+=2)
    // {
    //     cout << i << endl;
    // }
    
    
      // print all the odd numbers from 1 to 20.
    // for(int i=1; i<=20; i+=2)
    // {
    //     cout << i << endl;
    // }
    
    
    
          // print all the odd numbers from 1 to 20.
    // for(int i=1; i<=20; i++)
    // {
    //     if(i%2 != 0)
    //     {
    //         cout << i << endl;
    //     }
        
    // }
    
    
    // Sum of Numbers from 1 to N
    // int sum = 0;
    // int n = 10;
    
    // for(int i=1; i<= 10; i++)
    // {
    //     sum += i;
    // }
    
    // cout << sum << endl;
    
    
    // Multiplication table: 
    // 5x1 = 5
    // 5x2 = 10 
    // 5x3 = 15
    
//     int n = 5;
    
//     for (int i = 1; i <= 10; i++) {
//     cout << n << " x " << i << " = " << n * i << endl;
// }


    // int i = 1;
    
    // while (i <= 5) {
    //     cout << i << endl;
    //     i++;
    // }

    
//     for (int i = 1; i <= 3; i++) 
//     {

//         for (int j = 1; j <= 3; j++) 
//         {
//             cout << "* ";
//         }

//     cout << endl;
// }



    // int marks[5];
    
    // marks[0] = 10;
    // marks[1] = 5;
    // marks[2] = 4;
    // marks[3] = 10;
    // marks[4] = 7;

    // cout << marks[1] << endl;
    
    int marks[5] = {85, 72, 91, 68, 77};
    
    int n = 5;
    
    // for(int i=0; i<n; i++)
    // {
    //     cout << marks[i] << endl;
    // }


    // double sum = 0;
    
    // for(int i=0; i<n; i++)
    // {
    //     sum += marks[i];
    // }
    
    // double avg_marks = 0;
    
    // avg_marks = sum/n;
    // cout << avg_marks;
    
    
    // Count Even and Odd Numbers
    
    
    int numbers[8] = {12, 7, 15, 20, 8, 11, 6, 9};
    
    
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < 8; i++) {
    
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }
    
    cout << "Even numbers = " << evenCount << endl;
    cout << "Odd numbers = " << oddCount;

    
}


