/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#define ADDR				0x20001000
//#define ACCESS_ADDR			*((unsigned int *)ADDR)
#define DATA				0xFFFFFFFF

int main(int argc, char* argv[])
{
	int* ptr = ADDR;
	int ACCESS_ADDR = *ptr;

	printf("DATA_ADDRESS : 0x%X\n", ADDR);
	printf("DATA : 0x%08X\n", ACCESS_ADDR);

	/* Write "DATA" in "ADDR" */
	//ACCESS_ADDR = DATA;
	*ptr = DATA;
	ACCESS_ADDR = DATA;

	printf("\n===== Write DATA in ADDR =====\n");
	printf("DATA_ADDRESS : 0x%X\n", ADDR);
	printf("DATA : 0x%08X\n", ACCESS_ADDR);

  return 0;
}



// ----------------------------------------------------------------------------
