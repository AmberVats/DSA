#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int findMaxLength(vector<int>& nums){
    unordered_map<int, int> count; 
        int max_length = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); ++i) {
            sum += (nums[i] == 1) ? 1 : -1;

            if (sum == 0)
                max_length = max(max_length, i + 1);
            if (count.find(sum) != count.end())
                max_length = max(max_length, i - count[sum]);
            else
                count[sum] = i; 
        }

        return max_length;
}

int main() {
    vector<int> nums = {0, 1, 0, 0, 1, 1, 0};
    int max_length = findMaxLength(nums);
    cout << "Maximum length of contiguous subarray with equal number of 0s and 1s: " << max_length << endl;
    return 0;
}