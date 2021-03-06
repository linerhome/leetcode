# 8. 暴力枚举法
## 8.1 Subsets
描述

Given a set of distinct integers, S, return all possible subsets.

Note:

    Elements in a subset must be in non-descending order.
    The solution set must not contain duplicate subsets.

For example, If S = [1,2,3], a solution is:

``` cpp-objdump
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
```
答案：[C++](code/8.1.hpp) [https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/subsets.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/subsets.html)

## 8.2 Subsets II
描述

Given a collection of integers that might contain duplicates, S, return all possible subsets.

Note:

Elements in a subset must be in non-descending order. The solution set must not contain duplicate subsets. For example, If S = [1,2,2], a solution is:

``` cpp-objdump
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
```

分析

这题有重复元素，但本质上，跟上一题很类似，上一题中元素没有重复，相当于每个元素只能选0或1次，这里扩充到了每个元素可以选0到若干次而已。

答案：[C++](code/8.2.hpp)[https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/subsets-ii.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/subsets-ii.html)

## 8.3 Permutations
描述

Given a collection of numbers, return all possible permutations.

For example, [1,2,3] have the following permutations: [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].

答案：[C++](code/8.3.hpp)[https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/permutations.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/permutations.html)

## 8.4 Permutations II
描述

Given a collection of numbers that might contain duplicates, return all possible unique permutations.

For example, [1,1,2] have the following unique permutations: [1,1,2], [1,2,1], and [2,1,1].
next_permutation()

直接使用std::next_permutation()，代码与上一题相同。
重新实现next_permutation()

重新实现std::next_permutation()，代码与上一题相同。

答案：[C++](code/8.4.hpp)[https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/permutations-ii.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/permutations-ii.html)

## 8.5 Combinations
描述

Given two integers n and k, return all possible combinations of k numbers out of 1 ... n.

For example, If n = 4 and k = 2, a solution is:

``` cpp-objdump
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]
```

答案：[C++](code/8.5.hpp)[https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/combinations.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/combinations.html)

## 8.6 Letter Combinations of a Phone Number
描述

Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below.

Input:Digit string "23"

Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].

Note: Although the above answer is in lexicographical order, your answer could be in any order you want.

答案：[C++](code/8.6.hpp)[https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/letter-combinations-of-a-phone-number.html](https://soulmachine.gitbooks.io/algorithm-essentials/content/cpp/brute-force/letter-combinations-of-a-phone-number.html)
