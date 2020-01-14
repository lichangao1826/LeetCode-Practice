#include <iostream>
#include <vector>

using namespace std;

// 283. Move Zeroes
// https://leetcode-cn.com/problems/move-zeroes/
//
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    void moveZeroes(vector<int> &nums) {

        int k = 0;  // 保证 nums 中 [0...k) 的元素均为非 0 元素

        // 遍历第 i 个元素后，保证 [0...i] 中所有非 0 元素
        // 都按照顺序排列在 [0...k) 中
        // 同时, [k...i] 为 0
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                if (i != k) {
                    swap(nums[i], nums[k]);
                }
                ++k;
            }
        }
    }
};

int main() {

    int arr[] = {0, 1, 0, 3, 12};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    Solution().moveZeroes(vec);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}