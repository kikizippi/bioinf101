#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

int i,len; 

char seq[ 5000 ];

for ( i=0 ; i<10 ; i++ )
	{
		scanf ("%s", seq);

		len = strlen( seq );

		printf ( "the lenght is %d \n" , len );

	}
}
