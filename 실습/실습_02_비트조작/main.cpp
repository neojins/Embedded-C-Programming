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

#define N_BIT	3

int
main(int argc, char* argv[])
{
	char num = 0b00000000;
	printf("num : 0x%08x\n",num);
	printf("================\n");

	/* N_BIT set */
	num |= (1 << N_BIT);
	printf("(set) num : 0x%08x\n",num);
	printf("================\n");

	/* N_BIT clear */
	num &= ~(1 << N_BIT);
	printf("(clear) num : 0x%08x\n",num);
	printf("================\n");

	/* N_BIT toggle */
	num ^= (1 << N_BIT);
	printf("(toggle) num : 0x%08x\n",num);
	num ^= (1 << N_BIT);
	printf("(toggle) num : 0x%08x\n",num);
	num ^= (1 << N_BIT);
	printf("(toggle) num : 0x%08x\n",num);
	printf("================\n");

  return 0;
}

