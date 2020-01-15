#include <iostream>
#include <vector>

using namespace std;

// 26. 删除排序数组中的重复项
// https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/
//
// 时间复杂度: O(n)
// 空间复杂度: O(1)
class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        // TODO
    }
};

int main() {

    int arr[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

    int len = Solution().removeDuplicates(vec);

    cout << len << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}