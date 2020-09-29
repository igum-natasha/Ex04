#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return (*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b) {
	return (strcmp(*(const char**)a , *(const char**)b));
}

int comp4(const void* a, const void* b) {
	return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void* a, const void* b) {
	int count1 = 0, count2 = 0;
	for (int i = 0; i < strlen(*(char**)a); i++)
	{
		if ((*(char**)a)[i] == ' ')
			count1 += 1;
	}
	for (int i = 0; i < strlen(*(char**)b); i++)
	{
		if ((*(char**)b)[i] == ' ')
			count2 += 1;
	}
	return (count1 - count2);
}
int comp6(const void* a, const void* b) {
	return ((*(struct Person*) a).age - (*(struct Person*)b).age);
}