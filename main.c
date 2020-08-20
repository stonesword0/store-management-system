#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice1;
    char choice2;
    char choice3;
     /* A stands for Add, id stands for sale id */
    char choice3aid[255];
    /* PID stands for Product id */
    char choice3apid[255];
    /* SA stands for sold amount */
    char choice3asa[255];
    printf("Store Management System\n\nWhat would you like to do?\n1.Add/Remove/list Product(s)\n2.Add/List/Remove Sales\n");
    scanf("%d", &choice1);
    
    /* The case '1' statement is for choice2,
    the case '2' statment is for choice3 */
    
    switch(choice1){
    case 1 :
        printf("Would you like to (A)dd, (R)emove, or (l)ist products?\n");
        scanf("%s", &choice2);
        break;
    case 2 :
        printf("Would you like too (A)dd, (L)ist, or (R)emove sales?\n");
        scanf("%s", &choice3);
            switch (choice3)
            {
            case 'a' :
                printf("What would you like the ID of the sale you are adding going to be?\n(if you dont know, list the sales list and look for the greatest ID and add 1.)\n");
                scanf("%s", &choice3aid);
                printf("What is the product that you sold id?\n(if you dont know, list the produts and look for the right product's id)\n");
                scanf("%s", &choice3apid);
                printf("How many products did you sell?");
                break;
            
            default :
                printf("Invalid Choice. Please try again.\n");
            }
        break;
    default :
        printf("Invalid Choice. Please try again.\n");
    }

    /* The old if statement (here for future use if needed) */

    /*
    if(choice1 == 1) {
        printf("Would you like to (A)dd, (R)emove, or (l)ist products?\n");
        scanf("%s", &choice2);
        printf("%s", choice2);
    }
    else if(choice1 == 2) {
        printf("Would you like too (A)dd, (L)ist, or (R)emove sales?\n");
        scanf("%s", &choice3);
        printf("%s", choice3);
    }
    else{
        printf("Invalid Choice. Please try again.\n");
    }
    */

    return 0;
}
