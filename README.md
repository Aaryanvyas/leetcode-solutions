# 🌲 LeetCode Solutions

A personal, organized log of LeetCode solutions in C++ and SQL with day-wise progress, approach notes, and patterns.

---

## 📊 Summary

- 🟢 **Easy:** 49
- 🟡 **Medium:** 30
- 🔴 **Hard:** 4
- **Total Solved:** 83 (78 C++, 5 SQL)

---

## 🎯 Currently Doing

- **Current Topic:** Sliding Window & Two Pointers
- **Latest Solved:** [3. Longest Substring Without Repeating Characters](./0003-longest-substring-without-repeating-characters) (🟡 Medium)
- **Up Next:**
  - [ ] [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)
  - [ ] [76. Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
  - [ ] [209. Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)
  - [ ] [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water/)
- **Recently Completed:** Monotonic Stacks (Trapping Rain Water, Daily Temperatures, Stock Span, Asteroids, Remove K Digits) & Binary Trees / BSTs.

---

## 📅 Day-Wise Problem Log

| # | Day | Date | Problem | Difficulty | Topic | Pattern | Solution |
| :-: | :--- | :--- | :--- | :---: | :--- | :--- | :---: |
| 01 | **Day 01** | 2026-06-22 | [1189. Maximum Number of Balloons](./1189-maximum-number-of-balloons) | 🟢 Easy | Strings | Frequency Count Bottleneck | [C++](./1189-maximum-number-of-balloons/1189-maximum-number-of-balloons.cpp) |
| 02 | **Day 02** | 2026-06-25 | [94. Binary Tree Inorder Traversal](./0094-binary-tree-inorder-traversal) | 🟢 Easy | Binary Tree | DFS: Left -> Root -> Right | [C++](./0094-binary-tree-inorder-traversal/0094-binary-tree-inorder-traversal.cpp) |
| 03 | **Day 02** | 2026-06-25 | [144. Binary Tree Preorder Traversal](./0144-binary-tree-preorder-traversal) | 🟢 Easy | Binary Tree | DFS: Root -> Left -> Right | [C++](./0144-binary-tree-preorder-traversal/0144-binary-tree-preorder-traversal.cpp) |
| 04 | **Day 02** | 2026-06-25 | [145. Binary Tree Postorder Traversal](./0145-binary-tree-postorder-traversal) | 🟢 Easy | Binary Tree | DFS: Left -> Right -> Root | [C++](./0145-binary-tree-postorder-traversal/0145-binary-tree-postorder-traversal.cpp) |
| 05 | **Day 03** | 2026-06-26 | [102. Binary Tree Level Order Traversal](./0102-binary-tree-level-order-traversal) | 🟡 Med | Binary Tree | BFS: Queue Level Snapshot | [C++](./0102-binary-tree-level-order-traversal/0102-binary-tree-level-order-traversal.cpp) |
| 06 | **Day 04** | 2026-06-27 | [104. Maximum Depth of Binary Tree](./0104-maximum-depth-of-binary-tree) | 🟢 Easy | Binary Tree | Divide & Conquer Depth | [C++](./0104-maximum-depth-of-binary-tree/0104-maximum-depth-of-binary-tree.cpp) |
| 07 | **Day 05** | 2026-06-28 | [110. Balanced Binary Tree](./0110-balanced-binary-tree) | 🟢 Easy | Binary Tree | Bottom-Up Height Pruning (`-1`) | [C++](./0110-balanced-binary-tree/0110-balanced-binary-tree.cpp) |
| 08 | **Day 06** | 2026-06-29 | [543. Diameter of Binary Tree](./0543-diameter-of-binary-tree) | 🟢 Easy | Binary Tree | Tree DP: Apex Longest Path | [C++](./0543-diameter-of-binary-tree/0543-diameter-of-binary-tree.cpp) |
| 09 | **Day 07** | 2026-06-30 | [1358. Number of Substrings Containing All Three Characters](./1358-number-of-substrings-containing-all-three-characters) | 🟡 Med | Sliding Window | Dynamic Window (Suffix Math `+n-right`) | [C++](./1358-number-of-substrings-containing-all-three-characters/1358-number-of-substrings-containing-all-three-characters.cpp) |
| 10 | **Day 08** | 2026-07-01 | [124. Binary Tree Maximum Path Sum](./0124-binary-tree-maximum-path-sum) | 🔴 Hard | Binary Tree | Tree DP: Max Single Branch Gain | [C++](./0124-binary-tree-maximum-path-sum/0124-binary-tree-maximum-path-sum.cpp) |
| 11 | **Day 09** | 2026-07-02 | [100. Same Tree](./0100-same-tree) | 🟢 Easy | Binary Tree | Dual-Tree Simultaneous DFS | [C++](./0100-same-tree/0100-same-tree.cpp) |
| 12 | **Day 10** | 2026-07-03 | [103. Binary Tree Zigzag Level Order Traversal](./0103-binary-tree-zigzag-level-order-traversal) | 🟡 Med | Binary Tree | BFS: Alternating Direction Indexing | [C++](./0103-binary-tree-zigzag-level-order-traversal/0103-binary-tree-zigzag-level-order-traversal.cpp) |
| 13 | **Day 11** | 2026-07-04 | [101. Symmetric Tree](./0101-symmetric-tree) | 🟢 Easy | Binary Tree | Dual-Tree Simultaneous DFS | [C++](./0101-symmetric-tree/0101-symmetric-tree.cpp) |
| 14 | **Day 12** | 2026-07-05 | [112. Path Sum](./0112-path-sum) | 🟢 Easy | Binary Tree | DFS Target Sum Subtraction | [C++](./0112-path-sum/0112-path-sum.cpp) |
| 15 | **Day 12** | 2026-07-05 | [199. Binary Tree Right Side View](./0199-binary-tree-right-side-view) | 🟡 Med | Binary Tree | Reverse Preorder DFS / BFS | [C++](./0199-binary-tree-right-side-view/0199-binary-tree-right-side-view.cpp) |
| 16 | **Day 13** | 2026-07-06 | [257. Binary Tree Paths](./0257-binary-tree-paths) | 🟢 Easy | Binary Tree | Root-to-Leaf Path Traversal | [C++](./0257-binary-tree-paths/0257-binary-tree-paths.cpp) |
| 17 | **Day 14** | 2026-07-08 | [108. Convert Sorted Array to Binary Search Tree](./0108-convert-sorted-array-to-binary-search-tree) | 🟢 Easy | BST | Divide & Conquer Midpoint | [C++](./0108-convert-sorted-array-to-binary-search-tree/0108-convert-sorted-array-to-binary-search-tree.cpp) |
| 18 | **Day 15** | 2026-07-10 | [3532. Path Existence Queries in a Graph I](./3532-path-existence-queries-in-a-graph-i) | 🟡 Med | Graphs | BFS / DFS Reachability | [C++](./3532-path-existence-queries-in-a-graph-i/3532-path-existence-queries-in-a-graph-i.cpp) |
| 19 | **Day 16** | 2026-07-11 | [1967. Number of Strings That Appear As Substrings in Word](./1967-number-of-strings-that-appear-as-substrings-in-word) | 🟢 Easy | Strings | Substring Search (`find`) | [C++](./1967-number-of-strings-that-appear-as-substrings-in-word/1967-number-of-strings-that-appear-as-substrings-in-word.cpp) |
| 20 | **Day 17** | 2026-07-12 | [1331. Rank Transform of an Array](./1331-rank-transform-of-an-array) | 🟢 Easy | Arrays | Sorting + Rank Map | [C++](./1331-rank-transform-of-an-array/1331-rank-transform-of-an-array.cpp) |
| 21 | **Day 18** | 2026-07-13 | [1291. Sequential Digits](./1291-sequential-digits) | 🟡 Med | Math | Sequential Number Generation | [C++](./1291-sequential-digits/1291-sequential-digits.cpp) |
| 22 | **Day 19** | 2026-07-14 | [349. Intersection of Two Arrays](./0349-intersection-of-two-arrays) | 🟢 Easy | Arrays | Hash Set Lookup | [C++](./0349-intersection-of-two-arrays/0349-intersection-of-two-arrays.cpp) |
| 23 | **Day 20** | 2026-07-15 | [3658. Gcd of Odd and Even Sums](./3658-gcd-of-odd-and-even-sums) | 🟢 Easy | Math | Euclidean Algorithm | [C++](./3658-gcd-of-odd-and-even-sums/3658-gcd-of-odd-and-even-sums.cpp) |
| 24 | **Day 21** | 2026-07-16 | [987. Vertical Order Traversal of a Binary Tree](./0987-vertical-order-traversal-of-a-binary-tree) | 🔴 Hard | Binary Tree | BFS + Coordinate Map | [C++](./0987-vertical-order-traversal-of-a-binary-tree/0987-vertical-order-traversal-of-a-binary-tree.cpp) |
| 25 | **Day 22** | 2026-07-18 | [113. Path Sum II](./0113-path-sum-ii) | 🟡 Med | Binary Tree | Backtracking Path Vector | [C++](./0113-path-sum-ii/0113-path-sum-ii.cpp) |
| 26 | **Day 22** | 2026-07-18 | [1979. Find Greatest Common Divisor of Array](./1979-find-greatest-common-divisor-of-array) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./1979-find-greatest-common-divisor-of-array/1979-find-greatest-common-divisor-of-array.cpp) |
| 27 | **Day 23** | 2026-07-19 | [129. Sum Root to Leaf Numbers](./0129-sum-root-to-leaf-numbers) | 🟡 Med | Binary Tree | DFS Prefix Value Accumulation | [C++](./0129-sum-root-to-leaf-numbers/0129-sum-root-to-leaf-numbers.cpp) |
| 28 | **Day 24** | 2026-07-20 | [236. Lowest Common Ancestor of a Binary Tree](./0236-lowest-common-ancestor-of-a-binary-tree) | 🟡 Med | Binary Tree | Divide & Conquer Search | [C++](./0236-lowest-common-ancestor-of-a-binary-tree/0236-lowest-common-ancestor-of-a-binary-tree.cpp) |
| 29 | **Day 24** | 2026-07-20 | [1260. Shift 2D Grid](./1260-shift-2d-grid) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./1260-shift-2d-grid/1260-shift-2d-grid.cpp) |
| 30 | **Day 25** | 2026-07-22 | [662. Maximum Width of Binary Tree](./0662-maximum-width-of-binary-tree) | 🟡 Med | Binary Tree | BFS Level Indexing | [C++](./0662-maximum-width-of-binary-tree/0662-maximum-width-of-binary-tree.cpp) |
| 31 | **Day 25** | 2026-07-22 | [863. All Nodes Distance K in Binary Tree](./0863-all-nodes-distance-k-in-binary-tree) | 🟡 Med | Binary Tree | Parent Hash Map + BFS | [C++](./0863-all-nodes-distance-k-in-binary-tree/0863-all-nodes-distance-k-in-binary-tree.cpp) |
| 32 | **Day 26** | 2026-07-24 | [105. Construct Binary Tree from Preorder and Inorder Traversal](./0105-construct-binary-tree-from-preorder-and-inorder-traversal) | 🟡 Med | Binary Tree | DFS: Left -> Root -> Right | [C++](./0105-construct-binary-tree-from-preorder-and-inorder-traversal/0105-construct-binary-tree-from-preorder-and-inorder-traversal.cpp) |
| 33 | **Day 26** | 2026-07-24 | [222. Count Complete Tree Nodes](./0222-count-complete-tree-nodes) | 🟡 Med | Binary Tree | Binary Search on Heights | [C++](./0222-count-complete-tree-nodes/0222-count-complete-tree-nodes.cpp) |
| 34 | **Day 27** | 2026-07-25 | [3536. Maximum Product of Two Digits](./3536-maximum-product-of-two-digits) | 🟢 Easy | Math | Extrema Analysis | [C++](./3536-maximum-product-of-two-digits/3536-maximum-product-of-two-digits.cpp) |
| 35 | **Day 28** | 2026-07-26 | [628. Maximum Product of Three Numbers](./0628-maximum-product-of-three-numbers) | 🟢 Easy | Math | Extrema Analysis | [C++](./0628-maximum-product-of-three-numbers/0628-maximum-product-of-three-numbers.cpp) |
| 36 | **Day 29** | 2026-07-27 | [1464. Maximum Product of Two Elements in an Array](./1464-maximum-product-of-two-elements-in-an-array) | 🟢 Easy | Math | Extrema Analysis | [C++](./1464-maximum-product-of-two-elements-in-an-array/1464-maximum-product-of-two-elements-in-an-array.cpp) |
| 37 | **Day 30** | 2026-07-28 | [297. Serialize and Deserialize Binary Tree](./0297-serialize-and-deserialize-binary-tree) | 🔴 Hard | Binary Tree | BFS Level Serialization | [C++](./0297-serialize-and-deserialize-binary-tree/0297-serialize-and-deserialize-binary-tree.cpp) |
| 38 | **Day 31** | 2026-07-30 | [114. Flatten Binary Tree to Linked List](./0114-flatten-binary-tree-to-linked-list) | 🟡 Med | Binary Tree | Reverse Postorder / Right First | [C++](./0114-flatten-binary-tree-to-linked-list/0114-flatten-binary-tree-to-linked-list.cpp) |
| 39 | **Day 32** | 2026-07-31 | [700. Search in a Binary Search Tree](./0700-search-in-a-binary-search-tree) | 🟢 Easy | BST | BST Binary Search | [C++](./0700-search-in-a-binary-search-tree/0700-search-in-a-binary-search-tree.cpp) |
| 40 | **Day 33** | 2026-08-01 | [701. Insert Into a Binary Search Tree](./0701-insert-into-a-binary-search-tree) | 🟡 Med | BST | BST Leaf Insertion | [C++](./0701-insert-into-a-binary-search-tree/0701-insert-into-a-binary-search-tree.cpp) |
| 41 | **Day 34** | 2026-08-02 | [450. Delete Node in a Bst](./0450-delete-node-in-a-bst) | 🟡 Med | BST | Inorder Successor Swap | [C++](./0450-delete-node-in-a-bst/0450-delete-node-in-a-bst.cpp) |
| 42 | **Day 35** | 2026-08-03 | [230. Kth Smallest Element in a Bst](./0230-kth-smallest-element-in-a-bst) | 🟡 Med | BST | Inorder Counting | [C++](./0230-kth-smallest-element-in-a-bst/0230-kth-smallest-element-in-a-bst.cpp) |
| 43 | **Day 36** | 2026-08-04 | [98. Validate Binary Search Tree](./0098-validate-binary-search-tree) | 🟡 Med | BST | Inorder Range Validation | [C++](./0098-validate-binary-search-tree/0098-validate-binary-search-tree.cpp) |
| 44 | **Day 37** | 2026-08-05 | [235. Lowest Common Ancestor of a Binary Search Tree](./0235-lowest-common-ancestor-of-a-binary-search-tree) | 🟡 Med | BST | BST Split Point | [C++](./0235-lowest-common-ancestor-of-a-binary-search-tree/0235-lowest-common-ancestor-of-a-binary-search-tree.cpp) |
| 45 | **Day 38** | 2026-08-06 | [3345. Smallest Divisible Digit Product I](./3345-smallest-divisible-digit-product-i) | 🟢 Easy | Math | Extrema Analysis | [C++](./3345-smallest-divisible-digit-product-i/3345-smallest-divisible-digit-product-i.cpp) |
| 46 | **Day 39** | 2026-08-07 | [226. Invert Binary Tree](./0226-invert-binary-tree) | 🟢 Easy | Binary Tree | Swap Children Recursively | [C++](./0226-invert-binary-tree/0226-invert-binary-tree.cpp) |
| 47 | **Day 40** | 2026-08-08 | [83. Remove Duplicates from Sorted List](./0083-remove-duplicates-from-sorted-list) | 🟢 Easy | Linked List | Pointer Traversal | [C++](./0083-remove-duplicates-from-sorted-list/0083-remove-duplicates-from-sorted-list.cpp) |
| 48 | **Day 41** | 2026-08-09 | [1480. Running Sum of 1D Array](./1480-running-sum-of-1d-array) | 🟢 Easy | Arrays | Prefix Sum In-Place | [C++](./1480-running-sum-of-1d-array/1480-running-sum-of-1d-array.cpp) |
| 49 | **Day 42** | 2026-08-14 | [3090. Maximum Length Substring with Two Occurrences](./3090-maximum-length-substring-with-two-occurrences) | 🟢 Easy | Sliding Window | Dynamic Window (Freq Count <= 2) | [C++](./3090-maximum-length-substring-with-two-occurrences/3090-maximum-length-substring-with-two-occurrences.cpp) |
| 50 | **Day 43** | 2026-08-15 | [1008. Construct Binary Search Tree from Preorder Traversal](./1008-construct-binary-search-tree-from-preorder-traversal) | 🟡 Med | BST | Upper Bound Recursion | [C++](./1008-construct-binary-search-tree-from-preorder-traversal/1008-construct-binary-search-tree-from-preorder-traversal.cpp) |
| 51 | **Day 44** | 2026-08-16 | [173. Binary Search Tree Iterator](./0173-binary-search-tree-iterator) | 🟡 Med | BST | Controlled Stack Inorder | [C++](./0173-binary-search-tree-iterator/0173-binary-search-tree-iterator.cpp) |
| 52 | **Day 45** | 2026-08-18 | [3471. Find The Largest Almost Missing Integer](./3471-find-the-largest-almost-missing-integer) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3471-find-the-largest-almost-missing-integer/3471-find-the-largest-almost-missing-integer.cpp) |
| 53 | **Day 46** | 2026-08-19 | [653. Two Sum IV Input is a Bst](./0653-two-sum-iv-input-is-a-bst) | 🟢 Easy | BST | Inorder Two Pointers / Hash Set | [C++](./0653-two-sum-iv-input-is-a-bst/0653-two-sum-iv-input-is-a-bst.cpp) |
| 54 | **Day 47** | 2026-08-21 | [496. Next Greater Element I](./0496-next-greater-element-i) | 🟢 Easy | Monotonic Stack | Decreasing Stack (Next Greater) | [C++](./0496-next-greater-element-i/0496-next-greater-element-i.cpp) |
| 55 | **Day 48** | 2026-08-22 | [3622. Check Divisibility By Digit Sum and Product](./3622-check-divisibility-by-digit-sum-and-product) | 🟢 Easy | Math | Extrema Analysis | [C++](./3622-check-divisibility-by-digit-sum-and-product/3622-check-divisibility-by-digit-sum-and-product.cpp) |
| 56 | **Day 49** | 2026-08-23 | [225. Implement Stack Using Queues](./0225-implement-stack-using-queues) | 🟢 Easy | Queue | Queue Simulation | [C++](./0225-implement-stack-using-queues/0225-implement-stack-using-queues.cpp) |
| 57 | **Day 49** | 2026-08-23 | [232. Implement Queue Using Stacks](./0232-implement-queue-using-stacks) | 🟢 Easy | Stack | Two Stacks Simulation | [C++](./0232-implement-queue-using-stacks/0232-implement-queue-using-stacks.cpp) |
| 58 | **Day 50** | 2026-08-24 | [20. Valid Parentheses](./0020-valid-parentheses) | 🟢 Easy | Stack | Bracket Matching | [C++](./0020-valid-parentheses/0020-valid-parentheses.cpp) |
| 59 | **Day 51** | 2026-08-25 | [3718. Smallest Missing Multiple of K](./3718-smallest-missing-multiple-of-k) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3718-smallest-missing-multiple-of-k/3718-smallest-missing-multiple-of-k.cpp) |
| 60 | **Day 52** | 2026-08-29 | [111. Minimum Depth of Binary Tree](./0111-minimum-depth-of-binary-tree) | 🟢 Easy | Binary Tree | Divide & Conquer Depth | [C++](./0111-minimum-depth-of-binary-tree/0111-minimum-depth-of-binary-tree.cpp) |
| 61 | **Day 53** | 2026-08-31 | [155. Min Stack](./0155-min-stack) | 🟡 Med | Stack | Auxiliary Min Stack | [C++](./0155-min-stack/0155-min-stack.cpp) |
| 62 | **Day 54** | 2026-09-03 | [503. Next Greater Element II](./0503-next-greater-element-ii) | 🟡 Med | Monotonic Stack | Circular Array (2N Modulo Stack) | [C++](./0503-next-greater-element-ii/0503-next-greater-element-ii.cpp) |
| 63 | **Day 54** | 2026-09-03 | [3875. Construct Uniform Parity Array I](./3875-construct-uniform-parity-array-i) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3875-construct-uniform-parity-array-i/3875-construct-uniform-parity-array-i.cpp) |
| 64 | **Day 55** | 2026-09-04 | [42. Trapping Rain Water](./0042-trapping-rain-water) | 🔴 Hard | Two Pointers | Two Pointers (Left/Right Max Boundary) | [C++](./0042-trapping-rain-water/0042-trapping-rain-water.cpp) |
| 65 | **Day 55** | 2026-09-04 | [3903. Smallest Stable Index I](./3903-smallest-stable-index-i) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3903-smallest-stable-index-i/3903-smallest-stable-index-i.cpp) |
| 66 | **Day 56** | 2026-09-06 | [3069. Distribute Elements Into Two Arrays I](./3069-distribute-elements-into-two-arrays-i) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3069-distribute-elements-into-two-arrays-i/3069-distribute-elements-into-two-arrays-i.cpp) |
| 67 | **Day 57** | 2026-09-08 | [3870. Count Commas in Range](./3870-count-commas-in-range) | 🟢 Easy | Math | Digit Range Math | [C++](./3870-count-commas-in-range/3870-count-commas-in-range.cpp) |
| 68 | **Day 58** | 2026-09-10 | [3871. Count Commas in Range II](./3871-count-commas-in-range-ii) | 🟡 Med | Math | Digit Range Math | [C++](./3871-count-commas-in-range-ii/3871-count-commas-in-range-ii.cpp) |
| 69 | **Day 59** | 2026-09-11 | [901. Online Stock Span](./0901-online-stock-span) | 🟡 Med | Monotonic Stack | Decreasing Stack (Span Accumulation) | [C++](./0901-online-stock-span/0901-online-stock-span.cpp) |
| 70 | **Day 60** | 2026-09-12 | [4048. Count Values with Equally Spaced Occurrences I](./4048-count-values-with-equally-spaced-occurrences-i) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./4048-count-values-with-equally-spaced-occurrences-i/4048-count-values-with-equally-spaced-occurrences-i.cpp) |
| 71 | **Day 61** | 2026-09-13 | [739. Daily Temperatures](./0739-daily-temperatures) | 🟡 Med | Monotonic Stack | Decreasing Stack (Index Distance) | [C++](./0739-daily-temperatures/0739-daily-temperatures.cpp) |
| 72 | **Day 62** | 2026-09-14 | [735. Asteroid Collision](./0735-asteroid-collision) | 🟡 Med | Stack | Collision Simulation | [C++](./0735-asteroid-collision/0735-asteroid-collision.cpp) |
| 73 | **Day 63** | 2026-09-15 | [836. Rectangle Overlap](./0836-rectangle-overlap) | 🟢 Easy | Geometry | Interval Overlap Logic | [C++](./0836-rectangle-overlap/0836-rectangle-overlap.cpp) |
| 74 | **Day 64** | 2026-09-16 | [402. Remove K Digits](./0402-remove-k-digits) | 🟡 Med | Monotonic Stack | Greedy Monotonic Stack | [C++](./0402-remove-k-digits/0402-remove-k-digits.cpp) |
| 75 | **Day 65** | 2026-09-18 | [175. Combine Two Tables](./0175-combine-two-tables) | 🟢 Easy | SQL | Database Query | [SQL](./0175-combine-two-tables/0175-combine-two-tables.sql) |
| 76 | **Day 66** | 2026-09-24 | [3483. Unique 3 Digit Even Numbers](./3483-unique-3-digit-even-numbers) | 🟢 Easy | Arrays | Simulation & Logic | [C++](./3483-unique-3-digit-even-numbers/3483-unique-3-digit-even-numbers.cpp) |
| 77 | **Day 67** | 2026-09-26 | [577. Employee Bonus](./0577-employee-bonus) | 🟢 Easy | SQL | Database Query | [SQL](./0577-employee-bonus/0577-employee-bonus.sql) |
| 78 | **Day 68** | 2026-09-28 | [182. Duplicate Emails](./0182-duplicate-emails) | 🟢 Easy | SQL | Database Query | [SQL](./0182-duplicate-emails/0182-duplicate-emails.sql) |
| 79 | **Day 69** | 2026-09-29 | [181. Employees Earning More Than Their Managers](./0181-employees-earning-more-than-their-managers) | 🟢 Easy | SQL | Database Query | [SQL](./0181-employees-earning-more-than-their-managers/0181-employees-earning-more-than-their-managers.sql) |
| 80 | **Day 69** | 2026-09-29 | [183. Customers Who Never Order](./0183-customers-who-never-order) | 🟢 Easy | SQL | Database Query | [SQL](./0183-customers-who-never-order/0183-customers-who-never-order.sql) |
| 81 | **Day 69** | 2026-09-29 | [643. Maximum Average Subarray I](./0643-maximum-average-subarray-i) | 🟢 Easy | Sliding Window | Fixed Window (Running Sum) | [C++](./0643-maximum-average-subarray-i/0643-maximum-average-subarray-i.cpp) |
| 82 | **Day 69** | 2026-09-29 | [1423. Maximum Points You Can Obtain from Cards](./1423-maximum-points-you-can-obtain-from-cards) | 🟡 Med | Sliding Window | Fixed Window (Total - Min Subarray) | [C++](./1423-maximum-points-you-can-obtain-from-cards/1423-maximum-points-you-can-obtain-from-cards.cpp) |
| 83 | **Day 70** | 2026-09-30 | [3. Longest Substring Without Repeating Characters](./0003-longest-substring-without-repeating-characters) | 🟡 Med | Sliding Window | Dynamic Window (Last-Seen Index Jump) | [C++](./0003-longest-substring-without-repeating-characters/0003-longest-substring-without-repeating-characters.cpp) |

