#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Find the factorial of a number
    Input: 5 --> 5!= 120
    
    /*
    
    Find the digital root
    
    Problem: Repeatedly add the digits of a positive integer until only one digit remains.
    
    Example: Input: 9875
    Output: 9+8+7+5 = 29 = 2+9 = 11 = 1+1 = 2 
    ans: 2 
    
    
    int n = 9875;

    while (n >= 10) {
        int sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    cout << n;
    return 0;

*/

    
    /*
    
    Problem: Given two integers L and R, print all prime numbers in the inclusive range.
    
    Example: Input: 10, 25
    Output: 11, 13, 17, 19, 23
    
    int l=10, r = 25;
    
    for(int n = l; n <= r; n++)
    {
        bool flag = true;
        
        for(int i=2; i<n; i++)
        {
            if(n%i == 0)
            {
                flag = false;
                break;
            }
        }
        
        if(flag)
        {
            cout << n << endl;
        }
    }
    
    */
    
    
    /*
    
    Check whether a number is prime
    
    
    Problem: Determine whether a number greater than 1 is prime. 
    Use trial division only up to its square root.
    
    
    
    int n = 23;
    
    bool prime = true; 
    
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            prime = false;
            break;
        }
    }
    
    if(prime)
    {
        cout << "Prime";
    }
    else 
    {
        cout << "Not prime";
    }
    
    */
    
    
    /*
    
    Problem: 
    Calculate the least common multiple of two positive integers. 
    Use the relationship between LCM and GCD.
    
    
    Example: Input: 12, 18
    Output: 
    12 --> 12, 24, 36 
    18 --> 18, 36, ...
    LCM = 36
    
    
    int a = 12, b = 18;
    
    int n = a*b;
    
    for(int i=1; i<= n; i++)
    {
        if(i%a ==0 && i%b ==0)
        {
            cout << i << endl;
            break;
        }
    }
    
    gcd * lcm = a*b 
    
    lcm = a*b/gcd
    
    */
    
    /*
    Problem: 
    
    Find the greatest common divisor (GCD) of two positive integers using the Euclidean algorithm.
    
    Example: Input: 48, 18
    Output: 6
    
    18 --> 1, 2, 3, 6, 18 
    48 --> 1, 2, 3, 4, 6, 8, 12, 16, 24, 48
    
    common divisors: 1, 2, 3, 6 
    greatest common divisor: 6
	
	
	
    int a = 48, b = 18;

    int n = min(a,b);
    int gcd = 1;
    
    for(int i=1; i<=n ; i++)
    {
        if(a%i ==0 && b%i == 0)
        {
            gcd = i;
        }
    }
    
    cout << gcd;

    */
	

	/*
	
	Problem: 
	Given a non-negative integer, 
	determine whether it reads the same forward and backward. 
	Do not convert the number to a string.
	
	Example: Input: 12321
	Output: Yes
	
	
	
    int n = 12321;
    int original = n, reversedNum = 0;

    while (n > 0) {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        cout << reversedNum << endl;
        n /= 10;
    }

    if (original == reversedNum)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
	
	*/
	
	/*
	
	Count the Number of Inversions
	
	Problem statement: 
	An inversion is a pair of indices (i, j) where i < j but arr[i] > arr[j]. 
	Count all inversions in the array.
	
	
	Example: [2, 4, 1, 3, 5]
	Output: (2,1), (4,1) (4,3) --> 3
	
	
	

    int arr[] = {2, 4, 1, 3, 5};
    int n = 5;
    int inversions = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }

    cout << "Inversions = " << inversions;
    return 0;
	
	*/
	

}
