#include<LPC214x.h>
void delay()
{
    unsigned int i=0;
	while(i<2000)
	{
	i++;
	}
}
int main()
{
IODIR0 |=(0x01<<16);
while(1)
{
IOSET0 |=(0x01<<16);
delay();
IOCLR0 |=(0x01<<16);
delay();

}
}
