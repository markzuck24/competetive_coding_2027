#include <bits/stdc++.h>
using namespace std;

int main() {
    
    Problem: Given an array, find the maximum number of consecutive pairs that have equal values, where the pairs must belong to one continuous section of the array.
    
    Input:
    [1, 1, 1, 2, 2, 3, 3, 3, 3]

    Output: 3 
    

    int main() {
    vector<int> arr = {1, 1, 1, 2, 2, 3, 3, 3, 3};

    int currentPairs = 0;
    int maxPairs = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[i - 1]) {
            currentPairs++;
        }
        else {
            maxPairs = max(maxPairs, currentPairs);
            currentPairs = 0;
        }
    }

    maxPairs = max(maxPairs, currentPairs);

    cout << maxPairs;

    return 0;
}


    
    
    
    /*
    
    Problem: In one operation, you can increase any element by 1. 
    Find the minimum number of operations needed to make all array elements equal.
    
    Input:
    [1, 2, 3]

    Output: 2 + 1 + 0 = 3 
    
    

    int main() {
    vector<int> arr = {1, 2, 3};

    int maximum = *max_element(arr.begin(), arr.end());

    long long operations = 0;

    for (int num : arr) {
        operations += maximum - num;
    }

    cout << operations;

    return 0;
}

*/
    
    /*
    
    Problem: Given an array, calculate its prefix sums and find the maximum absolute difference between two consecutive prefix sums.
    
    Input:
    [2, -5, 4, 3]

    Output: [2, -3, 1, 4]
    
Consecutive differences:

- |-3 - 2| = 5
- |1 - (-3)| = 4
- |4 - 1| = 3

Maximum difference = 5.



    int main() {
    vector<int> arr = {2, -5, 4, 3};

    long long prefixSum = 0;
    long long previousPrefix = 0;
    long long maxDifference = 0;

    for (int num : arr) {
        prefixSum += num;

        long long difference = abs(prefixSum - previousPrefix);

        maxDifference = max(maxDifference, difference);

        previousPrefix = prefixSum;
    }

    cout << maxDifference;

    return 0;
}

*/


    
    /*
    
    Problem: Given an array of integers, replace each element with its rank when the distinct elements are sorted in ascending order. The smallest distinct element gets rank 1.
    
    Input:
    [40, 10, 20, 30, 20]

    Output: [4, 1, 2, 3, 2]
    
    10 - 1
    20 - 2 
    30 - 3
    40 - 4
    
    
    int main() {
    vector<int> arr = {40, 10, 20, 30, 20};

    vector<int> sortedValues = arr;

    sort(sortedValues.begin(), sortedValues.end());

    sortedValues.erase(
        unique(sortedValues.begin(), sortedValues.end()),
        sortedValues.end()
    );

    map<int, int> rank;

    for (int i = 0; i < sortedValues.size(); i++) {
        rank[sortedValues[i]] = i + 1;
    }

    for (int num : arr) {
        cout << rank[num] << " ";
    }

    return 0;
}

*/
    
    /*
    
	Problem: Given an array, find the element that occurs the fewest number of times. If multiple elements have the same minimum frequency, return the one that appears first in the original array.
	
	
	Input:
    [4, 2, 4, 3, 2, 5, 3, 3]

    Output: 5 
    
    
    int main() {
    vector<int> arr = {4, 2, 4, 3, 2, 5, 3, 3};

    unordered_map<int, int> frequency;

    for (int num : arr) {
        frequency[num]++;
    }

    int answer = arr[0];

    for (int num : arr) {
        if (frequency[num] < frequency[answer]) {
            answer = num;
        }
    }

    cout << answer;

    return 0;
}

*/


}
