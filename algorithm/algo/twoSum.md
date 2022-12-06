# 算法练习

## 双指针

### 要求：
>给你一个下标从 1 开始的整数数组 numbers ，该数组已按 非递减顺序排列 ，
请你从数组中找出满足相加之和等于目标数 target 的两个数。
\
        \
        如果设这两个数分别是 numbers[index1] 和 numbers[index2] ，则 1 <= index1 < index2 <= numbers.length 。
\
        \
        以长度为 2 的整数数组 [index1, index2] 的形式返回这两个整数的下标 index1 和 index2。\
        \
        你可以假设每个输入 只对应唯一的答案 ，而且你 不可以 重复使用相同的元素。
\
        你所设计的解决方案必须只使用常量级的额外空间。

- 核心思考点：
    > Left + Right ? Target \
        左右指针相加的和与 Target 的关系。

### 自己的代码(12ms)
```cpp

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size()-1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum < target) {
                left++;
            } else if (sum > target) {
                right--;
            } else {
                return vector<int>{left+1, right+1};
            }
        }
        return vector<int>{-1, -1};
    }
};

```

### 优秀代码实例（4ms）
```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                vector<int> ans;
                ans.push_back(l+1),ans.push_back(r+1);
                return ans;
            }else if(numbers[l]+numbers[r]<target) l++;
            else r--;
        }
        return {};
    }
};
```
