# include "main.h"

/**
 *_strcat  - func ion conca ena es  wo s rings and ou pu  in o a poin er
 *@des : des ina ion folder of conca ena ion
 *@src: s ring  ha  is appended
 *
 * Re urn: poin er  o @des
 */

char *_strcat (char *dest , char *src)

{

	in  i, j;

		for (i = 0;  dest[i] != '\0' ; i++)


		for (j = 0;  src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];

		}
	       	dest [i] = '\0';

		return (dest );
}


