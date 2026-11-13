#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
      Problem: Given a string, find the last character in the string that appears more than once. Return the character based on its last occurrence, means the order in which duplicates are discovered.
    
    Input:
    "abccba"

    Output: "a"
    
    int main() {
        string s = "abccba";
    
        unordered_map<char, int> frequency;
    
        for (char ch : s) {
            frequency[ch]++;
        }
    
        bool found = false;
    
        for (char ch : s) {
            if (frequency[ch] > 1) {
                cout << ch;
                found = true;
            }
        }
    
        if (!found) {
            cout << -1;
        }
    
        return 0;
    }



    
  
  /*
  
    Problem: Given a string, find the first character in the string that appears more than once. Return the character based on its first occurrence, not the order in which duplicates are discovered.
    
    Input:
    "abccba"

    Output: "a"
    
    int main() {
        string s = "abccba";
    
        unordered_map<char, int> frequency;
    
        for (char ch : s) {
            frequency[ch]++;
        }
    
        bool found = false;
    
        for (char ch : s) {
            if (frequency[ch] > 1) {
                cout << ch;
                found = true;
                break;
            }
        }
    
        if (!found) {
            cout << -1;
        }
    
        return 0;
    }

*/

    
    
    /*
    
    Problem: Given an array, find the length of the smallest contiguous subarray that contains every distinct element present in the complete array.
    
    Input:
    [1, 2, 2, 3, 1, 4, 2] --> [1,2,3,4]

    Output: 4 


    int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2};

    unordered_set<int> distinct(
        arr.begin(), arr.end()
    );

    int required = distinct.size();

    unordered_map<int, int> frequency;

    int left = 0;
    int minLength = arr.size();

    for (int right = 0; right < arr.size(); right++) {
        frequency[arr[right]]++;

        while (frequency.size() == required) {
            minLength = min(
                minLength, right - left + 1
            );

            frequency[arr[left]]--;

            if (frequency[arr[left]] == 0) {
                frequency.erase(arr[left]);
            }

            left++;
        }
    }

    cout << minLength;

    return 0;
}


*/

    
    
    
    
    /*
    
    Problem: Given an array, count all contiguous subarrays whose first and last elements are equal.
    
    Input:
    [1, 2, 1]

    Output: 
    [1]
    [2]
    [1]
    [1,2,1]
    
    

    int main() 
{
    vector<int> arr = {1, 2, 1};

    unordered_map<int, long long> frequency;

    for (int value : arr) {
        frequency[value]++;
    }

    long long count = 0;

    for (auto entry : frequency) {
        long long freq = entry.second;

        count += freq * (freq + 1) / 2;
    }

    cout << count;

    return 0;
}

*/

    
    /*
    
    Problem: Given a circular array, select elements such that no two selected elements are adjacent. The first and last elements are also considered adjacent. Find the maximum possible sum.
    
    
    Input:
    [2, 3, 2]
    
    Output: 3
    

long long linearMaxSum(vector<int>& arr, int start, int end) {
    long long prev2 = 0;
    long long prev1 = 0;

    for (int i = start; i <= end; i++) {
        long long current = max(
            prev1, prev2 + arr[i]
        );

        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main() {
    vector<int> arr = {2, 3, 2};

    int n = arr.size();

    if (n == 0) {
        cout << 0;
    }
    else if (n == 1) {
        cout << arr[0];
    }
    else {
        cout << max(
            linearMaxSum(arr, 0, n - 2),
            linearMaxSum(arr, 1, n - 1)
        );
    }

    return 0;
}

*/

    
    /*
    
    Problem: Given an integer array and a target average K, 
    find the length of the longest contiguous subarray whose average is exactly K.
    
    Input:
    arr = [1, 2, 3, 4, 5]
    K = 3

    Output: 5
    

    int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;

    long long prefixSum = 0;

    unordered_map<long long, int> firstIndex;
    firstIndex[0] = -1;

    int maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i] - k;

        if (firstIndex.count(prefixSum)) {
            maxLength = max(
                maxLength, i - firstIndex[prefixSum]
            );
        }
        else {
            firstIndex[prefixSum] = i;
        }
    }

    cout << maxLength;

    return 0;
}

*/


    
    
/*

Problem: 
Given an array and two numbers x and y, 
find the minimum difference between their indices.

Input:
arr = [3, 5, 4, 2, 6, 5, 6, 2]
x = 3
y = 6

Output: 4


int main() {
    vector<int> arr = {3, 5, 4, 2, 6, 5, 6, 2};

    int x = 3, y = 6;

    int lastX = -1;
    int lastY = -1;
    int minDistance = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == x) {
            lastX = i;

            if (lastY != -1) {
                minDistance = min(
                    minDistance, abs(lastX - lastY)
                );
            }
        }

        if (arr[i] == y) {
            lastY = i;

            if (lastX != -1) {
                minDistance = min(
                    minDistance, abs(lastX - lastY)
                );
            }
        }
    }

    cout << (minDistance == INT_MAX ? -1 : minDistance);

    return 0;
}

*/




}
