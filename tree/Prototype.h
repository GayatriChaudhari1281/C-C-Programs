#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Search(struct node*,int);

void Inorder(struct node*);

void Postorder(struct node*);

void Insert(struct node**,int);

void Preorder(struct node*);

void ParentNode(struct node *tree,int value);