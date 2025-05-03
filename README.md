## Binary Trees

This project is about learning to create and manipulate binary trees and nodes.

## Files

* [binary_trees.h](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/binary_trees.h), the header file.

* [binary_tree_print.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/binary_tree_print.c), the definition of a function printing a binary tree.

* [0-binary_tree_node.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/0-binary_tree_node.c), a function creating a binary tree node.

* [1-binary_tree_insert_left.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/1-binary_tree_insert_left.c), a function inserting a node as the left-child of another node.

* [2-binary_tree_insert_right.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/2-binary_tree_insert_right.c), a function inserting a node as the right-child of another node.

* [3-binary_tree_delete.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/3-binary_tree_delete.c), a function deleting a given tree.

* [4-binary_tree_is_leaf.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/4-binary_tree_is_leaf.c), a function checking if a given node is a leaf of the tree.

* [5-binary_tree_is_root.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/5-binary_tree_is_root.c), a function checking if a given node is the root of a tree.

* [6-binary_tree_preorder.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/6-binary_tree_preorder.c), a function going through a given tree using pre-order traversal.

* [7-binary_tree_inorder.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/7-binary_tree_inorder.c), a function going through a given tree using in-order traversal.

* [8-binary_tree_postorder.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/8-binary_tree_postorder.c), a function going through a given tree using post-order traversal.

* [9-binary_tree_height.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/9-binary_tree_height.c), a function computing the height of a given tree.

* [10-binary_tree_depth.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/10-binary_tree_depth.c), a function computing the depth of a given node in a tree.

* [11-binary_tree_size.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/11-binary_tree_size.c), a function computing the size of a given tree.

* [12-binary_tree_leaves.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/12-binary_tree_leaves.c), a function computing the number of leaves in a given tree.

* [13-binary_tree_nodes.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/13-binary_tree_nodes.c), a function computing the number of nodes having at least one child in a given tree.

* [14-binary_tree_balance.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/14-binary_tree_balance.c), a function checking if a given tree is balanced.

* [15-binary_tree_is_full.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/15-binary_tree_is_full.c), a function checking if a given tree is full.

* [16-binary_tree_is_perfect.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/16-binary_tree_is_perfect.c), a function checking if a given tree is perfect.

* [17-binary_tree_sibling.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/17-binary_tree_sibling.c), a function finding the sibling of a given node.

* [18-binary_tree_uncle.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/18-binary_tree_uncle.c), a function finding the uncle of a given node.

* [100-binary_trees_ancestor.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/100-binary_trees_ancestor.c), a function finding the lowest common ancester of two given nodes.

* [101-binary_tree_levelorder.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/101-binary_tree_levelorder.c), a function going through a given tree using level-order traversal.

* [103-binary_tree_rotate_left.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/103-binary_tree_rotate_left.c), a function rotating a given tree to the left.

* [104-binary_tree_rotate_right.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/104-binary_tree_rotate_right.c), a function rotating a given tree to the right.

* [110-binary_tree_is_bst.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/110-binary_tree_is_bst.c), a function checking if a given tree is a binary search tree.

* [111-bst_insert.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/111-bst_insert.c), a function inserting a node in a binary search tree.

* [112-array_to_bst.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/112-array_to_bst.c), a function building a binary search tree from a given array of integers.

* [113-bst_search.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/113-bst_search.c), a function searching for a given value in a binary search tree.

* [120-binary_tree_is_avl.c](https://github.com/gwendalminguy/holbertonschool-binary_trees/tree/main/120-binary_tree_is_avl.c), a function checking if a given tree is an AVL tree.

## Properties

| **Types** | **Description** |
| :-------- | :-------------- |
| Root Node | The node with no parent. |
| Leaf Node | A node with no children. |
| Depth of Node | Number of edges between the node and the root node. |
| Height of Node | Number of edges between the node and the lowest leaf node. |
| Size of Tree | Number of nodes in the tree. |
| Complete Tree | A tree where each level is full, except the lowest one, where elements are filled from left to right. |
| Full Tree | Tree where each node has either 0 or 2 children. |
| Perfect Tree | Tree where each level is full, and all leaf nodes are on the same level. |
| Balanced Tree | Tree where each node's left and right subtrees have a maximum height difference of 1. |
| Binary Search Tree | Tree where each node's left subtree only has inferior values and each node's right subtree only has greater values. |
| AVL Tree | Binary Search Tree where each node's left and right subtrees are balanced. |
