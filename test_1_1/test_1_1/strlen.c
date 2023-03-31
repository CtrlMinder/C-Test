#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>

size_t my_strlen(const char* str)
{
	assert(str != NULL);
	const char* src = str;
	while (*src++);
	return (src - str - 1);
}