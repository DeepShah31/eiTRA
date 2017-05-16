/**********************************************************************

* Author:      Pritesh B. Patel

* Date:	       03/02/2017	09:30 A.M.

* Email-ID:    pritesh.patel@einfochips.com

* Definition:  what is linear search & binary search?
   	       make a program of both using array.

***********************************************************************/


/******************************************************************************************************************
Question: what is linear search? 

Answer: In computer science, linear search or sequential search is a method for finding a target value within a list.
	It sequentially checks each element of the list for the target value until a match is found or until all the
	elements have been searched.
*******************************************************************************************************************/


/*********************HEADER FILES*************************************/

#include<stdio.h>

/*********************DEFINITION FILES*********************************/

#define MAXSIZE 100

/*********************MAIN SECTION*************************************/
int main()
{
	char chBuffer = '\0';	
	int iArray[MAXSIZE] = {0}, iCount = 0, iNumberofElements = 0, iSearch = 0, iCounter=0;

	printf("Enter number of elements to be entered in Array\n");
	
	/* scan the input for no of elements of array from user and checks whether it is valid input or not. If yes then it proceeds 		 * further and if no then it will take new valid input. 
	*/
	while((scanf("%d%c", &iNumberofElements,&chBuffer) !=2) || chBuffer != '\n') 
	{
		printf("\nInvalid input!!! Please Enter integer values only\n");
		printf("Press \"Enter\":");
		while(getchar() != '\n');
		printf("\rEnter number of elements to be entered in Array\n");
	}

	/* checks whether entered no of elements are less than equal to maxsize or not. If yes then proceeds further to 
           scan elements of aarray and if no then rescan for valid no of elements.
	*/	
	if(iNumberofElements <= 0 || iNumberofElements > MAXSIZE)
	{
		printf("\nnumber of elements exceed the limit.Please enter less than %d elements\n",MAXSIZE);
		return 0;
	}

	else
	{
		printf("enter elements in array\n");
		for(iCount = 0; iCount < iNumberofElements; iCount++)
		{
			printf("please enter Array[%d]\t", iCount);			

			while((scanf("%d%c", &iArray[iCount],&chBuffer) !=2) || chBuffer != '\n') 
			{
				printf("\nInvalid input!!! Please Enter integer values only\n");
				printf("Press \"Enter\":");
				while(getchar() != '\n');
				printf("\renter elements in array\n");
			}
		}

		printf("enter Number to be searched\n");
		
		/* scan the number to be searched from array */
		while((scanf("%d%c", &iSearch, &chBuffer) != 2) || chBuffer != '\n') 
		{
			printf("\nInvalid input!!! Please Enter integer values only\n");
			printf("Press \"Enter\":");
			while(getchar() != '\n');
			printf("\renter Number to be searched\n");
		}

		/* prints the location if match found */
		for(iCount = 0; iCount < iNumberofElements; iCount++)
		{
			if(iArray[iCount] == iSearch)
			{
				printf("\n%d is found at %dth position\n", iSearch, iCount+1);
				iCounter++;			
			}
		}
		
	}

	if(iCounter == 0)
		printf("number not found\n");
	
	else if(iCounter > 1)				// if search no occurs more than once then it prints how many times the search no 								   has occured in array
		printf("%d is found %d times\n", iSearch, iCounter);			

	return 0;
}

