#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL InsertFirst(struct node** ,struct node**,int);

BOOL InsertLast(struct node** ,struct node** ,int);

BOOL DeleteFirst(struct node** ,struct node** );

BOOL DeleteLast(struct node** ,struct node** );

void DisplayForward(struct node* , struct node* );

void DisplayBackward(struct node* , struct node* );

int Count(struct node* ,struct node* );

int SearchFirstOcc(struct node* ,struct node* ,int);

BOOL InsertAtPosition(struct node** ,struct node** ,int ,int);

BOOL DeleteAtPosition(struct node** , struct node** , int);