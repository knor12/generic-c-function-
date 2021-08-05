#include <stdio.h>
#include "findmax.h"



int main()
{
	printf("\n/*u32 test*/\n");
	uint32_t arr_u32[]={1000,2000,3000,4000,5000,9000,8000,7000,6000};
	uint32_t max_32 = 0; 
	uint32_t maxIndex = 0;
	uint32_t err =99;
	
	printf("sizeof(arr_u32)=%d \n" , ARRAY_NUMBER_ELEMENTS(arr_u32));
	
	err = findMax_uint32_t( arr_u32 , 
						ARRAY_NUMBER_ELEMENTS(arr_u32), 
						&max_32 , 
						&maxIndex );
					
					
	printf("max=%d \n" , max_32);
	printf("maxIndex=%d \n" , maxIndex);
	
	printf("\n/*u64 test*/\n");
	uint64_t arr_u64[]={100,200,300,400,500,900,800,700,600};
	uint64_t max_u64 = 0; 
	
	printf("sizeof(arr_u64)=%d \n" , ARRAY_NUMBER_ELEMENTS(arr_u64));
	
	err = findMax_uint64_t( arr_u64 , 
						ARRAY_NUMBER_ELEMENTS(arr_u64), 
						&max_u64 , 
						&maxIndex );
					
					
	printf("max=%d \n" , max_u64);
	printf("maxIndex=%d \n" , maxIndex);
	
	printf("\n/*u16 test*/\n");
	uint16_t arr_u16[]={10,20,30,40,50,90,80,70,60};
	uint16_t max_u16 = 0; 
	
	printf("sizeof(arr_u16)=%d \n" , ARRAY_NUMBER_ELEMENTS(arr_u16));
	
	err = findMax_uint16_t( arr_u16 , 
						ARRAY_NUMBER_ELEMENTS(arr_u16), 
						&max_u16 , 
						&maxIndex );
					
					
	printf("max=%d \n" , max_u16);
	printf("maxIndex=%d \n" , maxIndex);
	
	printf("\n/*u8 test*/\n");
	uint8_t arr_u8[]={1,2,3,4,5,9,8,7,6};
	uint8_t max_u8 = 0; 
	
	printf("sizeof(arr_u8)=%d \n" , ARRAY_NUMBER_ELEMENTS(arr_u8));
	
	err = findMax_uint8_t( arr_u8 , 
						ARRAY_NUMBER_ELEMENTS(arr_u8), 
						&max_u8 , 
						&maxIndex );
					
					
	printf("max=%d \n" , max_u8);
	printf("maxIndex=%d \n" , maxIndex);

}



