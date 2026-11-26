#include <stdio.h> 
int main() 
{ 
 int a, b, res, choice; 
 printf("===== BITWISE OPERATIONS =====\n"); 
 printf("Enter the first number: "); 
 scanf("%d", &a); 
 printf("Enter the second number: "); 
 scanf("%d", &b); 
 printf("\n----- MENU -----\n"); 
 printf("1. Bitwise AND (&)\n"); 
 printf("2. Bitwise OR (|)\n"); 
 printf("3. Bitwise XOR (^)\n"); 
 printf("4. Bitwise NOT (~)\n"); 
 printf("5. Left Shift (<<)\n"); 
 printf("6. Right Shift (>>)\n"); 
 printf("\nEnter your choice: "); 
 scanf("%d", &choice); 
 switch(choice)
 { 
 case 1: 
 res = a & b; 
 printf("Bitwise AND Result = %d", res); 
 break; 
 case 2: 
 res = a | b; 
 printf("Bitwise OR Result = %d", res); 
#include <stdio.h> 
int main() 
{ 
 int a, b, res, choice; 
 printf("===== BITWISE OPERATIONS =====\n"); 
 printf("Enter the first number: "); 
 scanf("%d", &a); 
 printf("Enter the second number: "); 
 scanf("%d", &b); 
 printf("\n----- MENU -----\n"); 
 printf("1. Bitwise AND (&)\n"); 
 printf("2. Bitwise OR (|)\n"); 
 printf("3. Bitwise XOR (^)\n"); 
 printf("4. Bitwise NOT (~)\n"); 
 printf("5. Left Shift (<<)\n"); 
 printf("6. Right Shift (>>)\n"); 
 printf("\nEnter your choice: "); 
 scanf("%d", &choice); 
 switch(choice)
 { 
 case 1: 
 res = a & b; 
 printf("Bitwise AND Result = %d", res); 
 break; 
 case 2: 
 res = a | b; 
 printf("Bitwise OR Result = %d", res); 
}
//
OUTPUT 
===== BITWISE OPERATIONS ===== 
Enter the first number: 12 
Enter the second number: 5 
----- MENU -----
1. Bitwise AND (&) 
2. Bitwise OR (|) 
3. Bitwise XOR (^) 
4. Bitwise NOT (~) 
5. Left Shift (<<) 
6. Right Shift (>>) 
Enter your choice: 1 
Bitwise AND Result = 4
