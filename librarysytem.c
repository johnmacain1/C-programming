//calculating fine for overdue library books
#include<stdio.h>

int main(){
	//declaration and initilation
	int bookID;
	int dueDate; //number of days allowed to stay with the book
	int returnDate; //number of days returned after borrowing the boob
	int daysoverdue;
	int fineRate;
	int fineAmount;
	
	printf("Enter the booID: ");
	scanf("%d", &bookID);
	
	
	printf("Enter dueDate: ");
	scanf("%d", &dueDate);
	
	printf("Enter the returnDate: ");
	scanf("%d", &returnDate);
	
	//calculating days overdue
	daysoverdue = returnDate-dueDate;
	
	if(daysoverdue<=0){
		fineRate =0;
	}
	else if(daysoverdue<=7){
		fineRate =20;
	}
	else if(daysoverdue<=14){
		fineRate = 50;
	}
		else{
			fineRate =100;
		}
		//calculating fineAmount
		fineAmount =daysoverdue*fineRate;
		
		// to be displayed
		printf("the bookID is %d \n", bookID);
		printf("dueDate is %d days \n", dueDate);
		printf("daysoverdue %d days \n", daysoverdue);
		printf("fineRate is %d ksh \n", fineRate);
		printf("fineAmount %d ksh \n", fineAmount);
		printf("returnDate is %d days \n", returnDate);
		
	return 0;
}