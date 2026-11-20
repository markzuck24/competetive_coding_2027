#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Given an array, find the element having the second-highest frequency. If two elements have the same frequency, return the smaller element.
    
    
    Input:  [4, 4, 2, 2, 2, 7, 7, 5]

    Output: 4
        
    

int main() {
    vector<int> arr = {4, 4, 2, 2, 2, 7, 7, 5};

    map<int, int> freq;

    for (int num : arr) {
        freq[num]++;
    }

    vector<pair<int, int>> v;

    for (auto p : freq) {
        v.push_back({p.second, p.first});
    }

    sort(v.rbegin(), v.rend());

    if (v.size() >= 2) {
        cout << v[1].second;
    } else {
        cout << "Second most frequent element does not exist";
    }

    return 0;
}



    /*
    
    Problem statement: Given an integer array and an integer K, determine whether the array can be divided into pairs such that the sum of every pair is divisible by K.
    
    
    Input:
    arr = [9, 7, 5, 3]
    K = 6

    Output: true 
    


int main() {
    vector<int> arr = {9, 7, 5, 3};
    int k = 6;

    if (arr.size() % 2 != 0) {
        cout << "False";
        return 0;
    }

    vector<int> frequency(k, 0);

    for (int num : arr) {
        int remainder = ((num % k) + k) % k;
        frequency[remainder]++;
    }

    bool valid = true;

    for (int r = 0; r < k; r++) {

        if (r == 0) {
            if (frequency[r] % 2 != 0) {
                valid = false;
                break;
            }
        }
        else if (2 * r == k) {
            if (frequency[r] % 2 != 0) {
                valid = false;
                break;
            }
        }
        else if (frequency[r] != frequency[k - r]) {
            valid = false;
            break;
        }
    }

    cout << (valid ? "True" : "False");

    return 0;
}
*/

    
    /*
    
    Problem statement: Given an integer array, one move consists of increasing n-1 elements by 1. Find the minimum number of moves required to make all elements equal.
    
    
    Input:
    arr = [1, 2, 3]

    OUtput: 3
    

[1, 2, 3]
[1, 2, 2]
[1, 1, 2]
[1, 1, 1]




int main() {
    vector<int> arr = {1, 2, 3};

    int minimum = *min_element(
        arr.begin(), arr.end()
    );

    long long moves = 0;

    for (int num : arr) {
        moves += num - minimum;
    }

    cout << moves;

    return 0;
}



    Problem statement: Given an array of integers, find the length of the longest contiguous subarray whose sum is equal to K. The array may contain positive numbers, negative numbers, and zeros.
    
    
    Input:
    arr = [10, 5, 2, 7, 1, -10]
    K = 15

    Output:
    4
    


    int main() {
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;

    unordered_map<long long, int> firstIndex;

    long long prefixSum = 0;
    firstIndex[0] = -1;

    int answer = 0;

    for (int i = 0; i < arr.size(); i++) {

        prefixSum += arr[i];

        long long required = prefixSum - k;

        if (firstIndex.find(required) != firstIndex.end()) {
            answer = max(
                answer,
                i - firstIndex[required]
            );
        }

        if (firstIndex.find(prefixSum) == firstIndex.end()) {
            firstIndex[prefixSum] = i;
        }
    }

    cout << answer;

    return 0;
}

*/
	
	
	/*
	Problem statement: Given an integer array and a number K, 
	count the number of contiguous subarrays that contain exactly K odd numbers.
	
	
	arr = [1, 1, 2, 1, 1]
    K = 3
    

int atMostK(vector<int>& arr, int k) {

    if (k < 0) return 0;

    int left = 0;
    int oddCount = 0;
    int answer = 0;

    for (int right = 0; right < arr.size(); right++) {

        if (arr[right] % 2 != 0) {
            oddCount++;
        }

        while (oddCount > k) {

            if (arr[left] % 2 != 0) {
                oddCount--;
            }

            left++;
        }

        answer += right - left + 1;
    }

    return answer;
}

int main() {
    vector<int> arr = {1, 1, 2, 1, 1};
    int k = 3;

    cout << atMostK(arr, k) - atMostK(arr, k - 1);

    return 0;
}


*/

    
	

}
