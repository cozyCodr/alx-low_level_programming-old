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
	for (w = 0; w <= 2; w++)
	{
		//add value of w to time array
		time[0] = '0' + w;

		//Second digit from the left
		int x;
		for (x = 0; x <= 4; x++)
		{
			time[1] = '0' + x;
			
			//third digit
			int y;
			for (y = 0; y <= 5; y++)
			{
				//add third to array
				time[3] = '0' + y;

				//fourth digit
				int z;
				for (z = 0; z <= 9; z++)
				{
					//add fourth to array
					time[4] = '0' + z;

					//print time
					int p;
					for (p = 0; p < 5; p++)
					{
						_putchar(time[p]);
					}
					_putchar('\n');
				}
			}
		}
	}
