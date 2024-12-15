/*Welcome to Tasty Treats Cafe: Bill Calculator
Develop below scenario program and take all the input from the user by using scanf().
Title: "Tasty Treats Cafe: Bill Calculator" Introduction:
Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to
satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you!
Let's calculate your bill based on your preferences.
Question:
How many cups of tea, cups of coffee, and biscuits would you like to order?
Instructions:
Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10.
Please provide the quantity for each item you wish to order.
Example:
Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please." Bill
Calculation:
2 cups of tea × ₹15 = ₹30
1 cup of coffee × ₹25 = ₹25*/
#include<stdio.h>
int main(){
     int item1 = 15, item2 = 25, item3 = 10,item;
    int bill=0,quantity=0;
    printf("===============");
    printf("Tasty Treats Cafe !");
    printf("===============\n");
    printf("                    ");
    printf("Bill Calculator\n");
    printf("Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings. \n");
    printf("Choose your product by entering related number :\n");
    printf("1. Cup of Tea    15 Rupees\n");
    printf("2. Cup of cofee  25 Rupees\n");
    printf("3. Biscuits      10 Rupees\n");
    printf("4. Bill\n");
    printf("5. Exit\n");
a:;
    printf("\nEnter your chice :");
    scanf("%d", &item);
    if (item != 4 && item != 5)
    {
        printf("Enter quantity  :");
        scanf("%d", &quantity);
    }
    switch (item)
    {
    case 1:
        bill = bill + (item1 * quantity);
        goto a;
        break;
    case 2:
        bill = bill + (item2 * quantity);
        goto a;
        break;
    case 3:
        bill = bill + (item3 * quantity);
        goto a;
        break;
    case 4:
    {
        printf("your bill %d Rs.", bill);
        goto a;
        break;
    }
    case 5:
        printf("thank u for coming here.");
        printf("\nBYE");
        return 0;
    default:
        printf("choose right number");
        goto a;
    }
    return 0;
}