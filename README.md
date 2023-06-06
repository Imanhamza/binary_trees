# 0x1D. C - Binary trees
---
> A binary tree is a hierarchical data structure with nodes having at most two children, used for organizing and manipulating data efficiently through searching and sorting algorithms.
> creating, deleting and mapulating nodes inside the binary tree is the core of the project
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