---

## 🧠 Approach & Pattern Notes

### 🪟 Sliding Window
- **Dynamic Window (Substrings):** In problems like **LC 3 (Longest Substring Without Repeating Characters)**, maintain an array `lastIndex[256]` initialized to `-1`. When encountering a duplicate character at `right`, jump `left = lastIndex[s[right]] + 1` directly instead of shrinking one step at a time. Length is `right - left + 1`.
- **Substring Counting Formula:** In **LC 1358 (Substrings with all 3 characters)**, as soon as `[left, right]` contains all required characters, every suffix extending from `right` to `n - 1` also contains all three characters. Add `(n - right)` to answer immediately, then shrink `left`.
- **Fixed Window:** In **LC 643** and **LC 1423**, slide a window of size `k` by adding `nums[i]` and subtracting `nums[i - k]` in $O(1)$.

### 🥞 Monotonic Stack
- **Next Greater Element / Daily Temperatures (LC 739, 496, 503):** Maintain a monotonic decreasing stack of indices. While `nums[i] > nums[st.top()]`, pop and resolve answer for `st.top()`.
- **Stock Span (LC 901):** Store `(price, span)` pairs. Pop smaller prices and aggregate their spans for amortized $O(1)$ lookup.
- **Trapping Rain Water (LC 42):** Use two pointers `left` and `right`. Track `leftMax` and `rightMax`. Advance inward from the smaller max since water level is bounded by `min(leftMax, rightMax) - height[i]`.
- **Remove K Digits (LC 402):** Greedy monotonic increasing stack. Pop `st.top() > digit` while `k > 0` to keep highest-value digits minimal.

