//array is a data structurein c programming language that that allows user to store data of related data type

#include <stdint.h>

int main()
{
	int i,j;
	// initializing scores
	int scores[2][4]={
	{65,92,35,70},
	{84,72,59,67}
	};
	//print using nestedfor loop
	
	for(i= 0;i<2;i++){
		for(j=0;j<4;j++){
			printf("Element at scores[%d][%d]: %d\n", i, j, scores[i][j]);
			
		}
	}
	return 0;
}