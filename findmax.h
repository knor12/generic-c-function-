#ifndef FINDMAX_H_
#define FINDMAX_H_

#include "stdint.h"

#define ARRAY_NUMBER_ELEMENTS(arr) (sizeof(arr)/sizeof(arr[0]))

#define CREATE_POTOTYPE_findMax(TYPE) uint32_t findMax_ ## TYPE( const TYPE arr[], \
															const size_t length, \
															TYPE * max , \
															uint32_t * max_index)
															
#define CREATE_IMPLEMENTATION_findmax(TYPE) CREATE_POTOTYPE_findMax(TYPE) \
			{\
				uint32_t i =0; \
				TYPE tempMax=0; \
				uint32_t tempMaxIndex =0; \
				for (i=0; i< length;i++) \
				{ \
					if (tempMax < arr[i]) \
					{ \
						tempMax = arr[i];  \
						tempMaxIndex = i;  \
					} \
				} \
				* max = tempMax; \
				* max_index = tempMaxIndex; \
			}
															

/*protypes creation */
CREATE_POTOTYPE_findMax(uint64_t);
CREATE_POTOTYPE_findMax(uint32_t);
CREATE_POTOTYPE_findMax(uint16_t);
CREATE_POTOTYPE_findMax(uint8_t);		
CREATE_POTOTYPE_findMax(int64_t);
CREATE_POTOTYPE_findMax(int32_t);
CREATE_POTOTYPE_findMax(int16_t);
CREATE_POTOTYPE_findMax(int8_t);	
					
#endif  /* !FINDMAX_H_ */