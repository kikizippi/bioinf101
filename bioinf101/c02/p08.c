#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

int max,len;
char seq[ 5000 ];
max = 0;

while (	scanf ("%s", seq) == 1 )
	{
 		len = strlen( seq );
		if ( len > max ) 
			{
				max = len;
			}
	}

printf ( "the lenght is %d \n" , max );

}
