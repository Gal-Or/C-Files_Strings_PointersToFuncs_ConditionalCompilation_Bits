/////////////////////////////////////////
//NAMES : GAL OR , ID : 316083690      //
//		  KORAL NATAF , ID: 208726257  //
//***We solved all permission tasks****//
/////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Seq.h"

#define PRINT_SEQUENCES // if we dont want all prints -> cancel the define

int main(int args, char* argc[]) {
	if (args != 3) {
		printf("Wrong number of argument! Only two argument is allowed\nPlease enter two file names and try again!\n"); //if did not have 2 file names
		return;
	}

	int res, n, temp, maxN;
	char* SEQ1 = createSequence(argc[1]); //create sequence 1
	char* SEQ2 = createSequence(argc[2]); //create sequence 2
	maxN = strlen(SEQ1) - strlen(SEQ2);

	printf("Please Enter Number Of Chars To Skip ( between 0 - %d chars) : ", maxN);
	temp = scanf("%d", &n);
	while (n > maxN || n<0)
	{
		printf("Number Of Chars To Skip Must Be Between 0 - %d Chars! Please Try Again: ", maxN);
		temp = scanf("%d", &n);
	}
	
	res = evaluateDifference(SEQ1, SEQ2, n);

#ifdef PRINT_SEQUENCES

	printf("%s\n", SEQ1);
	for (int i = 0; i < n; i++)
		printf(" ");
	printf("%s\n", SEQ2);

	int newSize, size = strlen(SEQ2);
	getNewSize(&newSize, size);
	char* SEQ3 = createSigns(SEQ1, SEQ2, n);
	printSigns(SEQ3, newSize, size, n);
	free(SEQ3);

#endif

	//////// ****** permission tasks solution from here!! ******* /////////
	printf("\nEvaluate The Difference Between SQE1 And SEQ2 Calculate By:  Count Stars - Count Colons = %d\n", res);
	Pair* pairs = createAllPairs(SEQ1, SEQ2);

	printf("\nThe Sorted Array Of All Pairs Is : \n ");
	for (int i = 0; i < maxN; i++) {
		printf("(%d,%d) ", pairs[i].n, pairs[i].p);
	}
	printf("\n");

	Pair pairToSearch = { 5,-5 }; // search a pair that the value of p is -5
	Pair* foundPair = findLocation(pairs, pairToSearch, (maxN));

	if (!foundPair)
		printf("Pair Not Found...\n");
	else
		printf("\nThe Found Pair Is (%d,%d) \n", foundPair->n, foundPair->p);

	free(SEQ1);
	free(SEQ2);
	
}