#pragma once

#include <vector>
#include "task.h"

namespace MyQsort { //Быстрая сортировка под тип данных дата

	int partition(std::vector<Task>& arr, int low, int high);

	void qSort(std::vector<Task>& arr, int low, int high);
}



