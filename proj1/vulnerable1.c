#include <stdio.h>
#include <stdlib.h>
#include <string.h>

<<<<<<< HEAD
#define BUFFER_SIZE 20
/*
	This is a buffer oveflow attack, a check is not being performed right ? 
	Inside the function launch, we should first check if size of (buffer) is less
	than BUFFER_SIZE. If it is not, there is a possibility that the strcpy operation 
	can overwrite the return address and also it can inject some code onto the stack,
	and since the stack has not been made non-executable, the injected code can be 
	executed if the return address is pointed to that. 
*/
=======
#define BUFFER_SIZE 200

>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
void launch(char * user_argument)
{
	char buffer[BUFFER_SIZE];
	strcpy(buffer, user_argument);
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
