#include <bits/stdc++.h>
using namespace std;

int main() {
   
   
  Write a program that accepts:

Account balance
Withdrawal amount

Apply the following rules:

Withdrawal amount must be positive.
Withdrawal amount must be a multiple of ₹500.
Withdrawal amount cannot exceed the balance.
If the withdrawal amount is greater than ₹20,000, display "Daily withdrawal limit exceeded".
Otherwise, perform the withdrawal and display the remaining balance.



#include <iostream>
using namespace std;

int main() {
    double balance, amount;

    cout << "Enter account balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid withdrawal amount";
    }
    else if ((int)amount % 500 != 0) {
        cout << "Amount must be a multiple of Rs. 500";
    }
    else if (amount > 20000) {
        cout << "Daily withdrawal limit exceeded";
    }
    else if (amount > balance) {
        cout << "Insufficient balance";
    }
    else {
        balance = balance - amount;
        cout << "Withdrawal successful" << endl;
        cout << "Remaining balance: Rs. " << balance;
    }

    return 0;
}




  
  
 /*
  
  Accept marks in three subjects. Calculate the average marks and determine the result:

If any subject is below 40 → Fail
Otherwise:
Average ≥ 85 → Grade A
Average ≥ 70 → Grade B
Average ≥ 55 → Grade C
Average ≥ 40 → Grade D




#include <iostream>
using namespace std;

int main() {
    int math, science, english;
    double average;

    cout << "Enter marks in Math, Science and English: ";
    cin >> math >> science >> english;

    average = (math + science + english) / 3.0;

    if (math < 40 || science < 40 || english < 40) {
        cout << "Result: Fail";
    }
    else if (average >= 85) {
        cout << "Grade: A";
    }
    else if (average >= 70) {
        cout << "Grade: B";
    }
    else if (average >= 55) {
        cout << "Grade: C";
    }
    else {
        cout << "Grade: D";
    }

    return 0;
}

*/
    
    
//     Write a C++ program to calculate an electricity bill based on the number of units consumed:

// Up to 100 units → ₹5 per unit
// 101–200 units → ₹7 per unit
// 201–300 units → ₹10 per unit
// Above 300 units → ₹12 per unit

// Also, if the calculated bill is greater than ₹3,000, add a 5% surcharge.


/*

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = units * 7;
    }
    else if (units <= 300) {
        bill = units * 10;
    }
    else {
        bill = units * 12;
    }

    if (bill > 3000) {
        bill = bill*1.05;
    }

    cout << "Final electricity bill = Rs. " << bill;

    return 0;
}

*/

// if (2 < 5)
// {
//     cout << "A";
// }
// else if (5 > 3)
// {
//     cout << "B";
// }
// else
// {
//     cout << "C";
// }



// if (2 > 5)
// {
//     cout << "A";
// }
// else if (5 < 3)
// {
//     cout << "B";
// }
// else
// {
//     cout << "C";
// }
    
    //  Given 3 numbers, print the maximum and minimum among them.
     
    //  int a = 10, b = 20, c = 15;
    //  //mx = 20, mn = 10
    // int mn = 0, mx = 0;
    
    
    // mn = min({a,b,c});
    // mx = max({a,b,c});
    
    // cout << mn << " " << mx << endl;
    
    // if ((a<=b) && (a<=c))
    // {
    //     mn = a;
    // }
    
    
    // if ((b<=a) && (b<=c))
    // {
    //     mn = b;
    // }
    
    
    // if ((c<=b) && (c<=a))
    // {
    //     mn = c;
    // }
    
    
    // if ((a>=b) && (a>=c))
    // {
    //     mx = a;
    // }
    
    
    // if ((b>=a) && (b>=c))
    // {
    //     mx = b;
    // }
    
    
    // if ((c>=b) && (c>=a))
    // {
    //     mx = c;
    // }
    
    
    // cout << mx << endl;
    // cout << mn << endl;
    
     
     
    
    // int a = 10;
    // int b = 5;
    // cout << (a > b) << endl;
    // cout << (a!=b) << endl;
    // cout << (a==b) << endl;
    
    // cout << ((5 > 3) && (5 < 2)) << endl;
    
    // cout << ((5 > 3) || (5 < 2)) << endl;
    
    
    // if ((5 > 3) || (5 < 2))
    // {
    //     cout << "A";
    // }
    
    // if (4 != 5)
    // {
    //     cout << "C";
    // }
    
    // cout << "B";
    
    // if (3 == 4)
    // {
    //     cout << "A";
    // }
    // else
    // {
    //     cout << "B";
    // }
    
    
    // Take a integer as input from the user.
    // Print if it is even or odd.
    
    // int n;
    // cin >> n;
    
    // if (n%2 == 0)
    // {
    //     cout << "Even";
    // }
    // else
    // {
    //     cout << "Odd";
    // }
    
}
