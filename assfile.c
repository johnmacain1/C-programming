// write a file
#include <stdio.h>
#include <stdlib.h>

void writetoFile(){
	FILE *fptr;
	char sentence[100];
	
	
	//open file in write mode
	fptr = fopen("C:\\Users\\USER\OneDrive\\Desktop\\c program\\c programs\\data.txt", "w");
	if (fptr== NULL){
		printf("Error opening the file.\n");
		exit(1);	
	}
	
	// user to enter the sentence
	printf("Enter a sentance: ");
	 fgets(sentence, sizeof(sentence), stdin);
	
	// write sentence to the file
	fprintf(fptr, "%s", sentence);
	fclose(fptr);
	printf("Sentence written to file succesfully.\n");
		}
		int main()
		{
		writetoFile();	
			return 0;
		}