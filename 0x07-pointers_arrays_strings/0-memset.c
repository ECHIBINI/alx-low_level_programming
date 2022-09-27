#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: address to memory block
 * @b: char to be used
 * @n: number of bytes to be used
 *
 * Return: pointer to the memory block
 */

void *_memset(void *s, int c, size_t n)                                                                                              
{                                                                                                                                    
	unsigned int index;                                                                                                          
        unsigned char *memory = s, value = c;                                                                                        
		                                                                                                                                     
	for (index = 0; index < n; index++)                                                                                          
	memory[index] = value;                                                                                               
	                                                                                                                                     
	return (memory);                                                                                                             
}
