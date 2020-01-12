#include <lpc214x.h>
void delay(unsigned int);
int main(void)
{
	
  IO0DIR=(1<<10);   // Configure P0.10 as Output

  while(1)
  {
   IO0SET=(1<<10);
		delay(250);
	 IO0CLR=(1<<10);
		delay(250);
  }
	
}
  void delay(unsigned int count)
	{
		unsigned int i,j;
		for(j=count;j>0;j--)
		{
		for(i=0;i<count;i++);
		}
	}