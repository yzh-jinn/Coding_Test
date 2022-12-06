# 算法练习

## 双指针

### 要求：
给你一个下标从 1 开始的整数数组 numbers ，该数组已按 非递减顺序排列 ，
请你从数组中找出满足相加之和等于目标数 target 的两个数。

如果设这两个数分别是 numbers[index1] 和 numbers[index2] ，则 1 <= index1 < index2 <= numbers.length 。

以长度为 2 的整数数组 [index1, index2] 的形式返回这两个整数的下标 index1 和 index2。

你可以假设每个输入 只对应唯一的答案 ，而且你 不可以 重复使用相同的元素。
你所设计的解决方案必须只使用常量级的额外空间。

```
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1; //数组下标从0开始

        /*
            先判断首尾 left, right 的值和目标值 target 的关系。
            1. sum > target ?
                 //将数值范围缩小
                 right(最大) + left(最小) > target
                 left ++  //思考为什么？

            2. sum < target ?
                 //将数值范围扩大
                 right(最大) + left(最小) < target
                 right --
        */
    }
};
```
