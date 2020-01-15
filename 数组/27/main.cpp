#include <iostream>
#include <vector>

using namespace std;

// 27. 移除元素
// https://leetcode-cn.com/problems/remove-element/
//
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int i = 0;
        int n = nums.size();

        // 当遇到要删除元素时
        // 将数组最后的元素覆盖到当前位置
        // 每次操作递减n，获得数组最终长度
        while (i < n) {
            if (nums[i] == val) {
                nums[i] = nums[--n];
            } else {
                ++i;
            }
        }
        return n;
    }
};

int main() {

    int arr[] = {0, 1, 2, 2, 3, 0, 4, 2};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    int len = Solution().removeElement(vec, 2);

    cout << len << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}