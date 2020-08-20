#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice1;
    char choice2;
    char choice3;
    printf("Store Management System\n\nWhat would you like to do?\n1.Add/Remove/list Product(s)\n2.Add/List/Remove Sales\n");
    scanf("%d", &choice1);
    
    /* The if statement is choice2,
    the else if statment if choice3 */
    
    if(choice1 == 1) {
        printf("Would you like to (A)dd, (R)emove, or (l)ist products?\n");
        scanf("%c", &choice2);
        printf("%c", choice2);
    }
    else if(choice1 == 2) {
        printf("Would you like too (A)dd, (L)ist, or (R)emove sales?\n");
        scanf("%c", &choice3);
        printf("%c", choice3);
    }
    else{
        printf("Invalid Choice. Please try again.\n");
    }
    return 0;
}
