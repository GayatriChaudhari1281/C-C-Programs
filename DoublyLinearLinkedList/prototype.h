#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL InsertFirst(struct node** ,int);

void DisplayForward(struct node*);

void DisplayBackward(struct node*);

BOOL InsertLast(struct node** ,int);

int Count(struct node*);

int SearchFirstOcc(struct node*,int);

BOOL DeleteFirst(struct node**);

BOOL DeleteLast(struct node**);

BOOL InsertAtPosition(struct node**,int,int);

BOOL DeleteAtPosition(struct node**,int);