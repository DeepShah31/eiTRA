#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"MSM_Header.h"



void show_report()
{
        FILE *fp_bill = fopen("bill.dat","r");
        char daytab[2][13] = {{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
                              { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } };
        int i;
        int sday,syear,smonth; //Starting Date
        int eday,eyear,emonth; //Ending Date
        struct Bill bill;
        double turnover;
        printf("Enter Range of Dates in format :- 31 (space) 12 (space) 2017 :\n\n");
        printf("Enter Start Date :\n");
        scanf("%d %d %d",&sday,&smonth,&syear);
        printf("Enter End Date :\n");
        scanf("%d %d %d",&eday,&emonth,&eyear);
        int sleap=0,eleap=0;
        if((syear%4 == 0 && syear%100 != 0 ) || syear%400 == 0)
                sleap = 1;
        if((eyear%4 == 0 && eyear%100 != 0 ) || eyear%400 == 0)
                eleap = 1;
        system("clear");
        if( syear <= eyear)
        {
                if(sday > 0 && sday <= daytab[sleap][smonth] && eday > 0 && eday <= daytab[eleap][emonth])
                while(fread(&bill,sizeof(bill),1,fp_bill))
                {
                        if(bill.year >= syear && bill.year <= eyear)
                        {
                                if(bill.month >= smonth && bill.month <= emonth )
                                {
                                        printf("\n");
                                        printf("Date: %d-%d-%d Time : %d:%d:%d\n", bill.year, bill.month, bill.day, bill.hour, bill.minute, bill.second);
                                        printf("Customer Name : %s\n",bill.cstmr.name);
                                        for ( i = 0; i < bill.cstmr.medi_count; ++i)
                                        {
                                                printf("%s",bill.cstmr.medicine[i]);
                                                printf("\t\t\t%d\n",bill.cstmr.quantity[i]);
                                        }
                                        printf("Total : %f\n",bill.cstmr.total);
                                        turnover = turnover + bill.cstmr.total;
                                }
                        }
                }
                printf("\n\n--------------------------Turnover : %lf Rs----------------------------",turnover);
        }
        else
                printf("--------------------- !!! Invalid range of dates !!! ------------------------------\n");



}
