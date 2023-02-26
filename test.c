#include <stdio.h>
#include <time.h> // delay  함수. 1000 = 1초

void delay(clock_t n)
{
  clock_t start = clock();
  while(clock() - start < n);
}

void destTime(int sel)
{
	unsigned int dest[9]={70, 130, 190, 310, 610, 910, 1210, 1810, 3610};
	/*1M 2M 3M 5M 10M 15M 20M 30M 60M 각각 10초를 더한 값*/
	
	for(int i=dest[sel-1]; i>=0; i--) {
		printf(" %4d", i);
		delay(1000);
		printf(" \b\b\b\b\b\b\b\b");
		if(i==0)
			printf("\n- TIME OVER -\n");
	}
}

int main(int argc, char* argv[])
{
	//putchar('\n');
	unsigned int sel=0;


	for(;;) {
	printf("Select 1  2  3  4  5   6   7   8   9\n");
	printf("Time   1M 2M 3M 5M 10M 15M 20M 30M 60M\n");
	scanf(" %d", &sel);
	
	if(sel > 0 && sel < 10)
  	destTime(sel);
 }

 //system("PAUSE");

	return 0;
}