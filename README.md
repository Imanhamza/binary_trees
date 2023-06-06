# 0x1D. C - Binary trees
---
> A binary tree is a hierarchical data structure with nodes having at most two children, used for organizing and manipulating data efficiently through searching and sorting algorithms.   
> Creating, deleting and mapulating nodes inside the binary tree is the core of the project
---

## Resources
* [`Binary Tree`](https://en.wikipedia.org/wiki/Binary_tree).
* [`Data Structures and Algorithms - Tree`](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm).
* [`Tree Traversal`](https://www.programiz.com/dsa/tree-traversal).
* [`Binary search tree`](https://en.wikipedia.org/wiki/Binary_search_tree).
* [`Data structures: Binary Tree`](https://www.youtube.com/watch?v=H5JubkIy_p8).

---
## Used Data structures
**Basic Binary Tree**
``` /**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
## File Structure
|File|Description|
|---|---|
|[New node](./0-binary_tree_node.c) | A function that creates a binary tree node.|
|[Insert left](./1-binary_tree_insert_left.c) | A function that inserts a node as the left-child of another node.|
|[Insert right](./2-binary_tree_insert_right.c) | A function that inserts a node as the right-child of another node.|
|[Delete](./3-binary_tree_delete.c) | A function that deletes an entire binary tree.|
|[Is leaf](./4-binary_tree_is_leaf.c) | A function that checks if a node is a leaf.|
|[Is root](./5-binary_tree_is_root.c) | A function that checks if a given node is a root.|
|[Pre-order traversal](./6-binary_tree_preorder.c) | A function that goes through a binary tree using pre-order traversal.|
|[In-order traversal](./7-binary_tree_inorder.c) | A function that goes through a binary tree using in-order traversal.|
|[Post-order traversal](./8-binary_tree_postorder.c) | A function that goes through a binary tree using post-order traversal.|
|[Height](./9-binary_tree_height.c) | A function that measures the height of a binary tree.|
|[Depth](./10-binary_tree_depth.c) | A function that measures the depth of a node in a binary tree.|
|[Size](./11-binary_tree_size.c) | A function that measures the size of a binary tree.|
|[Leaves](./12-binary_tree_leaves.c) | A function that counts the leaves in a binary tree.|
|[Nodes](./13-binary_tree_nodes.c) | A function that counts the nodes with at least 1 child in a binary tree.|
