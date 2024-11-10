#include <stdio.h>
int main(){
	char paragraph[200];
	FILE*fptr;
	
	fptr=("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\c programs\\output.txt", "a");
	
	if(fptr==NULL){
		printf("Empty");
		exit(1);
	}
	printf("write the paragraph: ");
	scanf("%s", &paragraph);
	fprintf(fptr, "This is the paragraph: %s \n", paragraph);
	
	fclose(fptr);
	printf("Succefully done");
	
	return 0;
}