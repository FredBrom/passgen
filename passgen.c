/* This program generates random passwords that contains lower and upper case letters,
 * digits and special chars.
 * A control string must be provided at the program call:
 * 		passgen "aaAAnnee"
 * where:
 *  A - Upper Case.
 *  a - Lower Case.
 *  n - Digit between 0 and 9.
 *  e - Special Character { !, @, #, $, %, &, ?, _}.*/


//Lower Alpha (65 - 90)
//Upper Alpha (97 - 122)
//Number      (48 - 39)
//Special char {'!', '@', '#', '$', '$', '%', '&', '?', '_'}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char upper_gen();
char lower_gen();
char num_gen();
char spechar_gen();

void generate_password(char *ctr_string);

/* Special char set */
const char spec_set[] = {'!', '@', '#', '$', '%', '&', '?', '_'};

int main(int argc, char *argv[])
{
	srand(time(NULL));
	
	if (argc <= 1)
	{
		printf("Control string is missing.\n");
	}
	else
	{
        /* Verify if user set the number of passwords */
		if (argc == 2) 
		{
			generate_password(argv[1]);	
		}
		else
		{
			int i;
			int n;
			n = atoi(argv[1]);
			for (i = 0; i < n; i++)
			{
				generate_password(argv[2]);
			}
		}
	}

	
	return 0;	
}

char upper_gen()
{
	return (65 + rand()%((90-65)+1));
}

char lower_gen()
{
	return (97 + rand()%((122-97)+1));
}

char num_gen()
{
	return (48 + rand()%((57-48)+1));
}

char spechar_gen()
{
	return spec_set[rand()%8];
}

void generate_password(char *ctr_string)
{
	int i;
	i = 0;
	while (ctr_string[i] != '\0')
	{
		if (ctr_string[i] == 'a')
			printf("%c", lower_gen());
		else if (ctr_string[i] == 'A')
			printf("%c", upper_gen());
		else if (ctr_string[i] == 'n')
			printf("%c", num_gen());
		else if (ctr_string[i] == 'e')
			printf("%c", spechar_gen());
		i++;
	}
	printf("\n");
}
