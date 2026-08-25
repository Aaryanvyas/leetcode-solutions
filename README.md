# 🌲 LeetCode Solutions

A clean collection of LeetCode solutions.

---

## 📊 Summary

- 🟢 **Easy:** 8
- 🟡 **Medium:** 3
- 🔴 **Hard:** 1
- **Total Solved:** 12

---

## 📚 Problem List

### 🌲 Binary Tree & DFS / BFS
| ID | Problem | Difficulty | Solution |
| :--- | :--- | :---: | :---: |
| 94 | [Binary Tree Inorder Traversal](./0094-binary-tree-inorder-traversal) | 🟢 Easy | [C++](./0094-binary-tree-inorder-traversal/0094-binary-tree-inorder-traversal.cpp) |
| 100 | [Same Tree](./0100-same-tree) | 🟢 Easy | [C++](./0100-same-tree/0100-same-tree.cpp) |
| 102 | [Binary Tree Level Order Traversal](./0102-binary-tree-level-order-traversal) | 🟡 Medium | [C++](./0102-binary-tree-level-order-traversal/0102-binary-tree-level-order-traversal.cpp) |
| 103 | [Binary Tree Zigzag Level Order Traversal](./0103-binary-tree-zigzag-level-order-traversal) | 🟡 Medium | [C++](./0103-binary-tree-zigzag-level-order-traversal/0103-binary-tree-zigzag-level-order-traversal.cpp) |
| 104 | [Maximum Depth of Binary Tree](./0104-maximum-depth-of-binary-tree) | 🟢 Easy | [C++](./0104-maximum-depth-of-binary-tree/0104-maximum-depth-of-binary-tree.cpp) |
| 110 | [Balanced Binary Tree](./0110-balanced-binary-tree) | 🟢 Easy | [C++](./0110-balanced-binary-tree/0110-balanced-binary-tree.cpp) |
| 124 | [Binary Tree Maximum Path Sum](./0124-binary-tree-maximum-path-sum) | 🔴 Hard | [C++](./0124-binary-tree-maximum-path-sum/0124-binary-tree-maximum-path-sum.cpp) |
| 144 | [Binary Tree Preorder Traversal](./0144-binary-tree-preorder-traversal) | 🟢 Easy | [C++](./0144-binary-tree-preorder-traversal/0144-binary-tree-preorder-traversal.cpp) |
| 145 | [Binary Tree Postorder Traversal](./0145-binary-tree-postorder-traversal) | 🟢 Easy | [C++](./0145-binary-tree-postorder-traversal/0145-binary-tree-postorder-traversal.cpp) |
| 543 | [Diameter of Binary Tree](./0543-diameter-of-binary-tree) | 🟢 Easy | [C++](./0543-diameter-of-binary-tree/0543-diameter-of-binary-tree.cpp) |

### 💬 Strings & Hash Tables
| ID | Problem | Difficulty | Solution |
| :--- | :--- | :---: | :---: |
| 1189 | [Maximum Number of Balloons](./1189-maximum-number-of-balloons) | 🟢 Easy | [C++](./1189-maximum-number-of-balloons/1189-maximum-number-of-balloons.cpp) |
| 1358 | [Number of Substrings Containing All Three Characters](./1358-number-of-substrings-containing-all-three-characters) | 🟡 Medium | [C++](./1358-number-of-substrings-containing-all-three-characters/1358-number-of-substrings-containing-all-three-characters.cpp) |

---

## 🧠 Cheat Sheets & Key Concepts

### 🌲 Binary Trees Traversal
- **Inorder (LNR)**: Left -> Node -> Right. (Gives sorted order in BST).
- **Preorder (NLR)**: Node -> Left -> Right.
- **Postorder (LRN)**: Left -> Right -> Node.
- **BFS (Level Order)**: Track level size before processing children.

### 🔍 Sliding Window
- Expand the right pointer to add elements.
- Shrink the left pointer to meet conditions.
- Subarrays ending at `right` extending to the left: count is `right - left + 1`.

