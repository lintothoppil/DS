#include <stdio.h>

int superSet[20], superSetSize = 0, 
setA[20], setASize = 0, 
setB[20], setBSize = 0, 
bitStringA[20], bitStringB[20], 
bitStringUnion[20], bitStringIntersection[20];  
int isBitStringReady = 0; 
int search(int arr[], int size, int elem) {
for (int i = 0; i < size; i++) {
if (arr[i] == elem) return i;
}
return -1;
}

void getSet(int arr[], int size) {
printf("Enter set elements: ");
for (int i = 0; i < size; i++) {
scanf("%d", &arr[i]); 
}
}

void printSet(int arr[], int size) {
printf("{ ");
for (int i = 0; i < size; i++) {
printf("%d", arr[i]);

if (i < size - 1) printf(", ");
}
printf(" }\n");
}

void printBitString(int bitString[]) {
printf("{ ");
for (int i = 0; i < superSetSize; i++) {
printf("%d", bitString[i]); 
if (i < superSetSize - 1) printf(", ");
}
printf(" }\n");
}


void generateBitString(int set[], int setSize, int bitString[]) {

for (int i = 0; i < superSetSize; i++) bitString[i] = 0;
for (int i = 0; i < setSize; i++) {

int pos = search(superSet, superSetSize, set[i]);
if (pos >= 0) bitString[pos] = 1; 
}
}

void generateBitStrings() {
generateBitString(setA, setASize, bitStringA); 
generateBitString(setB, setBSize, bitStringB); 
printf("\nSet A Bit String: ");
printBitString(bitStringA);
printf("Set B Bit String: ");
printBitString(bitStringB);
isBitStringReady = 1; 
}

void setUnion() {
for (int i = 0; i < superSetSize; i++) {

bitStringUnion[i] = bitStringA[i] | bitStringB[i];
}
}
void setIntersection() {
for (int i = 0; i < superSetSize; i++) {

bitStringIntersection[i] = bitStringA[i] & bitStringB[i];
}
}

void printResultAsSet(int bitString[]) {
printf("{ ");

int first = 1; 
for (int i = 0; i < superSetSize; i++) {
if (bitString[i])
 { 
if (!first) printf(", ");
printf("%d", superSet[i]);
first = 0; 
}
}
printf(" }\n");
}
int main() {
printf("Set Operations Using Bit Strings : Union and Intersection\n");
printf("Enter Super Set Size: ");
scanf("%d", &superSetSize);
getSet(superSet, superSetSize);
printf("Enter Set A Size: ");
scanf("%d", &setASize);
getSet(setA, setASize); 
printf("Enter Set B Size: ");
scanf("%d", &setBSize);
getSet(setB, setBSize); 
generateBitStrings();

if (isBitStringReady) {
printf("\nSet Union: ");
setUnion();
printBitString(bitStringUnion); 
printf("Print union as set: ");
printResultAsSet(bitStringUnion); 
printf("\nSet Intersection: ");
setIntersection();
printBitString(bitStringIntersection); 
printf("Print intersection as set: ");
printResultAsSet(bitStringIntersection); 
} 
else 
{
printf("\nBit strings not generated!"); 
}
return 0;
}
