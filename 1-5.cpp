#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
Accept an employee's:

Salary
Years of experience
Performance rating from 1 to 5

Calculate the bonus according to:

Experience < 2 years → No bonus

Experience 2–5 years:
Rating ≥ 4 → 10% bonus
Otherwise → 5% bonus

Experience > 5 years:
Rating = 5 → 20% bonus
Rating = 4 → 15% bonus
Otherwise → 10% bonus

Display the bonus and total salary.



#include <iostream>
using namespace std;

int main() {
    double salary, bonus = 0;
    int experience, rating;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter years of experience: ";
    cin >> experience;

    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    if (experience < 2) {
        bonus = 0;
    }
    else if (experience <= 5) {
        if (rating >= 4) {
            bonus = salary * 0.10;
        }
        else {
            bonus = salary * 0.05;
        }
    }
    else {
        if (rating == 5) {
            bonus = salary * 0.20;
        }
        else if (rating == 4) {
            bonus = salary * 0.15;
        }
        else {
            bonus = salary * 0.10;
        }
    }

    cout << "Bonus = Rs. " << bonus << endl;
    cout << "Total salary = Rs. " << salary + bonus;

    return 0;
}






/*

An online store provides discounts based on purchase amount:
Take purchase amount as input from the user

Below ₹2,000 → No discount
₹2,000–₹4,999 → 10%
₹5,000–₹9,999 → 20%
₹10,000 or above → 30%

Additionally, if the customer is a premium member, they get an extra 5% discount.

Calculate the final payable amount.


#include <iostream>
using namespace std;

int main() {
    double amount, discount = 0;
    char premium;

    cout << "Enter purchase amount: ";
    cin >> amount;

    cout << "Are you a premium member? (Y/N): ";
    cin >> premium;

    if (amount < 2000) {
        discount = 0;
    }
    else if (amount < 5000) {
        discount = 10;
    }
    else if (amount < 10000) {
        discount = 20;
    }
    else {
        discount = 30;
    }

    if (premium == 'Y' || premium == 'y') {
        discount = discount + 5;
    }

    double finalAmount = amount - (amount * discount / 100);
    
    // amount*((100-discount)/100)

    cout << "Discount = " << discount << "%" << endl;
    cout << "Final amount = Rs. " << finalAmount;

    return 0;
}

*/
	
	
// 	string name = "Aditya";
// 	cout << name << endl;
	
	
// 	Take first name and last name as input and show the full name.
	
	string first_name, last_name;
	
	cin >> first_name >> last_name;
	
	string full_name = first_name + " " + last_name;
	
	cout << full_name << endl;
	
	cout << full_name.length() << endl;
	cout << full_name.size() << endl;
	
	cout << full_name[1] << endl;
	int n =full_name.length();
	cout << full_name[n-1] << endl;
	full_name[0] = 'B';
	cout << full_name << endl;

	cout << "It\'s Saturday" << endl;
    // string full_name = first_name.append(" ").append(last_name);
    // cout << full_name;
    
    int a = 10, b = 20;
    
    cout << a + b << endl;
    
    // cout << "10" + 20 << endl;
    cout << "Aditya \\ Jain" << endl;
    
}
