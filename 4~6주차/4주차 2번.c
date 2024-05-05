#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#pragma warning (disable : 6031)
void merge_sort(int arr[20], int left, int right);
void merge(int arr[20], int left, int mid, int right);

int main(void)
{
	srand(time(0));
	int arr[20];
	for (int i = 0; i < 20; i++)
	{
		arr[i] = (rand() % 21) - 10;
	}
	int l = 0, r = 19;
	merge_sort(arr, l, r);
	for (int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	return 0;
}

void merge_sort(int arr[], int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(arr, left, mid);
		merge_sort(arr, mid + 1, right);
		merge(arr, left, mid, right);
	}
}

void merge(int arr[], int left, int mid, int right)
{
	int i, j, k, l;
	int tmp[20] = { 0 };
	i = left;
	j = mid + 1;
	k = left;

	while (i <= mid && j <= right)
	{
		if (arr[i] <= arr[j])
		{
			tmp[k++] = arr[i++];
		}
		else
		{
			tmp[k++] = arr[j++];
		}
	}
	if (i > mid)
	{
		for (l = j; l <= right; l++)
		{
			tmp[k++] = arr[l];
		}
	}
	else
	{
		for (l = i; l <= mid; l++)
			tmp[k++] = arr[l];
	}
	for (l = left; l <= right; l++)
		arr[l] = tmp[l];
}