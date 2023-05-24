#include "tree.h"

TreeNode *NewNode(int *index, char *symbol, int row, int col)
{

    TreeNode *ret = (TreeNode *)malloc(sizeof(TreeNode));

    strcpy(ret->symbol, symbol);
    // printf("%s\n", symbol);

    ret->child = NULL;
    ret->next = NULL;
    ret->Parent = NULL;

    ret->col = col;
    ret->row = row;

    ret->node_index = *index;
    *index = (*index) + 1;

    return ret;
}

void WriteIntVal(TreeNode *node, int val)
{
    node->int_val = val;
}

void WriteStringVal(TreeNode *node, char *val)
{
    strcpy(node->string_val, val);
    // printf("%s\n", val);
}

void AddChild(TreeNode *parent, TreeNode *child)
{
    if (child == NULL)
    {
        parent->child = NULL;
        return;
    }
    if (parent != NULL && child != NULL)
    {
        // 每个节点中存有一个直接子节点链表
        child->next = parent->child;
        // parent->child总是指向最左child
        // 要求.y文件中从最右child开始add
        parent->child = child;
        // 记录parent信息，以便返回
        child->Parent = parent;

        child->row = parent->row;
        child->col = parent->col;
    }
}

void DrawAST(TreeNode *root, FILE *outf, FILE *idxf)
{

    TreeNode *p = root;

    if (p->child != NULL)
        DrawAST(p->child, outf, idxf);
    if (p->next != NULL)
        DrawAST(p->next, outf, idxf);

    if (p->Parent == NULL) // root
        return;

    char *tval = NULL;

    if (p->terminal_val)
    {
        tval = p->string_val;
    }
    PrintStep(p->Parent->symbol, p->symbol, tval, p->Parent->node_index, p->node_index, outf, idxf);
}

void PrintStep(char *left, char *right, char *terminal_sym, int lidx, int ridx, FILE *outf, FILE *idxf)
{
    fprintf(outf, "%s->%s\n", left, right);
    fprintf(idxf, "%d->%d\n", lidx, ridx);
    if (terminal_sym != NULL)
    {
        fprintf(outf, "%s->%s\n", right, terminal_sym);
        fprintf(idxf, "%d->0\n", ridx);
    }
}
