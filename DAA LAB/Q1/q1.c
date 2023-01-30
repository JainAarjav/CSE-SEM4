#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node* rchild;
    int data;
    struct node* lchild;
}*root=NULL;

struct node* BST(struct node* p ,int key)
{
    if (p==NULL)
    {
        p=malloc(sizeof(struct node));
        p->data=key;
        p->rchild=NULL;
        p->lchild=NULL;
        return p;
    }
    else if(key<p->data)
    {
        p->lchild=BST(p->lchild,key);
    }
    else if(key>p->data)
    {
        p->rchild=BST(p->rchild,key);
    }
    return p;
}

// struct node* search(struct node *p,int key)
// {
//     if(p==NULL)
//     {
//         printf("NOT FOUND");
//         return NULL;
//     }
//     else if(key<p->data)
//     {
//         p->lchild=search(p->lchild,key);
//     }
//     else if(key>p->data)
//     {
//         p->rchild=search(p->rchild,key);
//     }
//     printf("Key FOUND");
//     return p;
// }
void search(struct node *p,int key)
{
    while(p)
    {
        if(key==p->data)
        {
            printf("KEY FOUND");
            return;
        }
        else if(key<p->data)
        {
            p=p->lchild;
        }
        else if(key>p->data)
        {
            p=p->rchild;
        }
    }
    printf("KEY NOT FOUND");
}

void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d \t",p->data);
        inorder(p->rchild);
    }
}

void preorder(struct node *p)
{
    if(p)
    {
        printf("%d \t",p->data);
        inorder(p->lchild);
        inorder(p->rchild);
    }
}

void postorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        inorder(p->rchild);
        printf("%d \t",p->data);

    }
}
int main()
{


   root=BST(root,30);
    BST(root,20);
    BST(root,4);
    BST(root,3);
    BST(root,7);
    BST(root,2);
    BST(root,8);
    BST(root,1);
    inorder(root);
    search(root,3);
    return 0;    
}
/*
                3
             /    \
            1       4  
             \        \ 
                2       5

inorder: 1 2 3 4 5
preorder: 3 1 2 4 5
postorder: 2 1 5 4 3

*/
