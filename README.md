# Binary Trees

This project is about learning to create and manipulate [Binary Trees](https://en.wikipedia.org/wiki/Binary_tree).

## Files

* [binary_trees.h](binary_trees.h), the header file.

* [binary_tree_print.c](binary_tree_print.c), the definition of a function printing a binary tree.

* [0-binary_tree_node.c](0-binary_tree_node.c), a function creating a binary tree node.

* [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c), a function inserting a node as the left-child of another node.

* [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c), a function inserting a node as the right-child of another node.

* [3-binary_tree_delete.c](3-binary_tree_delete.c), a function deleting a given tree.

* [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c), a function checking if a given node is a leaf of the tree.

* [5-binary_tree_is_root.c](5-binary_tree_is_root.c), a function checking if a given node is the root of a tree.

* [6-binary_tree_preorder.c](6-binary_tree_preorder.c), a function going through a given tree using pre-order traversal.

* [7-binary_tree_inorder.c](7-binary_tree_inorder.c), a function going through a given tree using in-order traversal.

* [8-binary_tree_postorder.c](8-binary_tree_postorder.c), a function going through a given tree using post-order traversal.

* [9-binary_tree_height.c](9-binary_tree_height.c), a function computing the height of a given tree.

* [10-binary_tree_depth.c](10-binary_tree_depth.c), a function computing the depth of a given node in a tree.

* [11-binary_tree_size.c](11-binary_tree_size.c), a function computing the size of a given tree.

* [12-binary_tree_leaves.c](12-binary_tree_leaves.c), a function computing the number of leaves in a given tree.

* [13-binary_tree_nodes.c](13-binary_tree_nodes.c), a function computing the number of nodes having at least one child in a given tree.

* [14-binary_tree_balance.c](14-binary_tree_balance.c), a function checking if a given tree is balanced.

* [15-binary_tree_is_full.c](15-binary_tree_is_full.c), a function checking if a given tree is full.

* [16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c), a function checking if a given tree is perfect.

* [17-binary_tree_sibling.c](17-binary_tree_sibling.c), a function finding the sibling of a given node.

* [18-binary_tree_uncle.c](18-binary_tree_uncle.c), a function finding the uncle of a given node.

* [100-binary_trees_ancestor.c](100-binary_trees_ancestor.c), a function finding the lowest common ancester of two given nodes.

* [101-binary_tree_levelorder.c](101-binary_tree_levelorder.c), a function going through a given tree using level-order traversal.

* [102-binary_tree_is_complete.c](102-binary_tree_is_complete.c), a function checking if a given tree is complete.

* [103-binary_tree_rotate_left.c](103-binary_tree_rotate_left.c), a function rotating a given tree to the left.

* [104-binary_tree_rotate_right.c](104-binary_tree_rotate_right.c), a function rotating a given tree to the right.

* [110-binary_tree_is_bst.c](110-binary_tree_is_bst.c), a function checking if a given tree is a binary search tree.

* [111-bst_insert.c](111-bst_insert.c), a function inserting a node in a binary search tree.

* [112-array_to_bst.c](112-array_to_bst.c), a function building a binary search tree from a given array of integers.

* [113-bst_search.c](113-bst_search.c), a function searching for a given value in a binary search tree.

* [120-binary_tree_is_avl.c](120-binary_tree_is_avl.c), a function checking if a given tree is an AVL tree.

* [121-avl_insert.c](121-avl_insert.c), a function inserting a node in an AVL tree.

* [122-array_to_avl.c](122-array_to_avl.c), a function building an AVL tree from a given array of integers.

* [130-binary_tree_is_heap.c](130-binary_tree_is_heap.c), a function checking if a given tree is a max heap tree.

* [131-heap_insert.c](131-heap_insert.c), a function inserting a node in a max heap tree.

* [132-array_to_heap.c](132-array_to_heap.c), a function building a max heap tree from a given array of integers.

* [133-heap_extract.c](133-heap_extract.c), a function extracting the root node from a max heap tree.

* [134-heap_to_sorted_array.c](134-heap_to_sorted_array.c), a function building a sorted array of integers from a max heap tree.

## Properties

This project involves several important notions regarding binary trees:

| **Notion** | **Description** |
| :-------- | :-------------- |
| **Root Node** | The node with no parent. |
| **Leaf Node** | A node with no children. |
| **Node Depth** | Number of edges between the node and the root node. |
| **Node Height** | Number of edges between the node and the lowest leaf node. |
| **Tree Size** | Number of nodes in the tree. |
| **Complete Tree** | A tree where each level is full, except the lowest one, where elements are filled from left to right. |
| **Full Tree** | Tree where each node has either 0 or 2 children. |
| **Perfect Tree** | Tree where each level is full, and all leaf nodes are on the same level. |
| **Balanced Tree** | Tree where each node's left and right subtrees have a maximum height difference of 1. |
| **Binary Search Tree** | Tree where each node's left subtree only has inferior values and each node's right subtree only has greater values. |
| **AVL Tree** | Binary Search Tree where each node's left and right subtrees are balanced. |
| **Max Heap Tree** | Complete binary tree where each node's left and right subtrees only have inferior values. |
