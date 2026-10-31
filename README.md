# LeetCode Patterns in C++

A structured collection of interview-focused LeetCode solutions in modern C++17.
Every solution is self-contained and follows the class/method signature expected by
LeetCode.

## Repository structure

```text
arrays/
  001_two_sum.cpp
  002_best_time_to_buy_and_sell_stock.cpp
  ...
strings/
  001_valid_anagram.cpp
  002_valid_palindrome.cpp
  ...
```

## Arrays

| # | Problem | Main pattern |
|---|---|---|
| 001 | [Two Sum](arrays/001_two_sum.cpp) | Hash map |
| 002 | [Best Time to Buy and Sell Stock](arrays/002_best_time_to_buy_and_sell_stock.cpp) | One-pass minimum |
| 003 | [Contains Duplicate](arrays/003_contains_duplicate.cpp) | Hash set |
| 004 | [Product of Array Except Self](arrays/004_product_of_array_except_self.cpp) | Prefix/suffix products |
| 005 | [Maximum Subarray](arrays/005_maximum_subarray.cpp) | Kadane's algorithm |
| 006 | [Merge Sorted Array](arrays/006_merge_sorted_array.cpp) | Reverse two pointers |
| 007 | [3Sum](arrays/007_three_sum.cpp) | Sorting + two pointers |
| 008 | [Container With Most Water](arrays/008_container_with_most_water.cpp) | Greedy two pointers |
| 009 | [Binary Search](arrays/009_binary_search.cpp) | Search on sorted data |
| 010 | [Search in Rotated Sorted Array](arrays/010_search_rotated_sorted_array.cpp) | Modified binary search |
| 011 | [Longest Consecutive Sequence](arrays/011_longest_consecutive_sequence.cpp) | Hash set |
| 012 | [Subarray Sum Equals K](arrays/012_subarray_sum_equals_k.cpp) | Prefix sum frequencies |

## Strings

| # | Problem | Main pattern |
|---|---|---|
| 001 | [Valid Anagram](strings/001_valid_anagram.cpp) | Frequency counting |
| 002 | [Valid Palindrome](strings/002_valid_palindrome.cpp) | Two pointers |
| 003 | [Longest Common Prefix](strings/003_longest_common_prefix.cpp) | Prefix shrinking |
| 004 | [Longest Substring Without Repeating Characters](strings/004_longest_substring_without_repeating.cpp) | Sliding window |
| 005 | [Group Anagrams](strings/005_group_anagrams.cpp) | Canonical key |
| 006 | [Longest Palindromic Substring](strings/006_longest_palindromic_substring.cpp) | Expand around center |
| 007 | [Valid Parentheses](strings/007_valid_parentheses.cpp) | Stack |
| 008 | [Minimum Window Substring](strings/008_minimum_window_substring.cpp) | Required-count window |
| 009 | [Encode and Decode Strings](strings/009_encode_decode_strings.cpp) | Length-prefix encoding |
| 010 | [Word Break](strings/010_word_break.cpp) | Dynamic programming |
| 011 | [Palindrome Partitioning](strings/011_palindrome_partitioning.cpp) | Backtracking |
| 012 | [Implement strStr](strings/012_implement_strstr.cpp) | KMP |

## How to use

1. Pick a problem from the tables above.
2. Read the pattern and complexity comment at the top of the file.
3. Paste the `Solution` class into LeetCode, or compile locally with a small
   driver program.
4. Try to solve the problem again without looking at the implementation.

## Recommended progression

1. Hashing: Arrays 001-004, Strings 001 and 005.
2. Two pointers and sliding window: Arrays 006-008, Strings 002, 004 and 008.
3. Search and prefix techniques: Arrays 009-012.
4. Stack, dynamic programming and backtracking: Strings 007, 010 and 011.
5. String algorithms: Strings 006, 009 and 012.

## Local compilation

Solutions contain a LeetCode `Solution` class and do not include `main()`. To
compile one locally, add a temporary driver or use the LeetCode editor. The
solutions target **C++17** and use only the standard library.

## License

The solutions are provided for learning and interview preparation. Problem
statements are summarized, not reproduced verbatim.
# leetcode-cpp-patterns
