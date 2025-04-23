#include <iostream>

#include "Qsort.h"
#include <vector>

namespace MyQsort {

	int partition(std::vector<Task>& arr, int low, int high)
	{
		Date pivot = arr[high].deadline;
		int i = low - 1;

		for (int j = low; j < high; j++) {
			if (arr[j].deadline < pivot) {
				i++;
				std::swap(arr[i], arr[j]);
			}
		}

		std::swap(arr[i + 1], arr[high]);
		return i + 1;
	}

	void qSort(std::vector<Task>& arr, int low, int high)
	{
		if (low < high) {
			int pivot = partition(arr, low, high);
			qSort(arr, low, pivot - 1);
			qSort(arr, pivot + 1, high);
		}

	}
}


