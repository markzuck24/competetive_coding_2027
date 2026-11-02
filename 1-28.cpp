#include <bits/stdc++.h>
using namespace std;

int main() {
    
    Problem statement: Given a sorted array and a target value, 
    return the starting and ending positions of that target. 
    If the target does not exist, return [-1, -1]
    
    Input: nums = [5, 7, 7, 8, 8, 10], target = 8
    Output: [3,4]
    
    
vector<int> searchRange(vector<int>& nums, int target) {
    int first = -1, last = -1;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    return {first, last};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};

    vector<int> ans = searchRange(nums, 8);

    cout << ans[0] << " " << ans[1];
}


    
    /*
    
    Problem statement: A sorted array has been rotated at some pivot. Find the index of its smallest element. Assume all elements are distinct.
    
    Input: nums = [4, 5, 6, 7, 0, 1, 2]
    Output: 4
    


int findMinIndex(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    cout << findMinIndex(nums);
}
	
*/
/*
	
	Problem statement: Given a binary array containing only 0s and 1s, delete exactly one element. Return the maximum number of consecutive 1s remaining.
	
	Input: nums = [1, 1, 0, 1]
    Output: 3
    

int longestOnes(vector<int>& nums) {
    int left = 0, zeros = 0, ans = 0;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0)
            zeros++;

        while (zeros > 1) {
            if (nums[left] == 0)
                zeros--;
            left++;
        }

        ans = max(ans, right - left);
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 1, 0, 1};
    cout << longestOnes(nums);
}

*/
    
    
    
	/*
	
	
	Problem statement: Given an integer array, return the third distinct maximum number. If the third distinct maximum does not exist, return the maximum number.
	
	Input: nums = [3, 2, 1]
    Output: 1
    
    Input: nums = [1, 2]
    Output: 2

    Input: nums = [2, 2, 3, 1]
    Output: 1
    

int thirdMax(vector<int>& nums) {
    set<int, greater<int>> s;

    for (int x : nums) {
        s.insert(x);
    }

    if (s.size() < 3)
        return *s.begin();

    auto it = s.begin();
    advance(it, 2);

    return *it;
}

int main() {
    vector<int> nums = {2, 2, 3, 1};
    cout << thirdMax(nums);
}

*/


}
