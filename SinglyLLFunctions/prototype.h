#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL InsertFirst(struct node** ,int);

void Modify(struct node** );

void ModifySingleDigit(struct node**);

void Display(struct node*);


void ArrayToLL(int [] ,int ,struct node** );

BOOL LoopCheck(struct node *);