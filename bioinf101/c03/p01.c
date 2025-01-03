#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{

int i,len;
char seq[ 5000 ];
float gc, percent;
gc = 0;

scanf ("%s", seq);
len = strlen( seq );

for ( i=0 ; i<len ; i++ )
	{
		if ( seq [i] == 'G' || seq [i] == 'C' ) 
			{
				gc = gc + 1;
			}
	}

percent = ( gc / len ) * 100;

printf ( "The GC content is %f %%  \n" , percent );

}
