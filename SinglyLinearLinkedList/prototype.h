#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL InsertFirst(struct node** ,int);

void Display(struct node*);

BOOL InsertLast(struct node** ,int);

int Count(struct node*);

int SearchFirstOcc(struct node*,int);

BOOL DeleteFirst(struct node**);

BOOL DeleteLast(struct node**);

BOOL InsertAtPosition(struct node**,int,int);

BOOL DeleteAtPosition(struct node**,int);

void DisplayN(struct node*,int );

void DisplayOddNode(struct node*);

void DisplaySum(struct node* );

void Displaylast3(struct node* );

void concat(struct node** ,struct node** );

void concatAt(struct node** , struct node** ,int);

BOOL campare(struct node*,struct node*);

int middlenode(struct node*);

void Deletefrom(struct node** ,int );

void DeleteAll(struct node**);

void DeleteSpecific(struct node** ,int);