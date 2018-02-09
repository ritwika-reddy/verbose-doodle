#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXIMUM_TWEETS 528

struct live_feed {
	double tweets;
	double retweets;
	int update;
};

void launch(char * cursor, int feed_count)
{
	struct live_feed buffer[MAXIMUM_TWEETS];
<<<<<<< HEAD
	printf("%d %d\n", feed_count, MAXIMUM_TWEETS);
	if (feed_count < MAXIMUM_TWEETS) 
	{       
		memcpy(buffer, cursor, feed_count * sizeof(struct live_feed));
		printf("Yes I wrote it\n");
=======
	
	if (feed_count < MAXIMUM_TWEETS) 
	{       
		memcpy(buffer, cursor, feed_count * sizeof(struct live_feed));
>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
	}
}

int main(int argc, char * argv[])
{
	int feed_count;
	char * cursor;
	
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s [number of tweets],[data]\n", argv[0]);
		exit(EXIT_FAILURE);
	}

<<<<<<< HEAD
	//  The function stroul, converts the string argv[1] into a signed integer of base 10 and stores the rest of the string in cursor
	feed_count = strtoul(argv[1], &cursor, 10);
	
	// If the first character in the string cursor is not ',' or if the length of the remaining string is not 
	// as much as the  feed_count * size of the live_feed, i.e the data is not as long as promised, then emit an error. 

	// This attack should be based on integer overflows since feed_count is an integer.   
	
	// feed_count, is a user input. It is passed as an argument. Since it is an integer
	// it can be negative but when we compare it with unsigned integers, the same integer
	// can be looked at as a very big unsigned integer as 1 used to indicate the negative
	// numbers can also be looked at as a very big unsigned integer. 
	
	// In the multiplication of unsigned and signed integers, a negative signed integer is 
	// implicitly converted into an unsigned integer which is a very large number during to the MSB being 1. 
			
	printf("%d\n",feed_count);
	printf("%lu\n", sizeof(struct live_feed)); 	
	printf("%lu\n",sizeof(struct live_feed) * feed_count); 
	printf("%lu\n",strlen(cursor+1)); 
	printf("%c\n",*cursor);
	size_t a = strlen(cursor + 1); 
	size_t b = sizeof(struct live_feed) * feed_count; 
	printf("%d %lu %lu\n",a<b,a,b);
	printf("%d %lu %lu\n",(strlen(cursor + 1) < (sizeof(struct live_feed) * feed_count)),strlen(cursor + 1),sizeof(struct live_feed) * feed_count ); 
=======
	feed_count = strtoul(argv[1], &cursor, 10);
	
>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
	if ((*cursor != ',') || (strlen(cursor + 1) < sizeof(struct live_feed) * feed_count))
	{
		fprintf(stderr, "Usage: %s [number of tweets],[data]\n", argv[0]);
		exit(EXIT_FAILURE);		
	}
<<<<<<< HEAD
	printf("%lu\n", sizeof(struct live_feed)); 	
=======

>>>>>>> 09c9c258a26ea20a34ea41af45b590491a12e7fc
	cursor = cursor + 1;	
	launch(cursor, feed_count);
	return(0);
}
