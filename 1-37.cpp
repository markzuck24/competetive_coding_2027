#include <bits/stdc++.h>
using namespace std;

int main() {
    
    Problem: Given a string and an integer K, count the total number of possible contiguous substrings of length exactly K.
    
    Input:
    s = "abcdef"
    K = 3


    Output: 4
    

    int main() {
    string s = "abcdef";
    int k = 3;

    int count = 0;

    if (k > 0 && k <= s.length()) {
        for (int i = 0; i <= s.length() - k; i++) {
            string substring = s.substr(i, k);
            cout << substring;
            count++;
        }
    }

    cout << count;

    return 0;
}



    /*
    
    Problem: Given an unsorted array, find the length of the longest sequence of consecutive integer values. The values do not need to appear next to each other in the original array.
    
    
    Input:
    [100, 4, 200, 1, 3, 2]

    Output: 4
    
    int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};

    unordered_set<int> numbers(arr.begin(), arr.end());

    int maxLength = 0;

    for (int num : numbers) {

        if (num == INT_MIN || numbers.find(num - 1) == numbers.end()) {

            int current = num;
            int length = 1;

            while (current != INT_MAX &&
                   numbers.find(current + 1) != numbers.end()) {
                current++;
                length++;
            }

            maxLength = max(maxLength, length);
        }
    }

    cout << maxLength;

    return 0;
}

*/
    
    /*
    
    Problem: Given an array of positive integers, count the number of pairs of elements at different indices whose sum is a power of two.
    
    Input:
    [1, 1, 2, 3, 5]
    
    Output: 4

    
    int main() {
    vector<int> arr = {1, 1, 2, 3, 5};

    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {

            long long total =
                (long long)arr[i] + arr[j];

            if (total > 0 &&
                (total & (total - 1)) == 0) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}

*/

    
    
    /*
    Problem: Given an array and an integer K, find the length of the longest contiguous subarray in which the difference between the maximum and minimum elements is at most K.
    
    Input:
    arr = [8, 2, 4, 7]
    K = 4

    Output: 2
    
    [8] → difference 0.

    [2, 4] → difference 2.
    
    [4, 7] → difference 3.
    

int main() {
    vector<int> arr = {8, 2, 4, 7};
    int k = 4;

    deque<int> minDeque;
    deque<int> maxDeque;

    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < arr.size(); right++) {

        while (!minDeque.empty() &&
               arr[minDeque.back()] > arr[right]) {
            minDeque.pop_back();
        }

        minDeque.push_back(right);

        while (!maxDeque.empty() &&
               arr[maxDeque.back()] < arr[right]) {
            maxDeque.pop_back();
        }

        maxDeque.push_back(right);

        while ((long long)arr[maxDeque.front()] -
               arr[minDeque.front()] > k) {

            left++;

            if (minDeque.front() < left) {
                minDeque.pop_front();
            }

            if (maxDeque.front() < left) {
                maxDeque.pop_front();
            }
        }

        maxLength = max(maxLength, right - left + 1);
    }

    cout << maxLength;

    return 0;
}
*/

	
	/*
	
	Problem: Given an array, count how many elements are strictly greater than every element appearing before them. The first element is always counted.
	
	Input:
    [3, 5, 2, 8, 6, 10]
	
	Output: 4
	
	

    int main() {
    vector<int> arr = {3, 5, 2, 8, 6, 10};

    int maximumSoFar = INT_MIN;
    int count = 0;

    for (int num : arr) {
        if (num > maximumSoFar) {
            count++;
            maximumSoFar = num;
        }
    }

    cout << count;

    return 0;
}

*/

	
	
	/*
	
	Problem: Given an array of integers, 
	find the minimum absolute difference between any two distinct elements at different indices.
	
	
	Input:
    [8, 3, 15, 6, 10]

    Output: 2
    
    
    int main() {
    vector<int> arr = {8, 3, 15, 6, 10};

    if (arr.size() < 2) {
        cout << -1;
        return 0;
    }

    sort(arr.begin(), arr.end());

    long long minDifference = LLONG_MAX;

    for (int i = 1; i < arr.size(); i++) {
        long long difference =
            (long long)arr[i] - arr[i - 1];

        minDifference = min(minDifference, difference);
    }

    cout << minDifference;

    return 0;
}

*/


}
