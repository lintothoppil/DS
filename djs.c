#include <stdio.h>
#include <stdlib.h>

struct node 
{
struct node *rep; 
struct node *next; 
int data; 
};
struct node *heads[50], *tails[50]; 
static int countRoot = 0; 

void makeSet(int x)
{

struct node *newNode = (struct node *)malloc(sizeof(struct node));
newNode->rep = newNode; 
newNode->next = NULL; 
newNode->data = x; 
heads[countRoot] = newNode; 
tails[countRoot++] = newNode; 
}

struct node* find(int a)
 {
for (int i = 0; i < countRoot; i++)
 { 
struct node *tmp = heads[i]; 
while (tmp) { 
if (tmp->data == a) 
return tmp->rep; 
tmp = tmp->next; 
}
}
return NULL; 
}

void unionSets(int a, int b)
 {
struct node *rep1 = find(a); 
struct node *rep2 = find(b); 
if (rep1 == NULL || rep2 == NULL) 
{
printf("\nElement not present in the DS\n");
return;
}
if (rep1 != rep2) 
{ 
struct node *tail2 = tails[0];

for (int j = 0; j < countRoot; j++)
     {
if (heads[j] == rep2) 
    {
tail2 = tails[j]; 
for (int i = j; i < countRoot - 1; i++) 
{
heads[i] = heads[i + 1];
tails[i] = tails[i + 1];
}
countRoot--; 
break;
}
}

tails[0]->next = rep2; 
tails[0] = tail2; 
while (rep2 != NULL) {
rep2->rep = rep1; 
rep2 = rep2->next;
}
}
}

int search(int x) {
for (int i = 0; i < countRoot; i++) { 
struct node *tmp = heads[i];
while (tmp) { 
if (tmp->data == x) 
return 1;
tmp = tmp->next; 
}
}
return 0; 
}

int main()
 {
int choice, x, y;
printf("Disjoint Set Operations Using Linked Lists\n");
do 
{

printf("\n.......MENU.......\n");
printf("1. Make Set\n");
printf("2. Display Set Representatives\n");
printf("3. Union\n");
printf("4. Find Set\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice); 
switch (choice)
    {
case 1:printf("\nEnter new element: ");
scanf("%d", &x); 
if (search(x))
printf("\nElement already present in the disjoint set DS\n");
else
makeSet(x); 
break;
case 2: printf("\nRepresentatives of the sets: ");
for (int i = 0; i < countRoot; i++)
printf("%d ", heads[i]->data); 
printf("\n");
break;
case 3: 
printf("\nEnter first element: ");
scanf("%d", &x);
printf("\nEnter second element: ");
scanf("%d", &y);
unionSets(x, y); 
break;
case 4: printf("\nEnter the element: ");
scanf("%d", &x);
struct node *rep = find(x); 
if (rep == NULL)
printf("\nElement not present in the DS\n");
else

printf("\nThe representative of %d is %d\n", x, rep->data);
break;
case 5: exit(0);
default:
printf("\nWrong choice\n");
break;
}
} 
while (1);
}
