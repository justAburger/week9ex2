#pragma once
#include <iostream>

template <class T>
bool operator==(const T& c1, const T& c2)
{
	return c1 == c2;
}

template <class T>
bool operator<(const T& c1, const T& c2)
{
	return c1 < c2;
}

template <class T>
bool operator>(const T& c1, const T& c2)
{
	return c1 > c2;
}

template <class T>
int compare(T first, T second)
{
	if (first == second)
		return 0;
	else if (first < second)
		return 1;
	else
		return -1;
}

template <class T>
void swap(T* xp, T* yp)
{
	T temp = *xp;
	*xp = *yp;
	*yp = temp;
}

template <class T>
void bubbleSort(T arr[],int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);			
		}
	}
}

template <class T>
void printArray(T arr[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		std::cout << arr[i] << std::endl;
}