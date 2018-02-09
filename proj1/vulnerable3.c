#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 192

<<<<<<< HEAD
/* In the function strcpyn, the error is just off by one, we are comparing i to be
   less than or equal to length where as it should be length -1  
 */
=======
>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
void strcpyn(char * destination, unsigned int destination_length, char * source, unsigned int source_length)
{
	unsigned int i;
	
	for (i = 0; i <= destination_length && i <= source_length; i++)
		destination[i] = source[i];
}

void copy_user_argument(char * user_argument, unsigned int argument_length)
{
	char buffer[BUFFER_SIZE];
	strcpyn(buffer, sizeof(buffer), user_argument, argument_length);
}

<<<<<<< HEAD
// strlen returns the length of the string, returns size_t  
=======
>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
void launch(char * user_argument)
{
	copy_user_argument(user_argument, strlen(user_argument));
}

int main(int argc, char * argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s ARGUMENT\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	launch(argv[1]);
	return(0);
}
