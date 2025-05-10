/*You are the owner of a bakery shop and need to create a program to generate invoices for your
customers. The program should prompt the user to enter the item they want to buy, the quantity they
wish to purchase, and the price of the item. Based on this input, the program should calculate the total
cost and display an invoice with all the details, including the item, quantity, price per item, and total
cost. At the end of the invoice, don't forget to thank the user for shopping at your bakery shop. Your
task is to write a C program that accomplishes this.
Instructions:
 Display a welcome message along with a separator line to greet the customer.
 Prompt the customer to enter the quantity they wish to purchase and store it in an integer
variable.
 Get the price of the item from the customer and store it in a floating-point variable.
 Calculate the total cost by multiplying the price with the quantity.
 Display the invoice with all the details, including item, quantity, price per item, and total cost.
 Make sure the total cost is displayed with two decimal places.
 End the invoice with a thank-you message for shopping at your bakery shop. */
#include<stdio.h>
int main(){
    int item1=350,item2=450,item3=650,item4=750,item5=200,item;
     int bill;
    printf("===============");
    printf("Welcome Sanaya bakery shop.");
    printf("===============\n");
    printf("                    ");
    printf("GOOD MORNING\n");
    printf("Choose your product by entering related number :\n");
    printf("1. Cocklate cake  350\n");
    printf("2. pineapple Cake. 450\n");
    printf("3. Strawberry  Cake. 650\n");
    printf("4. vanila Cake.  750\n");
    printf("5. Normal cake Cake. 200\n");
    printf("6. Bill\n");
    printf("7. Exit\n");
    a:;
    printf("Enter your chice :");
    scanf("%d",&item);
    if(item!=6 || item!=7){
    printf("Enter quantity  :");
    int quantity;
    scanf("%d",&quantity);
    }
    switch(item){
        case 1:bill=bill+(item1*quantity);
        goto a;
        break;
        case 2:bill=bill+(item2*quantity);
        goto a;
        break;
        case 3:bill=bill+(item3*quantity);
        goto a;
        break;
        case 4:bill=bill+(item4*quantity);
        goto a;
        break;
        case 5:bill=bill+(item5*quantity);
        goto a;
        break;
        case 6:printf("your bill %d Rs.",bill);
        goto a;
        break;
        case 7:printf("thank u for coming here.");
               printf("\nBYE");
               return 0;
        default:printf("choose right number");
        goto a;
              
    }
    return 0;

}