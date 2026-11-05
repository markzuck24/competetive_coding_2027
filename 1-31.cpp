#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    Problem: Given an uppercase string and an integer k, you can replace at most k characters. 
    Find the length of the longest substring that can be converted into a string containing only one repeating character.
    
    
    Input: s = "AABABBA", k = 1
    Output: 4 

int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);

    int left = 0;
    int maxFreq = 0;
    int ans = 0;

    for (int right = 0; right < s.size(); right++) {

        freq[s[right] - 'A']++;

        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        int windowLength = right - left + 1;

        if (windowLength - maxFreq > k) {
            freq[s[left] - 'A']--;
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    return ans;
}

int main() {
    cout << characterReplacement("AABABBA", 1);
}


    
    
    
    /*
    
    Given an array of strings, find the longest common prefix shared by all strings.
    
    Input: ["flower", "flow", "flight"]
    Output: "fl"
    
    
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
        return "";

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++) {

        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();

            if (prefix.empty())
                return "";
        }
    }

    return prefix;
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    cout << longestCommonPrefix(strs);
}

*/

    
    
    /*
    
    
    Problem: Determine whether a string is a palindrome after converting uppercase letters to lowercase and removing all non-alphanumeric characters.
    
    Input: s = "A man, a plan, a canal: Panama"
    Output: amanaplanacanalpanama --> yes
    

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {

        while (left < right &&
               !isalnum((unsigned char)s[left])) {
            left++;
        }

        while (left < right &&
               !isalnum((unsigned char)s[right])) {
            right--;
        }

        if (tolower((unsigned char)s[left]) !=
            tolower((unsigned char)s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    cout << boolalpha
         << isPalindrome("A man, a plan, a canal: Panama");
}

*/

    
/*

    Problem: Given an array of length n containing values from 1 to n, find all numbers missing from the array.

Example: [4, 3, 2, 7, 8, 2, 3, 1]
Output: [5,6]


vector<int> findDisappearedNumbers(vector<int>& nums) {
    unordered_set<int> present;

    for (int x : nums)
        present.insert(x);

    vector<int> result;

    for (int i = 1; i <= nums.size(); i++) {
        if (present.find(i) == present.end())
            result.push_back(i);
    }

    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};

    vector<int> ans = findDisappearedNumbers(nums);

    for (int x : ans)
        cout << x << " ";
}

*/
    
/*    

void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (int x : nums)
        cout << x << " ";
}
*/

    /*
    
    Problem: Sort an array containing only 0s, 1s and 2s without using a built-in sorting function.
    
    Example: [2, 0, 2, 1, 1, 0]
    Output: [0,0,1,1,2,2]
    
    
    
    int n = arr.size();
    int c0 = 0, c1 = 0, c2 = 0;
    
       for (int i = 0; i < n; i++) {
        if (arr[i] == 0)
            c0 += 1;
        else if (arr[i] == 1)
            c1 += 1;
        else
            c2 += 1;
    }
    
    int idx = 0;

     for (int i = 0; i < c0; i++)
        arr[idx++] = 0;

    for (int i = 0; i < c1; i++)
        arr[idx++] = 1;

    for (int i = 0; i < c2; i++)
        arr[idx++] = 2;

*/


}
