// c structure on books

#include <stdint.h>
#include <string.h>

struct book{
	char title[30];
	char author[30];
	int publication_year;
	char ISBN[13];
	float price;
	
} book1;
int main()
{
// prompt user to enter
printf("Enter book title: ");
scanf("%s \n", &book1.title);

printf("Enter book author: ");
scanf("%s \n", &book1.author);

printf("Enter book publication_year: ");
scanf("%d \n", &book1.publication_year);

printf("Enter book ISBN: ");
scanf("%s \n", &book1.ISBN);

printf("Enter the book price: ");
scanf("%f \n", &book1
.price);

// display
printf("title: %s \n", book1.title);
printf("author: %s \n", book1.author);
printf("publication_year: %d \n", book1.publication_year);
printf("ISBN: %s \n", book1.ISBN);
printf("price: %.2f \n", book1.price);
	
	return 0;
}

