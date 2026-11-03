#include <bits/stdc++.h>
using namespace std;

int main() {
    
    
    HW1: 
    
    
    Problem: Sort an array containing only 0s, 1s and 2s without using a built-in sorting function.

    Example: [2, 0, 2, 1, 1, 0]
    Output: [0,0,1,1,2,2]



    HW2:
    
    Problem: Merge two sorted arrays into the first array. The first array has enough empty space at the end.
    
    nums1 = [1, 2, 3, 0, 0, 0]
    nums2 = [2, 5, 6]
    Output = [1, 2, 2, 3, 5, 6]
    
    /*
    
    Find the minimum element in a rotated sorted array containing distinct elements.

    Example: [3, 4, 5, 1, 2] → 1
    

int findMin(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }

    return nums[left];
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    cout << findMin(nums);
}
*/

    
    /*
    
    Find the contiguous subarray with the largest sum.

    Example: [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    
    Output: 6
    
    

    int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << maxSubArray(nums);
}
*/

    /*
    
    Return an array where each position contains the product of every other element. Do not use division.

    Example: [1, 2, 3, 4] → [24, 12, 8, 6]
    

    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    int leftProduct = 1;

    for (int i = 0; i < n; i++) {
        result[i] = leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;

    for (int i = n - 1; i >= 0; i--) {
        result[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return result;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = productExceptSelf(nums);

    for (int x : ans)
        cout << x << " ";
}
*/



/*

	Given an array of integers and a target, return the indices of two numbers whose sum equals the target.
	
	Input: nums = [2, 7, 11, 15], target = 9
    Output: [0,1]


    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }

        seen[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};

    vector<int> ans = twoSum(nums, 9);

    cout << ans[0] << " " << ans[1];
}
*/



}
