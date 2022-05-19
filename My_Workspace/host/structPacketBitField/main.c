/*
 * main.c
 *
 *  Created on: Jan 15, 2022
 *      Author: rsamonte
 */




#include<stdint.h>
#include<stdio.h>

struct Packet
{
	uint32_t	crc			:2;
	uint32_t	status		:1;
	uint32_t	payload		:12;
	uint32_t	bat			:3;
	uint32_t	sensor		:3;
	uint32_t	longAddr	:8;
	uint32_t	shortAddr	:2;
	uint32_t	addrMode	:1;
};


void displayMemberElements(struct Packet messageDecoded);
void wait_for_user_input (void);

int main(void)
{

	uint32_t message1;

	struct Packet messageDecoded;

	printf("Enter the 32bit packet message: ");
	scanf("%X", &message1);

	//Clear bits to extract appropriate bits for each message1 element

	struct Packet *pPacket;
	pPacket = &messageDecoded;



	pPacket->crc 		= message1 & 0x00000003;
	pPacket->status 	= (message1 & 0x00000004)>>2;
	pPacket->payload 	= (message1 & 0x00007FF8)>>3;
	pPacket->bat 		= (message1 & 0x00038000)>>15;
	pPacket->sensor 	= (message1 & 0x001C0000)>>18;
	pPacket->longAddr 	= (message1 & 0x1FE00000)>>21;
	pPacket->shortAddr  = (message1 & 0x60000000)>>29;
	pPacket->addrMode 	= (message1 & 0x80000000)>>31;


	displayMemberElements(messageDecoded);

	wait_for_user_input();

	return 0;

}


void displayMemberElements(struct Packet messageDecoded)
{
	printf("crc = %#X\n", messageDecoded.crc);
	printf("status = %#X\n", messageDecoded.status);
	printf("payload = %#X\n", messageDecoded.payload);
	printf("bat = %#X\n",messageDecoded.bat);
	printf("sensor = %#X\n", messageDecoded.sensor);
	printf("long_addr = %#X\n", messageDecoded.longAddr);
	printf("short_addr = %#X\n", messageDecoded.shortAddr);
	printf("addr_mode = %#X\n", messageDecoded.addrMode);

	printf("Size of struct is %llu\n", sizeof(messageDecoded));

}



void wait_for_user_input (void)
{
	printf("Press enter key to exit\n");

	while(getchar() != '\n'){

			//just read the input buffer and do nothing
	}
	getchar();


}

















