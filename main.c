#include <stdio.h>
#include <stdlib.h>
void alrProducts();
void alrSales();
int main() {
    int choice1;
    char choice2;
    char choice3;
    printf("Store Management System\n\nWhat would you like to do?\n1.Add/Remove/list Product(s)\n2.Add/List/Remove Sales\n");
    scanf("%d", &choice1);

    
    switch(choice1){
    case 1 :
        alrProducts();
        break;
    case 2 :
        alrSales();
        break;
    default :
        printf("Invalid Choice. Please try again.\n");
        return 0;
    }
    return 0;
}

void alrSales() {
    char choice3;
     /* a means when they picked add,
     sid stands for sale id */
    char choice3asid[255];
    /* a means when they picked add,
    PID stands for Product id */
    char choice3apid[255];
    /* a means when they picked add,
    SA stands for sold amount */
    char choice3asa[255];
    /* l means they picked list,
    yorn stands for yes or no*/
    char choice3lyorn;

        printf("Would you like too (A)dd, (L)ist, or (R)emove sales?\n");
        scanf("%s", &choice3);
            switch (choice3)
            {
            case 'a' :
                printf("What would you like the ID of the sale you are adding going to be?\n(if you dont know, list the sales list and look for the greatest ID and add 1.)\n");
                scanf("%s", &choice3asid);
                printf("What is the product that you sold id?\n(if you dont know, list the produts and look for the right product's id)\n");
                scanf("%s", &choice3apid);
                printf("How many of the product did you sell?\n");
                scanf("%s", &choice3asa);
                FILE * fpointer = fopen("database-sales.txt", "a");
                fprintf(fpointer, "Sale No.%s - Product ID No.%s - Amount Sold No.%s\n", &choice3asid, &choice3apid, &choice3asa);
                fclose(fpointer);
            break;

            case 'l' :
                printf("This will print the ENTIRE sales database. Are you sure you want to continue? (y/n)");
                scanf("%s", &choice3lyorn);
                switch (choice3lyorn)
                    {
                    case 'y' :
                        /* code */
                        break;
                        
                        case 'y' :
                        /* code */
                        break;
                    
                    default :
                        printf("Invalid Choice. Please try again.\n");
                        return 0;
                    }

            break;

            default :
                printf("Invalid Choice. Please try again.\n");
                return 0;
            break;
            }

}
                

void alrProducts(){


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
