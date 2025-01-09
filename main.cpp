#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to find indices of two numbers that add up to the target
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Hashmap to store number and its index
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i]; // Calculate complement
        // Check if complement exists in the hashmap
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // Return indices if found
        }
        numMap[nums[i]] = i; // Store the current number and its index
    }
    return {}; // Return empty vector if no solution found (shouldn't happen)
}

int main() {
    // Example 1
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    // Example 2
    nums = {3, 2, 4};
    target = 6;
    result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    // Example 3
    nums = {3, 3};
    target = 6;
    result = twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
