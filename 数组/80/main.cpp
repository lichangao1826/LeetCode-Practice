#include <iostream>
#include <vector>

using namespace std;

// 80. 删除排序数组中的重复项 II
// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array-ii/
//
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;

        // 保证第 i 个位置为下次要被覆盖的位置
        // 最长保留两个重复元素
        // 只需比较 nums[i] 和 nums[i - 2]
        for (int num: nums) {
            if (i < 2 || num > nums[i - 2]) {
                nums[i++] = num;
            }
        }
        return i;
    }
};

int main() {

    int arr[] = {0, 0, 1, 1, 1, 1, 2, 3, 3};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    int len = Solution().removeDuplicates(vec);

    cout << len << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}