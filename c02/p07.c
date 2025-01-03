#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

int max,i,len;
char seq[ 5000 ];
max = 0;

for ( i=0 ; i<10 ; i++ )
	{
		scanf ("%s", seq);
		len = strlen( seq );
		if ( len > max ) 
			{
				max = len;
			}
	}

printf ( "the lenght is %d \n" , max );

}