### 🌲 Binary Trees & Tree DP
- **Bottom-Up Postorder:** In **LC 543 (Diameter)** and **LC 124 (Maximum Path Sum)**, calculate subtree returns bottom-up. At each node, compute the turnaround path (`leftGain + rightGain + root->val`) to update a global max, but only return the single best branch (`max(leftGain, rightGain) + root->val`) to the parent. Disregard negative branches with `max(0, ...)`.
- **Level Order (LC 102, 103):** Snapshot `int size = q.size()` at the start of each iteration to batch nodes level-by-level.

### 🔍 Binary Search Trees (BST)
- Inorder traversal of BST always visits nodes in strictly ascending sorted order.
- **Deletion (LC 450):** If deleting a node with two children, replace its value with its inorder successor (minimum in right subtree) and recursively delete the successor.

---

<!---LeetCode Topics Start-->
# LeetCode Topics
## Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0098-validate-binary-search-tree) |
| [0101-symmetric-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0101-symmetric-tree) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0112-path-sum) |
| [0113-path-sum-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0113-path-sum-ii) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
| [0129-sum-root-to-leaf-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0144-binary-tree-preorder-traversal) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0199-binary-tree-right-side-view](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0199-binary-tree-right-side-view) |
| [0222-count-complete-tree-nodes](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0222-count-complete-tree-nodes) |
| [0226-invert-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0450-delete-node-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0450-delete-node-in-a-bst) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0662-maximum-width-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0662-maximum-width-of-binary-tree) |
| [0700-search-in-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0700-search-in-a-binary-search-tree) |
| [0701-insert-into-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0701-insert-into-a-binary-search-tree) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
## Depth-First Search
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0098-validate-binary-search-tree) |
| [0101-symmetric-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0101-symmetric-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0112-path-sum) |
| [0113-path-sum-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0113-path-sum-ii) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
| [0129-sum-root-to-leaf-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0144-binary-tree-preorder-traversal) |
| [0199-binary-tree-right-side-view](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0199-binary-tree-right-side-view) |
| [0226-invert-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0662-maximum-width-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0662-maximum-width-of-binary-tree) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Breadth-First Search
|  |
| ------- |
| [0101-symmetric-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0101-symmetric-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0112-path-sum) |
| [0199-binary-tree-right-side-view](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0199-binary-tree-right-side-view) |
| [0226-invert-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0226-invert-binary-tree) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0662-maximum-width-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0662-maximum-width-of-binary-tree) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
## Binary Tree
|  |
| ------- |
| [0094-binary-tree-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0094-binary-tree-inorder-traversal) |
| [0098-validate-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0098-validate-binary-search-tree) |
| [0101-symmetric-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0101-symmetric-tree) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
| [0111-minimum-depth-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0111-minimum-depth-of-binary-tree) |
| [0112-path-sum](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0112-path-sum) |
| [0113-path-sum-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0113-path-sum-ii) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
| [0129-sum-root-to-leaf-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0129-sum-root-to-leaf-numbers) |
| [0144-binary-tree-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0144-binary-tree-preorder-traversal) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0199-binary-tree-right-side-view](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0199-binary-tree-right-side-view) |
| [0222-count-complete-tree-nodes](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0222-count-complete-tree-nodes) |
| [0226-invert-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0226-invert-binary-tree) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0236-lowest-common-ancestor-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0236-lowest-common-ancestor-of-a-binary-tree) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0450-delete-node-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0450-delete-node-in-a-bst) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0662-maximum-width-of-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0662-maximum-width-of-binary-tree) |
| [0700-search-in-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0700-search-in-a-binary-search-tree) |
| [0701-insert-into-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0701-insert-into-a-binary-search-tree) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
## String
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0003-longest-substring-without-repeating-characters) |
| [0020-valid-parentheses](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0020-valid-parentheses) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0402-remove-k-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0402-remove-k-digits) |
| [1967-number-of-strings-that-appear-as-substrings-in-word](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1967-number-of-strings-that-appear-as-substrings-in-word) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
## Backtracking
|  |
| ------- |
| [0113-path-sum-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0113-path-sum-ii) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
## Array
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0042-trapping-rain-water) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0503-next-greater-element-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0503-next-greater-element-ii) |
| [0628-maximum-product-of-three-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0643-maximum-average-subarray-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0643-maximum-average-subarray-i) |
| [0735-asteroid-collision](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0735-asteroid-collision) |
| [0739-daily-temperatures](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0739-daily-temperatures) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
| [1260-shift-2d-grid](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1260-shift-2d-grid) |
| [1331-rank-transform-of-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1331-rank-transform-of-an-array) |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1480-running-sum-of-1d-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1480-running-sum-of-1d-array) |
| [1967-number-of-strings-that-appear-as-substrings-in-word](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1967-number-of-strings-that-appear-as-substrings-in-word) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3069-distribute-elements-into-two-arrays-i) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3471-find-the-largest-almost-missing-integer) |
| [3483-unique-3-digit-even-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3483-unique-3-digit-even-numbers) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3718-smallest-missing-multiple-of-k](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3718-smallest-missing-multiple-of-k) |
| [3875-construct-uniform-parity-array-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3875-construct-uniform-parity-array-i) |
| [3903-smallest-stable-index-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3903-smallest-stable-index-i) |
## Divide and Conquer
|  |
| ------- |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
## Binary Search Tree
|  |
| ------- |
| [0098-validate-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0098-validate-binary-search-tree) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0222-count-complete-tree-nodes](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0222-count-complete-tree-nodes) |
| [0230-kth-smallest-element-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0230-kth-smallest-element-in-a-bst) |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0450-delete-node-in-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0450-delete-node-in-a-bst) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0700-search-in-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0700-search-in-a-binary-search-tree) |
| [0701-insert-into-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0701-insert-into-a-binary-search-tree) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
## Hash Table
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0003-longest-substring-without-repeating-characters) |
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1331-rank-transform-of-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1331-rank-transform-of-an-array) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3471-find-the-largest-almost-missing-integer) |
| [3483-unique-3-digit-even-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3483-unique-3-digit-even-numbers) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3718-smallest-missing-multiple-of-k](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3718-smallest-missing-multiple-of-k) |
## Union-Find
|  |
| ------- |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
## Graph Theory
|  |
| ------- |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
## Sorting
|  |
| ------- |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0628-maximum-product-of-three-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1331-rank-transform-of-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1331-rank-transform-of-an-array) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [3536-maximum-product-of-two-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3536-maximum-product-of-two-digits) |
## Enumeration
|  |
| ------- |
| [1291-sequential-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1291-sequential-digits) |
| [3345-smallest-divisible-digit-product-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3345-smallest-divisible-digit-product-i) |
| [3483-unique-3-digit-even-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3483-unique-3-digit-even-numbers) |
## Two Pointers
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0042-trapping-rain-water) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
## Math
|  |
| ------- |
| [0628-maximum-product-of-three-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [0836-rectangle-overlap](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0836-rectangle-overlap) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3345-smallest-divisible-digit-product-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3345-smallest-divisible-digit-product-i) |
| [3536-maximum-product-of-two-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3536-maximum-product-of-two-digits) |
| [3622-check-divisibility-by-digit-sum-and-product](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3622-check-divisibility-by-digit-sum-and-product) |
| [3658-gcd-of-odd-and-even-sums](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3658-gcd-of-odd-and-even-sums) |
| [3870-count-commas-in-range](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3870-count-commas-in-range) |
| [3871-count-commas-in-range-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3871-count-commas-in-range-ii) |
| [3875-construct-uniform-parity-array-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3875-construct-uniform-parity-array-i) |
## Number Theory
|  |
| ------- |
| [1979-find-greatest-common-divisor-of-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3658-gcd-of-odd-and-even-sums](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3658-gcd-of-odd-and-even-sums) |
## Matrix
|  |
| ------- |
| [1260-shift-2d-grid](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1260-shift-2d-grid) |
## Simulation
|  |
| ------- |
| [0735-asteroid-collision](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0735-asteroid-collision) |
| [1260-shift-2d-grid](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1260-shift-2d-grid) |
| [3069-distribute-elements-into-two-arrays-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3069-distribute-elements-into-two-arrays-i) |
## Bit Manipulation
|  |
| ------- |
| [0222-count-complete-tree-nodes](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0222-count-complete-tree-nodes) |
## Heap (Priority Queue)
|  |
| ------- |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
## Design
|  |
| ------- |
| [0155-min-stack](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0155-min-stack) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0225-implement-stack-using-queues](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0232-implement-queue-using-stacks) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
| [0901-online-stock-span](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0901-online-stock-span) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0020-valid-parentheses) |
| [0042-trapping-rain-water](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0042-trapping-rain-water) |
| [0094-binary-tree-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0094-binary-tree-inorder-traversal) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
| [0144-binary-tree-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0144-binary-tree-preorder-traversal) |
| [0155-min-stack](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0155-min-stack) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0225-implement-stack-using-queues](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0232-implement-queue-using-stacks) |
| [0402-remove-k-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0402-remove-k-digits) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0503-next-greater-element-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0503-next-greater-element-ii) |
| [0735-asteroid-collision](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0735-asteroid-collision) |
| [0739-daily-temperatures](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0739-daily-temperatures) |
| [0901-online-stock-span](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0901-online-stock-span) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
## Linked List
|  |
| ------- |
| [0083-remove-duplicates-from-sorted-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0083-remove-duplicates-from-sorted-list) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
## Binary Lifting
|  |
| ------- |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
## Lowest Common Ancestor
|  |
| ------- |
| [0235-lowest-common-ancestor-of-a-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0235-lowest-common-ancestor-of-a-binary-search-tree) |
## Prefix Sum
|  |
| ------- |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
| [1480-running-sum-of-1d-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1480-running-sum-of-1d-array) |
| [3903-smallest-stable-index-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3903-smallest-stable-index-i) |
## Sliding Window
|  |
| ------- |
| [0003-longest-substring-without-repeating-characters](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0003-longest-substring-without-repeating-characters) |
| [0643-maximum-average-subarray-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0643-maximum-average-subarray-i) |
| [1423-maximum-points-you-can-obtain-from-cards](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1423-maximum-points-you-can-obtain-from-cards) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
## Monotonic Stack
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0042-trapping-rain-water) |
| [0402-remove-k-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0402-remove-k-digits) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0503-next-greater-element-ii](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0503-next-greater-element-ii) |
| [0739-daily-temperatures](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0739-daily-temperatures) |
| [0901-online-stock-span](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0901-online-stock-span) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
## Iterator
|  |
| ------- |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
## Queue
|  |
| ------- |
| [0225-implement-stack-using-queues](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0232-implement-queue-using-stacks) |
## Bracket Sequences
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0020-valid-parentheses) |
## Dynamic Programming
|  |
| ------- |
| [0042-trapping-rain-water](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0042-trapping-rain-water) |
## Data Stream
|  |
| ------- |
| [0901-online-stock-span](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0901-online-stock-span) |
## Geometry
|  |
| ------- |
| [0836-rectangle-overlap](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0836-rectangle-overlap) |
## Greedy
|  |
| ------- |
| [0402-remove-k-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0402-remove-k-digits) |
## Database
|  |
| ------- |
| [0175-combine-two-tables](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0175-combine-two-tables) |
| [0181-employees-earning-more-than-their-managers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0181-employees-earning-more-than-their-managers) |
| [0182-duplicate-emails](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0182-duplicate-emails) |
| [0183-customers-who-never-order](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0183-customers-who-never-order) |
| [0577-employee-bonus](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0577-employee-bonus) |
## Recursion
|  |
| ------- |
| [3483-unique-3-digit-even-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3483-unique-3-digit-even-numbers) |
<!---LeetCode Topics End-->
