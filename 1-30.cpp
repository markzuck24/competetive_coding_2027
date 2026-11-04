#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: 
    A peak element is an element that is strictly greater than its neighboring elements.
    Find the index of any peak element.
    Assume the elements outside the array are negative infinity.
    
    
    
    /*
    
    
    Problem statement: Given an array of integers and a target value, one operation allows you to increase or decrease any element by 1. Find the minimum total number of operations needed to make every element equal to the target.
    
    Input: nums = [1, 3, 5], target = 3
    Output: 1->2    
            3-> 0    
          5 -> 2
    


int minOperations(vector<int>& nums, int target) {
    int operations = 0;

    for (int x : nums)
        operations += abs(x - target);

    return operations;
}

int main() {
    vector<int> nums = {1, 3, 5};
    cout << minOperations(nums, 3);
}

*/

    
    /*
    
    Problem statement: Given an integer array, an integer k, and an integer threshold, count the number of contiguous subarrays of length k whose average is greater than or equal to the threshold.
    
    
    Input: nums = [2, 2, 2, 2, 5, 5, 5, 8], k = 3, threshold = 4
    Output: 3


#include <bits/stdc++.h>
using namespace std;

int countSubarrays(vector<int>& nums, int k, int threshold) {
    long long currentSum = 0;
    int ans = 0;

    for (int i = 0; i < k; i++)
        currentSum += nums[i];

    if (currentSum >= 1LL * k * threshold)
        ans++;

    for (int i = k; i < nums.size(); i++) {
        currentSum += nums[i] - nums[i - k];

        if (currentSum >= 1LL * k * threshold)
            ans++;
    }

    return ans;
}

int main() {
    vector<int> nums = {2, 2, 2, 2, 5, 5, 5, 8};
    cout << countSubarrays(nums, 3, 4);
}


*/
    
    /*
    
    
    Problem: Given a string, find the longest contiguous substring that reads the same forward and backward.
    
    Input: s = "babad"
    Output: "bab"



#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    int start = 0;
    int maxLength = 0;

    auto expand = [&](int left, int right) {
        while (left >= 0 && right < s.size() &&
               s[left] == s[right]) {

            int length = right - left + 1;

            if (length > maxLength) {
                start = left;
                maxLength = length;
            }

            left--;
            right++;
        }
    };

    for (int i = 0; i < s.size(); i++) {
        expand(i, i);
        expand(i, i + 1);
    }

    return s.substr(start, maxLength);
}

int main() {
    cout << longestPalindrome("babad");
}


*/

/*

    Problem: Given an array of strings, group together all strings that are anagrams of one another.
    
    Input: ["eat", "tea", "tan", "ate", "nat", "bat"]
    Output: [["eat", "tea", "ate"], ["tan", "nat"], ["bat"]]
    
    

    #include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> groups;

    for (string word : strs) {
        string key = word;

        sort(key.begin(), key.end());

        groups[key].push_back(word);
    }

    vector<vector<string>> result;

    for (auto& entry : groups) {
        result.push_back(entry.second);
    }

    return result;
}

int main() {
    vector<string> strs = {
        "eat", "tea", "tan", "ate", "nat", "bat"
    };

    vector<vector<string>> ans = groupAnagrams(strs);

    for (auto group : ans) {
        for (string word : group)
            cout << word << " ";

        cout << endl;
    }
}

*/

        

/*

Given two strings, haystack and needle, find the first position where needle occurs inside haystack. Return -1 if it does not occur.


Input:
haystack = "sadbutsad"
needle = "sad"


Output: 0



int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();

    for (int i = 0; i <= n - m; i++) {

        int j = 0;

        while (j < m &&
               haystack[i + j] == needle[j]) {
            j++;
        }

        if (j == m)
            return i;
    }

    return -1;
}

int main() {
    cout << strStr("sadbutsad", "sad");
}


*/


/*

// #given a int n, print the right half pyramid of n rows with *.

// n = 5

// *
// **
// ***
// ****
// *****


    int n = 5;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "*" << " ";
        }
        
        cout << endl;
    }
*/
}
