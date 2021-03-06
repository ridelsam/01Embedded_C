
/*
 * main.c
 *
 *  Created on: Jan 15, 2022
 *      Author: rsamonte
 */




#include<stdint.h>
#include<stdio.h>

union Packet
{
	uint32_t packetValue;

	struct
	{
		uint32_t	crc			:2;
		uint32_t	status		:1;
		uint32_t	payload		:12;
		uint32_t	bat			:3;
		uint32_t	sensor		:3;
		uint32_t	longAddr	:8;
		uint32_t	shortAddr	:2;
		uint32_t	addrMode	:1;
	} packetFields;

};


void wait_for_user_input (void);

int main(void)
{



	union Packet packet;



	printf("Enter the 32bit packet message: ");
	scanf("%X", &packet.packetValue);

	printf("crc = %#X\n", packet.packetFields.crc);
	printf("status = %#X\n", packet.packetFields.status);
	printf("payload = %#X\n", packet.packetFields.payload);
	printf("bat = %#X\n",packet.packetFields.bat);
	printf("sensor = %#X\n", packet.packetFields.sensor);
	printf("long_addr = %#X\n", packet.packetFields.longAddr);
	printf("short_addr = %#X\n", packet.packetFields.shortAddr);
	printf("addr_mode = %#X\n", packet.packetFields.addrMode);
	printf("Size of struct is %llu\n", sizeof(packet));





	wait_for_user_input();

	return 0;

}




void wait_for_user_input (void)
{
	printf("Press enter key to exit\n");

	while(getchar() != '\n'){

			//just read the input buffer and do nothing
	}
	getchar();


}

















