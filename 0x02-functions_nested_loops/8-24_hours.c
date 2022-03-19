#include "main.h"
#include <string.h>
/**
 *
 *
 */
void jack_bauer(void)
{
	char time[5] = {'0','0',':','0','0'};
	
	int w;
	int x;
	int y;
	int z;
	int p;

	for (w = 0; w <= 2; w++)
	{
		time[0] = '0' + w;

		for (x = 0; x <= 4; x++)
		{
			time[1] = '0' + x;
			
			for (y = 0; y <= 5; y++)
			{
				time[3] = '0' + y;

				for (z = 0; z <= 9; z++)
				{
					time[4] = '0' + z;

					for (p = 0; p < 5; p++)
					{
						_putchar(time[p]);
					}
					_putchar('\n');
				}
			}
		}
	}
