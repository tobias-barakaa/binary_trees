Project Description: Binary Trees in C

In this programming project, you will be working with binary trees and implementing various operations related to them. Binary trees are hierarchical data structures that consist of nodes, each having at most two children, referred to as the left and right child nodes. The goal of this project is to enhance your understanding of binary trees, data structures, and coding practices in the C programming language.

Requirements:

Plagiarism Policy: Plagiarism is strictly forbidden, and any instance of plagiarism will result in immediate removal from the program. Originality and individual effort are highly valued.

Editors and Compilation: You are allowed to use the editors vi, vim, or emacs to write your code. All the source code files should be compiled on Ubuntu 20.04 LTS using gcc, with the following compiler options: -Wall -Werror -Wextra -pedantic -std=gnu89.

Coding Style: Your code should adhere to the Betty style, and it will be checked using betty-style.pl and betty-doc.pl to ensure consistent and readable code.

File Structure: Each file should end with a new line, and a README.md file must be present at the root of the project folder, providing essential information about the project.

Global Variables: Usage of global variables is prohibited.

Function Limit: Each source code file should contain no more than 5 functions.

Standard Library: You are allowed to use the C standard library to implement your functions.

Prototypes and Header File: All function prototypes must be included in a header file named "binary_trees.h." Don't forget to push this header file to your repository. Additionally, all header files should be include guarded to prevent multiple inclusion.

Data Structures: You will work with various binary tree data structures, including Basic Binary Tree, Binary Search Tree (BST), AVL Tree, and Max Binary Heap. These structures will be defined using the following formats:

Basic Binary Tree:

struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;


typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s heap_t;

GitHub Repository: Each group should maintain one project repository. If you attempt to clone/fork/replicate a project repository with the same name before the second deadline, you risk receiving a 0% score.
This project will provide you with a deeper understanding of binary trees and help you improve your C coding skills. Remember to follow the given guidelines and meet the requirements to successfully complete the tasks assigned to you.

