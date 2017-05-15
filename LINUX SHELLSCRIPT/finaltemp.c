#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct customer{
    char name[30];
    long long int contact_no;
    char medicine[10][10];
    int quantity[10];
    int count;
}cust;
void add_customer() {
        int i;
        FILE *fp;
        fp=fopen("deep.txt","a");
        printf("ENTER CUSTOMER NAME\n");
        scanf("%s",cust.name);
        printf("ENTER CUSTOMER CONTACT_NO\n");
        scanf("%llu",&cust.contact_no);
        printf("ENTER MEDICINE\n");
        scanf("%s",cust.medicine[0]);
        printf("ENTER QUANTITY");
        scanf("%d",&cust.quantity);
         fwrite(&cust,sizeof(struct customer),1,fp);
         fclose(fp);
}
int  search(char name[]) {   
    FILE *fp = fopen("deep.txt","r");
    int flag=-1;
	while (fread(&cust,sizeof(struct customer),1,fp)) {
        if (strcmp(cust.name,name)==0)
        {
                printf("%s is found in DATABASE\n",name);
                flag = 1;
                return 1;
        }
        else 
          flag = 0;
    }
    if(!flag)
      return 0; 
}
void update_customer_info(char name[],long long int contact_no,char medicine[][10],int quantity) {
         
        FILE *fp = fopen("deep.txt","r+");
        int flag=-1;
        //printf("%s\n",name );
         while(fread(&cust,sizeof(struct customer),1,fp)) 
                if (strcmp(cust.name,name)==0)
                {
                      printf("hello");
                printf("%s is found in DATABASE\n",name);
                cust.contact_no=contact_no;          
                strcpy(cust.medicine[0],medicine[0]);
                strcpy(cust.medicine[1],medicine[1]);
                cust.quantity=quantity;
                fseek(fp,-sizeof(cust),SEEK_CUR);
                fwrite(&cust,sizeof(struct customer),1,fp);
                flag = 1;
                 fclose(fp);
                }
                else 
                      flag = 0;
              }
              
void read()
{
    FILE *fp=fopen("deep.txt","r");
    FILE *fp1=fopen("report.txt","w");
       while(fread(&cust,sizeof(struct customer),1,fp1)) 
       {
        printf("enter customer name\n");
         scanf("%s",cust.name);
        int a=search(cust.name);
        if (a==1){
           for (int i = 0; i <=cust.count; ++i)
           {
              fprintf(fp1,"%s",cust.medicine[i]);
              fprintf(fp1,"\t%d",cust.quantity[i]);

         }
} 
}
}
int main() {
       
    char name[20];
    long long int contact_no;
    char medicine[10][10];
    int quantity;
    int choice,a,b;
    int count1;
    
    while(1){
    printf("press 1 ADD CUSTOMER\n");
    printf("press 2 SEARCH CUSTOMER\n");
    printf("press 3 UPDATE CUSTOMER\n");
    printf("press 4 DISPLAY CUSTOMER LIST\n");
    printf("press 5 READING DATA FROM FILE\n");
    printf("ENTER CHOICE\n");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
        {
        printf("#####################################\n");
        printf("THIS IS THE MODULE OF ADD CUSTOMER\n");
        printf("#####################################\n");
        
        add_customer(name,contact_no,medicine,quantity,2);
        break;
        }
        case 2:
        {
        printf("#####################################\n");
        printf("THIS IS THE MODULE OF SEARCH CUSTOMER\n");
        printf("#####################################\n");
        printf("ENTER NAME OF CUSTOMER YOU WANT TO SEARCH\n");
        scanf("%s",name);
        search(name);
        break;
        } 
        case 3:
        {
        printf("#####################################\n");
        printf("THIS IS THE MODULE OF UPDATE CUSTOMER\n");
        printf("######################################\n");
        printf("ENTER CUSTOMER NAME\n");
        scanf("%s",name);
        printf("ENTER CUSTOMER CONTACT_NO\n");
        scanf("%llu",&contact_no);
        printf("ENTER MEDICINE\n");
        scanf("%s",medicine[0]);
        printf("ENTER QUANTITY");
        scanf("%d",&quantity);
        update_customer_info(name,contact_no,medicine,quantity);
        break;
        }
        case 4:
        {
         FILE *fp ;
         fp=fopen("deep.txt","r");
         while(fread(&cust,sizeof(struct customer),1,fp))
         printf ("\ncustomer Name= %s\ncontact number= %llu\nname of Medicine= %s\nname of Medicine= %s\nmedicine quantity is= %d\n",cust.name,cust.contact_no,cust.medicine[0],cust.medicine[1],cust.quantity);
         break;
        }
}
}
        return 0;
}