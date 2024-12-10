#include<stdio.h>
#include<conio.h>

int main() {
    int a, b, c, d, e, f, total = 0, et = 0, x, more = 1;
    printf("                                THE ENGINEERS CAFE");

    while(more) {
        printf("\n Press number for: \n 1   Patties \n 2   Maggie \n 3   Pastas \n 4   Beverages \n 5   Desserts \n");
        scanf("%d", &a);
        switch(a) {
            case 1: {
                printf("\n Press number for \n ");
                printf("\n PATTIES for \n 1  Veg Patties \n 2  Massala Patties \n 3  Cheese Patties \n 4  TEC. Special Patties \n");
                scanf("%d", &b);
                if(b == 1) {
                    printf("\n Veg Patties ?19");
                    total += 19;
                } else if(b == 2) {
                    printf("\n Massala Patties ?29");
                    total += 29;
                } else if(b == 3) {
                    printf("\n Cheese Patties ?39");
                    total += 39;
                } else if(b == 4) {
                    printf("\n TEC.Special Patties ?69");
                    total += 69;
                }
                printf("\n Your total bill is ?%d", total);
                printf("\n If you want any add-on \n Press 1 for Yes \n Press 0 for No \n ");
                scanf("%d", &x);
                if(x == 1) {
                    printf("\n 1 Extra Namkeen ?15 \n 2 Extra Sauces ?15 \n 3 Extra Cheese Slice ?20 \n 4 Exit \n ");
                    scanf("%d", &f);
                    if(f == 1) {
                        printf("\n Extra Namkeen Added");
                        et += 15;
                    } else if(f == 2) {
                        printf("\n Extra Sauces Added");
                        et += 15;
                    } else if(f == 3) {
                        printf("\n Extra Cheese Added");
                        et += 20;
                    } else if(f == 4) {
                        et = 0; 
                    }
                    total += et;
                }
                printf("\n Your total bill is ?%d", total);
            }
            break;
            case 2: {
                printf("\n Press number for \n ");
                printf("\n Maggie for \n 1 Veg Maggie \n 2 Massala Maggie \n 3 Cheese Maggie \n 4 TEC. Special Maggie \n");
                scanf("%d", &c);
                if(c == 1) {
                    printf("\n Veg Maggie ?29");
                    total += 29;
                } else if(c == 2) {
                    printf("\n Massala Maggie ?39");
                    total += 39;
                } else if(c == 3) {
                    printf("\n Cheese Maggie ?59");
                    total += 59;
                } else if(c == 4) {
                    printf("\n TEC.Special Maggie ?79");
                    total += 79;
                }
                printf("\n Your total bill is ?%d", total);
                printf("\n If you want any add-on \n Press 1 for Yes \n Press 0 for No \n ");
                scanf("%d", &x);
                if(x == 1) {
                    printf("\n 1 Extra Massala ?15 \n 2 Extra Sauces ?15 \n 3 Extra Cheese Slice ?20 \n 4 Exit \n ");
                    scanf("%d", &f);
                    if(f == 1) {
                        printf("\n Extra Massala Added");
                        et += 15;
                    } else if(f == 2) {
                        printf("\n Extra Sauces Added");
                        et += 15;
                    } else if(f == 3) {
                        printf("\n Extra Cheese Added");
                        et += 20;
                    } else if(f == 4) {
                        et = 0; 
                    }
                    total += et;
                }
                printf("\n Your total bill is ?%d", total);
            }
            break;
            case 3: {
                printf("\n Press number for \n ");
                printf("\n Pasta for \n 1 Veg Pasta \n 2 Red Sauce Pasta \n 3 White Sauce Pasta \n 4 TEC. Special Pasta \n");
                scanf("%d", &d);
                if(d == 1) {
                    printf("\n Veg Pasta ?59");
                    total += 59;
                } else if(d == 2) {
                    printf("\n Red Sauce Pasta ?89");
                    total += 89;
                } else if(d == 3) {
                    printf("\n White Sauce Pasta ?99");
                    total += 99;
                } else if(d == 4) {
                    printf("\n TEC.Special Pasta ?169");
                    total += 169;
                }
                printf("\n Your total bill is ?%d", total);
                printf("\n If you want any add-on \n Press 1 for Yes \n Press 0 for No \n ");
                scanf("%d", &x);
                if(x == 1) {
                    printf("\n 1 Extra Spicy ?15 \n 2 Extra Sauces ?15 \n 3 Extra Cheese Slice ?20 \n 4 Exit \n ");
                    scanf("%d", &f);
                    if(f == 1) {
                        printf("\n Extra Spices Added");
                        et += 15;
                    } else if(f == 2) {
                        printf("\n Extra Sauces Added");
                        et += 15;
                    } else if(f == 3) {
                        printf("\n Extra Cheese Added");
                        et += 20;
                    } else if(f == 4) {
                        et = 0; 
                    }
                    total += et;
                }
                printf("\n Your total bill is ?%d", total);
            }
            break;

            case 4: {
                printf("\n Press number for \n ");
                printf("\n Beverages for \n 1 Coffee \n 2 Tea \n 3 Cold Drink \n 4 Juice \n");
                scanf("%d", &e);
                if(e == 1) {
                    printf("\n Coffee ?10");
                    total += 10;
                } else if(e == 2) {
                    printf("\n Tea ?5");
                    total += 5;
                } else if(e == 3) {
                    printf("\n Cold Drink ?20");
                    total += 20;
                } else if(e == 4) {
                    printf("\n Juice ?15");
                    total += 15;
                }
                printf("\n Your total bill is ?%d", total);
                printf("\n Do you want any add-on \n Press 1 for Yes \n Press 0 for No \n ");
                scanf("%d", &x);
                if(x == 1) {
                    printf("\n 1 Extra Ice ?5 \n 2 Extra Sugar ?2 \n 3 Extra Lemon ?3 \n 4 Exit \n ");
                    scanf("%d", &f);
                    if(f == 1) {
                        printf("\n Extra Ice Added");
                        et += 5;
                    } else if(f == 2) {
                        printf("\n Extra Sugar Added");
                        et += 2;
                    } else if(f == 3) {
                        printf("\n Extra Lemon Added");
                        et += 3;
                    } else if(f == 4) {
                        et = 0; 
                    }
                    total += et;
                }
                printf("\n Your total bill is ?%d", total);
            }
            break;
            
            case 5: {
                printf("\n Press number for \n ");
                printf("\n Desserts for \n 1 Cake Slice \n 2 Ice Cream \n 3 Brownie \n 4 TEC. Special Dessert \n");
                scanf("%d", &e);
                if(e == 1) {
                    printf("\n Cake Slice ?25");
                    total += 25;
                } else if(e == 2) {
                    printf("\n Ice Cream ?30");
                    total += 30;
                } else if(e == 3) {
                    printf("\n Brownie ?35");
                    total += 35;
                } else if(e == 4) {
                    printf("\n TEC.Special Dessert ?50");
                    total += 50;
                }
                printf("\n Your total bill is ?%d", total);
                printf("\n Do you want any add-on \n Press 1 for Yes \n Press 0 for No \n ");
                scanf("%d", &x);
                if(x == 1) {
                    printf("\n 1 Extra Topping ?10 \n 2 Extra Sauce ?5 \n 3 Extra Scoop ?8 \n 4 Exit \n ");
                    scanf("%d", &f);
                    if(f == 1) {
                        printf("\n Extra Topping Added");
                        et += 10;
                    } else if(f == 2) {
                        printf("\n Extra Sauce Added");
                        et += 5;
                    } else if(f == 3) {
                        printf("\n Extra Scoop Added");
                        et += 8;
                    } else if(f == 4) {
                        et = 0; 
                    }
                    total += et;
                }
                printf("\n Your total bill is ?%d", total);
            }
            break;
            default:
                printf("\n NO ITEMS OF YOUR CHOICE");
                break;
        }
        
        // Prompt user if they want to order more
        printf("\n Do you want to order more items? Press 1 for Yes, 0 for No: ");
        scanf("%d", &more);
    }

    // Final bill output
    printf("\n Final total bill is ?%d", total);
    getch();
    return 0;
}



