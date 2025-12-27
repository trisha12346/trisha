#include<stdio.h>

int main()
{
    int MenuCard,gujaratiDish,qty,southIndianDish,northIndianDish,italianDish;
    int total=0;
    char choice;

    char item[50][30];
    int price[50], quantity[50];
    int i = 0;
    
    do
    {
            printf("\n============MENU============");
            printf("\nSelect your Choice:");
            printf("\n 1) ------Gujarati");
            printf("\n 2)-------South Indian");
            printf("\n 3)-------North Indian");
            printf("\n 4)-------Italian");
            scanf("%d",&MenuCard);

        switch(MenuCard)
        {
            case 1: printf("\nYour choice is gujarati");
                    printf("\nWhat you like to choose:");
                    printf("\n1)------Dhokla        Rs.50");
                    printf("\n2)------khandvi       Rs.70");
                    printf("\n3)------Fafda         Rs.400");
                    printf("\n4)------Jalebi        Rs.340");
                    printf("\n5)------Handvo        Rs.80");
                    scanf("%d",&gujaratiDish);
                    printf("\nEnter quantity: ");
                    scanf("%d", &qty);

                    if(gujaratiDish==1)
                    {
                        sprintf(item[i],"Dhokla");
                        price[i]=50;
                    }else if(gujaratiDish==2)
                    {
                        sprintf(item[i],"Khandvi");
                        price[i]=70;
                    }else if(gujaratiDish==3)
                    {
                        sprintf(item[i],"Fafda");
                        price[i]=400;
                    }else if(gujaratiDish==4)
                    {
                        sprintf(item[i],"Jalebi");
                        price[i]=340;
                    }else if(gujaratiDish==5)
                    {
                        sprintf(item[i],"Handvo");
                        price[i]=80;
                    }else
                    {
                        printf("Invalid choice");
                    }

                    quantity[i] = qty;
                    total += price[i] * qty;
                    i++;

                    break;

            case 2: printf("\nYour choice is south indian");
                    printf("\nWhat you like to choose:");
                    printf("\n1)------Idli          Rs .80");
                    printf("\n2)------Dosa          Rs.260");
                    printf("\n3)------Upam          Rs.110");
                    printf("\n4)------wada          Rs.200");
                    printf("\n5)------Rice          Rs.270");
                    scanf("%d",&southIndianDish);
                    printf("\nEnter quantity: ");
                    scanf("%d", &qty);

                    if(southIndianDish==1)
                    {
                        sprintf(item[i],"idli");
                        price[i]=80;
                    }else if(southIndianDish==2)
                    {
                        sprintf(item[i],"dosa");
                        price[i]=260;
                    }else if(southIndianDish==3)
                    {
                        sprintf(item[i],"upam");
                        price[i]=110;
                    }else if(southIndianDish==4)
                    {
                        sprintf(item[i],"wada");
                        price[i]=200;
                    }else if(southIndianDish==5)
                    {
                        sprintf(item[i],"rice");
                        price[i]=270;
                    }else
                    {
                        printf("Invalid choice");
                    }

                    quantity[i] = qty;
                    total += price[i] * qty;
                    i++;
                    
                    break;

            case 3: printf("\nyour choice is North indian");
                    printf("\nWhat you like to choose:");
                    printf("\n1)------paneer             Rs.340");
                    printf("\n2)------Naan               Rs.150");
                    printf("\n3)------dal                Rs.200");
                    printf("\n4)------chole              Rs.250");
                    printf("\n5)------paratha            Rs.260");
                    scanf("%d",&northIndianDish);
                    printf("\nEnter quantity: ");
                    scanf("%d", &qty);

                    if(northIndianDish==1)
                    {
                        sprintf(item[i],"paneer");
                        price[i]=340;
                    }else if(northIndianDish==2)
                    {
                        sprintf(item[i],"naan");
                        price[i]=150;
                    }else if(northIndianDish==3)
                    {
                        sprintf(item[i],"dal");
                        price[i]=200;
                    }else if(northIndianDish==4)
                    {
                        sprintf(item[i],"chole");
                        price[i]=250;
                    }else if(northIndianDish==5)
                    {
                        sprintf(item[i],"paratha");
                        price[i]=260;
                    }else
                    {
                        printf("Invalid choice");
                    }

                    quantity[i] = qty;
                    total += price[i] * qty;
                    i++;
                    
                    break;

            case 4: printf("\nYour choice is italian");
                    printf("\nWhat you like to choose:");
                    printf("\n1)------pasta              Rs.200");
                    printf("\n2)------pizza              Rs.450");
                    printf("\n3)------crossiant          Rs.220");
                    printf("\n4)------falafel            Rs.150");
                    printf("\n5)------Tiramisu           Rs.260");
                    scanf("%d",&italianDish);
                    printf("\nEnter quantity: ");
                    scanf("%d", &qty);

                    if(italianDish==1)
                    {
                        sprintf(item[i],"pasta");
                        price[i]=200;
                    }else if(italianDish==2)
                    {
                        sprintf(item[i],"pizza");
                        price[i]=450;
                    }else if(italianDish==3)
                    {
                        sprintf(item[i],"crossiant");
                        price[i]=220;
                    }else if(italianDish==4)
                    {
                        sprintf(item[i],"falafel");
                        price[i]=150;
                    }else if(italianDish==5)
                    {
                        sprintf(item[i],"tiramisu");
                        price[i]=260;
                    }else
                    {
                        printf("Invalid choice");
                    }

                    quantity[i] = qty;
                    total += price[i] * qty;
                    i++;

                    
                    break;

            default:("sorry for inconvience");

           
        }
        printf("\nDo u want to add more?  (Yes/No)");
        scanf(" %c",&choice);

    }while(choice=='Y' || choice=='y');

        
         printf("\nItem\t\tQty\tRate\tAmount");
         printf("\n------------------------------------------------------");

         for (int j = 0; j < i; j++)
        {
                printf("\n%s", item[j]);
                if (strlen(item[j]) <= 5)
                        printf("\t\t");
                else
                        printf("\t");

                printf("%d\t%d\t%d",
                quantity[j],
                price[j],
                quantity[j] * price[j]);
        }

        printf("\n---------------------------------------------------------");
        printf("\nTotal Bill:\t\t\t%d", total); 

    

    return 0;
}