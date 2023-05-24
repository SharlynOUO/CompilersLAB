#ifndef _TREE_H
#define _TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int row;
    int col;

    int node_index;
    char symbol[16];
    char string_val[16];
    int int_val;
    int terminal_val;
    struct node *child;
    struct node *Parent;
    struct node *next;

} TreeNode;

/*
 * new tree node
 * all ptr is NULL
 */
TreeNode *NewNode(int *index, char *symbol, int row, int col);

void WriteIntVal(TreeNode *node, int val);
void WriteStringVal(TreeNode *node, char *val);
/*
 * Add child info into parent's node
 */
void AddChild(TreeNode *parent, TreeNode *child);
/*
 * print AST into a file
 */
void DrawAST(TreeNode *root, FILE *outf, FILE *idxf);
void PrintStep(char *left, char *right, char *terminal_sym, int lidx, int ridx, FILE *outf, FILE *idxf);

#endif