```
Happy coding! 🚀
```
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
| [0020-valid-parentheses](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0020-valid-parentheses) |
| [0257-binary-tree-paths](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0257-binary-tree-paths) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
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
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0108-convert-sorted-array-to-binary-search-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0108-convert-sorted-array-to-binary-search-tree) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0628-maximum-product-of-three-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [1008-construct-binary-search-tree-from-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1008-construct-binary-search-tree-from-preorder-traversal) |
| [1260-shift-2d-grid](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1260-shift-2d-grid) |
| [1331-rank-transform-of-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1331-rank-transform-of-an-array) |
| [1464-maximum-product-of-two-elements-in-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1464-maximum-product-of-two-elements-in-an-array) |
| [1480-running-sum-of-1d-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1480-running-sum-of-1d-array) |
| [1967-number-of-strings-that-appear-as-substrings-in-word](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1967-number-of-strings-that-appear-as-substrings-in-word) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3471-find-the-largest-almost-missing-integer) |
| [3532-path-existence-queries-in-a-graph-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3532-path-existence-queries-in-a-graph-i) |
| [3718-smallest-missing-multiple-of-k](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3718-smallest-missing-multiple-of-k) |
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
| [0105-construct-binary-tree-from-preorder-and-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0105-construct-binary-tree-from-preorder-and-inorder-traversal) |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
| [0863-all-nodes-distance-k-in-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0863-all-nodes-distance-k-in-binary-tree) |
| [0987-vertical-order-traversal-of-a-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0987-vertical-order-traversal-of-a-binary-tree) |
| [1331-rank-transform-of-an-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1331-rank-transform-of-an-array) |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
| [3471-find-the-largest-almost-missing-integer](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3471-find-the-largest-almost-missing-integer) |
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
## Two Pointers
|  |
| ------- |
| [0349-intersection-of-two-arrays](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0349-intersection-of-two-arrays) |
| [0653-two-sum-iv-input-is-a-bst](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0653-two-sum-iv-input-is-a-bst) |
## Math
|  |
| ------- |
| [0628-maximum-product-of-three-numbers](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0628-maximum-product-of-three-numbers) |
| [1979-find-greatest-common-divisor-of-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1979-find-greatest-common-divisor-of-array) |
| [3345-smallest-divisible-digit-product-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3345-smallest-divisible-digit-product-i) |
| [3536-maximum-product-of-two-digits](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3536-maximum-product-of-two-digits) |
| [3622-check-divisibility-by-digit-sum-and-product](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3622-check-divisibility-by-digit-sum-and-product) |
| [3658-gcd-of-odd-and-even-sums](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3658-gcd-of-odd-and-even-sums) |
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
| [1260-shift-2d-grid](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1260-shift-2d-grid) |
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
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0225-implement-stack-using-queues](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0232-implement-queue-using-stacks) |
| [0297-serialize-and-deserialize-binary-tree](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0297-serialize-and-deserialize-binary-tree) |
## Stack
|  |
| ------- |
| [0020-valid-parentheses](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0020-valid-parentheses) |
| [0094-binary-tree-inorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0094-binary-tree-inorder-traversal) |
| [0114-flatten-binary-tree-to-linked-list](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0114-flatten-binary-tree-to-linked-list) |
| [0144-binary-tree-preorder-traversal](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0144-binary-tree-preorder-traversal) |
| [0173-binary-search-tree-iterator](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0173-binary-search-tree-iterator) |
| [0225-implement-stack-using-queues](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0225-implement-stack-using-queues) |
| [0232-implement-queue-using-stacks](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0232-implement-queue-using-stacks) |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
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
| [1480-running-sum-of-1d-array](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/1480-running-sum-of-1d-array) |
## Sliding Window
|  |
| ------- |
| [3090-maximum-length-substring-with-two-occurrences](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/3090-maximum-length-substring-with-two-occurrences) |
## Monotonic Stack
|  |
| ------- |
| [0496-next-greater-element-i](https://github.com/Aaryanvyas/leetcode-solutions/tree/master/0496-next-greater-element-i) |
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
<!---LeetCode Topics End-->