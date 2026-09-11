# DSA

LeetCode practice solutions in **C++**, synced from accepted submissions with [LeetSync](https://github.com/QasimWani/LeetSync).

There is no application or build system here. Each folder is one problem: the official statement plus, in most cases, a `class Solution` implementation meant for the LeetCode judge.

| Problems | C++ solutions | Statement only | Language |
| --- | --- | --- | --- |
| 47 | 40 | 7 | C++ |

Difficulty (from each problem's LeetCode badge): **14 Easy**, **29 Medium**, **4 Hard**.

## Table of contents

- [What's in this repo](#whats-in-this-repo)
- [Layout](#layout)
- [Problems by topic](#problems-by-topic)
  - [Arrays and hashing](#arrays-and-hashing)
  - [Two pointers and in-place array](#two-pointers-and-in-place-array)
  - [Matrix](#matrix)
  - [Binary search](#binary-search)
  - [Linked lists](#linked-lists)
  - [Math and strings](#math-and-strings)
  - [Dynamic programming](#dynamic-programming)
- [How to use](#how-to-use)
- [Tech stack](#tech-stack)
- [Notes](#notes)

## What's in this repo

- **47 problem folders** named `{id}-{slug}`
- **A `README.md` in every folder** — the LeetCode statement, difficulty badge, examples, and constraints
- **40 C++ solution files** — LeetCode-style `class Solution` (no `main()`, no local test harness)
- **7 folders with a statement only** (no `.cpp` checked in yet)

The numeric prefix is the LeetSync question id. It often matches the public LeetCode number (`1-two-sum`) but not always (`907-koko-eating-bananas` is [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas), public #875). Use the slug and the folder README when looking a problem up.

Current coverage is mostly **arrays**, **matrices**, **binary search** (including search-on-answer), and **singly linked lists**, with a few math / string / DP problems.

## Layout

```text
DSA/
├── README.md                          # this file
├── 1-two-sum/
│   ├── README.md                      # problem statement
│   └── two-sum.cpp                    # solution (when present)
├── 2-add-two-numbers/
│   ├── README.md
│   └── add-two-numbers.cpp
└── …
```

There is no `src/`, shared header, CMake/Make setup, or language other than C++.

## Problems by topic

Legend: **Solution** links to the `.cpp` file. Folders without a solution still have the statement in `README.md`.

### Arrays and hashing

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 1 | [Two Sum](1-two-sum/) | Easy | [two-sum.cpp](1-two-sum/two-sum.cpp) |
| 15 | [3Sum](15-3sum/) | Medium | [3sum.cpp](15-3sum/3sum.cpp) |
| 18 | [4Sum](18-4sum/) | Medium | [4sum.cpp](18-4sum/4sum.cpp) |
| 53 | [Maximum Subarray](53-maximum-subarray/) | Medium | [maximum-subarray.cpp](53-maximum-subarray/maximum-subarray.cpp) |
| 56 | [Merge Intervals](56-merge-intervals/) | Medium | [merge-intervals.cpp](56-merge-intervals/merge-intervals.cpp) |
| 66 | [Plus One](66-plus-one/) | Easy | [plus-one.cpp](66-plus-one/plus-one.cpp) |
| 121 | [Best Time to Buy and Sell Stock](121-best-time-to-buy-and-sell-stock/) | Easy | — |
| 128 | [Longest Consecutive Sequence](128-longest-consecutive-sequence/) | Medium | [longest-consecutive-sequence.cpp](128-longest-consecutive-sequence/longest-consecutive-sequence.cpp) |
| 229 | [Majority Element II](229-majority-element-ii/) | Medium | [majority-element-ii.cpp](229-majority-element-ii/majority-element-ii.cpp) |
| 560 | [Subarray Sum Equals K](560-subarray-sum-equals-k/) | Medium | [subarray-sum-equals-k.cpp](560-subarray-sum-equals-k/subarray-sum-equals-k.cpp) |

### Two pointers and in-place array

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 26 | [Remove Duplicates from Sorted Array](26-remove-duplicates-from-sorted-array/) | Easy | [remove-duplicates-from-sorted-array.cpp](26-remove-duplicates-from-sorted-array/remove-duplicates-from-sorted-array.cpp) |
| 27 | [Remove Element](27-remove-element/) | Easy | [remove-element.cpp](27-remove-element/remove-element.cpp) |
| 31 | [Next Permutation](31-next-permutation/) | Medium | [next-permutation.cpp](31-next-permutation/next-permutation.cpp) |
| 75 | [Sort Colors](75-sort-colors/) | Medium | [sort-colors.cpp](75-sort-colors/sort-colors.cpp) |
| 88 | [Merge Sorted Array](88-merge-sorted-array/) | Easy | [merge-sorted-array.cpp](88-merge-sorted-array/merge-sorted-array.cpp) |
| 189 | [Rotate Array](189-rotate-array/) | Medium | [rotate-array.cpp](189-rotate-array/rotate-array.cpp) |
| 283 | [Move Zeroes](283-move-zeroes/) | Easy | [move-zeroes.cpp](283-move-zeroes/move-zeroes.cpp) |
| 1878 | [Check if Array Is Sorted and Rotated](1878-check-if-array-is-sorted-and-rotated/) | Easy | [check-if-array-is-sorted-and-rotated.cpp](1878-check-if-array-is-sorted-and-rotated/check-if-array-is-sorted-and-rotated.cpp) |

### Matrix

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 48 | [Rotate Image](48-rotate-image/) | Medium | — |
| 54 | [Spiral Matrix](54-spiral-matrix/) | Medium | [spiral-matrix.cpp](54-spiral-matrix/spiral-matrix.cpp) |
| 73 | [Set Matrix Zeroes](73-set-matrix-zeroes/) | Medium | [set-matrix-zeroes.cpp](73-set-matrix-zeroes/set-matrix-zeroes.cpp) |
| 74 | [Search a 2D Matrix](74-search-a-2d-matrix/) | Medium | [search-a-2d-matrix.cpp](74-search-a-2d-matrix/search-a-2d-matrix.cpp) |
| 2047 | [Find a Peak Element II](2047-find-a-peak-element-ii/) | Medium | [find-a-peak-element-ii.cpp](2047-find-a-peak-element-ii/find-a-peak-element-ii.cpp) |

### Binary search

Includes classical binary search and binary search on a monotonic answer.

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 4 | [Median of Two Sorted Arrays](4-median-of-two-sorted-arrays/) | Hard | [median-of-two-sorted-arrays.cpp](4-median-of-two-sorted-arrays/median-of-two-sorted-arrays.cpp) |
| 34 | [Find First and Last Position of Element in Sorted Array](34-find-first-and-last-position-of-element-in-sorted-array/) | Medium | [find-first-and-last-position-of-element-in-sorted-array.cpp](34-find-first-and-last-position-of-element-in-sorted-array/find-first-and-last-position-of-element-in-sorted-array.cpp) |
| 162 | [Find Peak Element](162-find-peak-element/) | Medium | [find-peak-element.cpp](162-find-peak-element/find-peak-element.cpp) |
| 410 | [Split Array Largest Sum](410-split-array-largest-sum/) | Hard | — |
| 540 | [Single Element in a Sorted Array](540-single-element-in-a-sorted-array/) | Medium | [single-element-in-a-sorted-array.cpp](540-single-element-in-a-sorted-array/single-element-in-a-sorted-array.cpp) |
| 907 | [Koko Eating Bananas](907-koko-eating-bananas/) | Medium | [koko-eating-bananas.cpp](907-koko-eating-bananas/koko-eating-bananas.cpp) |
| 1408 | [Find the Smallest Divisor Given a Threshold](1408-find-the-smallest-divisor-given-a-threshold/) | Medium | [find-the-smallest-divisor-given-a-threshold.cpp](1408-find-the-smallest-divisor-given-a-threshold/find-the-smallest-divisor-given-a-threshold.cpp) |
| 1605 | [Minimum Number of Days to Make m Bouquets](1605-minimum-number-of-days-to-make-m-bouquets/) | Medium | [minimum-number-of-days-to-make-m-bouquets.cpp](1605-minimum-number-of-days-to-make-m-bouquets/minimum-number-of-days-to-make-m-bouquets.cpp) |
| 1646 | [Kth Missing Positive Number](1646-kth-missing-positive-number/) | Easy | [kth-missing-positive-number.cpp](1646-kth-missing-positive-number/kth-missing-positive-number.cpp) |

### Linked lists

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 2 | [Add Two Numbers](2-add-two-numbers/) | Medium | [add-two-numbers.cpp](2-add-two-numbers/add-two-numbers.cpp) |
| 61 | [Rotate List](61-rotate-list/) | Medium | [rotate-list.cpp](61-rotate-list/rotate-list.cpp) |
| 141 | [Linked List Cycle](141-linked-list-cycle/) | Easy | — |
| 142 | [Linked List Cycle II](142-linked-list-cycle-ii/) | Medium | [linked-list-cycle-ii.cpp](142-linked-list-cycle-ii/linked-list-cycle-ii.cpp) |
| 148 | [Sort List](148-sort-list/) | Medium | — |
| 206 | [Reverse Linked List](206-reverse-linked-list/) | Easy | — |
| 234 | [Palindrome Linked List](234-palindrome-linked-list/) | Easy | [palindrome-linked-list.cpp](234-palindrome-linked-list/palindrome-linked-list.cpp) |
| 237 | [Delete Node in a Linked List](237-delete-node-in-a-linked-list/) | Medium | [delete-node-in-a-linked-list.cpp](237-delete-node-in-a-linked-list/delete-node-in-a-linked-list.cpp) |
| 908 | [Middle of the Linked List](908-middle-of-the-linked-list/) | Easy | [middle-of-the-linked-list.cpp](908-middle-of-the-linked-list/middle-of-the-linked-list.cpp) |

### Math and strings

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 8 | [String to Integer (atoi)](8-string-to-integer-atoi/) | Medium | [string-to-integer-atoi.cpp](8-string-to-integer-atoi/string-to-integer-atoi.cpp) |
| 50 | [Pow(x, n)](50-powx-n/) | Medium | [powx-n.cpp](50-powx-n/powx-n.cpp) |
| 2050 | [Count Good Numbers](2050-count-good-numbers/) | Medium | [count-good-numbers.cpp](2050-count-good-numbers/count-good-numbers.cpp) |
| 4245 | [Count Commas in Range](4245-count-commas-in-range/) | Easy | — |

### Dynamic programming

| # | Problem | Difficulty | Solution |
| --- | --- | --- | --- |
| 1758 | [Distribute Repeating Integers](1758-distribute-repeating-integers/) | Hard | [distribute-repeating-integers.cpp](1758-distribute-repeating-integers/distribute-repeating-integers.cpp) |
| 3460 | [Count the Number of Inversions](3460-count-the-number-of-inversions/) | Hard | [count-the-number-of-inversions.cpp](3460-count-the-number-of-inversions/count-the-number-of-inversions.cpp) |

## How to use

These files are **judge submissions**, not standalone programs. They expect LeetCode's headers and types (`vector`, `ListNode`, `INT_MAX`, and so on).

1. Open a problem folder.
2. Read `README.md` for the statement, examples, and constraints.
3. Read the `.cpp` file (if present) for the submitted solution.

To re-run a solution on LeetCode, paste the `class Solution` into the corresponding problem. There is nothing to `make` or `npm start` in this repository.

If you wrap a solution locally, you will need your own `main()`, includes, and (for list problems) a `ListNode` definition.

## Tech stack

| Piece | Detail |
| --- | --- |
| Language | C++ (LeetCode default dialect; STL containers and algorithms) |
| Problem source | [LeetCode](https://leetcode.com/) |
| Sync | [LeetSync](https://github.com/QasimWani/LeetSync) (commit messages include judge time / memory) |
| Build / tests | None in-repo |

Techniques that show up in the checked-in code include hash maps, two pointers, prefix sums, Kadane, interval merge, Dutch national flag, Floyd cycle detection, binary search / binary search on answer, binary exponentiation, and bitmask DP.

## Notes

- Folder READMEs are the LeetCode problem text (HTML), not write-ups of the approach.
- A few problems have a statement and no `.cpp` in the tree right now: Best Time to Buy and Sell Stock, Rotate Image, Linked List Cycle, Sort List, Reverse Linked List, Split Array Largest Sum, and Count Commas in Range.
- Problem statements and examples belong to LeetCode.
