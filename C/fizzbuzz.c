#include <stdio.h>

int main()
{
	//For loop that counts to 100
	for(int i=1; i<=100; i++)
	{
		
		//Prints Fizz on line if # is a multiple of 3
		if(i%3 == 0)
		{
			printf("Fizz");
		}

		//Prints Buzz on line if # is a multiple of 5
		if(i%5 == 0)
		{
			printf("Buzz");
		}
		
		//prints the number if neither condition is true
		if(!(i%5 == 0 || i%3 == 0))
		{
			printf("%d", i);
		}
		
		//Starts a new line for the next loop
		printf("\n");
	}

	return 0;
}
