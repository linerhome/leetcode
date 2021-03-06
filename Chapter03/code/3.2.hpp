#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
#include <cmath>
#include <limits.h>

// Implement strStr()
// 暴力解法，时间复杂度O(N*M)，空间复杂度O(1)
class Solution_1 {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
        if (needle.empty()) return 0;

        const int N = haystack.size() - needle.size() + 1;
        for (int i = 0; i < N; i++) {
            int j = i;
            int k = 0;
            while (j < haystack.size() && k < needle.size() && haystack[j] == needle[k]) {
                j++;
                k++;
            }
            if (k == needle.size()) return i;
        }
        return -1;
    }
};

// Implement strStr()
// KMP，时间复杂度O(N+M)，空间复杂度O(M)
class Solution_2 {
public:
    int strStr(const std::string& haystack, const std::string& needle) {
        return kmp(haystack.c_str(), needle.c_str());
    }
private:
    /*
     * @brief 计算部分匹配表，即next数组.
     *
     * @param[in] pattern 模式串
     * @param[out] next next数组
     * @return 无
     */
    static void compute_prefix(const char *pattern, int next[]) {
        int i;
        int j = -1;
        const int m = strlen(pattern);

        next[0] = j;
        for (i = 1; i < m; i++) {
            while (j > -1 && pattern[j + 1] != pattern[i]) j = next[j];

            if (pattern[i] == pattern[j + 1]) j++;
            next[i] = j;
        }
    }

    /*
     * @brief KMP算法.
     *
     * @param[in] text 文本
     * @param[in] pattern 模式串
     * @return 成功则返回第一次匹配的位置，失败则返回-1
     */
    static int kmp(const char *text, const char *pattern) {
        int i;
        int j = -1;
        const int n = strlen(text);
        const int m = strlen(pattern);
        if (n == 0 && m == 0) return 0; /* "","" */
        if (m == 0) return 0;  /* "a","" */
        int *next = (int*)malloc(sizeof(int) * m);

        compute_prefix(pattern, next);

        for (i = 0; i < n; i++) {
            while (j > -1 && pattern[j + 1] != text[i]) j = next[j];

            if (text[i] == pattern[j + 1]) j++;
            if (j == m - 1) {
                free(next);
                return i-j;
            }
        }

        free(next);
        return -1;
    }
};
