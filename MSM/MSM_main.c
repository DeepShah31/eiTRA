#include<stdio.h>
#include<stdlib.h>
#include"MSM_Header.h"

void main()
{
        char cust_name[20];
        char medi_name[20];
        int medi_quantity;
        int choice;
        do{
                //system("clear");
                printf("\n\n");
      printf("************************************************************************************************************************************************");
      printf("\n\n\t\t\t\t\t\t\t\tMEDICAL STORE\n\n");
      printf("************************************************************************************************************************************************");
      printf("\n\nMain Menu : ");
   printf("\nEnter\n     1- Add Medicine\n     2- Sell Medicine\n     3- Buy Medicine\n     4- Search Medicine\n     5- Delete Medicine\n     6- View Current Medicine Stock\n     7- Show Report\n     8- Search Customer\n     9- Exit\n\n");
                printf("Enter your choice : ");
                scanf("%d",&choice);
                system("clear");
                switch(choice)
                {
                case 1 : add_medicine();      //Statements to call functions of Add Medicines
                         break;
                case 2 : sell_medicine();     //Statements to call functions of Sell Medicines
                         break;
                case 3 :
                         printf("Enter Medicine Name: ");
      	 	         scanf("%s",medi_name);
          		 printf("Enter Medicine Quantity: ");
          		 scanf("%d",&medi_quantity);
          		 buy_medicine(medi_name,medi_quantity);   //Generate Report of Sold/Bought items
                        break;
                case 4 :
                      {
                       FILE *fp;
                       struct Medicine md;
         	       fp=fopen("medicine.dat","r");
          	       printf("Enter Medicine Name: ");
                       scanf("%s",medi_name);
                       int a= search_medicine(medi_name,fp);
                       if(a == 0)
                         printf("%s not found in your database\n",medi_name);
                       else
             		 {
             		         printf("Medicine Found :-\n");
             		          while (fread(&md, sizeof(md),1,fp))   {
                                        if(strcmp(md.medi_name,medi_name)==0)   {
                                                printf("Medicine Found :-\n\n");
                                                printf("%s\n",md.medi_name);
                                                printf("%f\n",md.medi_price);
                                                printf("%d\n",md.medi_quantity);
                                                printf("%s\n",md.supp_name);
                                                printf("%lu\n",md.supp_cont);
                                                printf("%s\n",md.id);
                                                break;
                                        }
                                }
             		 }
        	      }
		      break;
                case 5 :
                        delete_medicine();
                        break;
                case 6 :
                        stock();
                        break;
                case 7 :
                        show_report(); //Report;
                        break;
                case 8 :
                        {
                                char name[20];
                                long int contact;
                        printf("Enter customer name :");
                        scanf("%s",name);
                        printf("Enter contact no :");
                        scanf("%lu",&contact);
                        if(search_cust(name,contact) == 0)
                            printf("%s not found in Database.\n",name);
                        }
                        break;
                case 9 :
                        break;
                default : printf("\n!! .. Invalid choice .. !!\nPlease Enter valid choice from Menu.");
                        break;
                }
        }while(choice!=9);
}
