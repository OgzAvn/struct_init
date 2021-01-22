


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint8_t carSpeed;
	uint32_t carPrice;
};

int main(void)
{

	printf("Sizeof of struct carModel is %u\n",sizeof(struct carModel));

    getchar();

	return 0;
}









