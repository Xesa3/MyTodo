#pragma once

#include <vector>
#include "task.h"

namespace MyQsort { //������� ���������� ��� ��� ������ ����

	int partition(std::vector<Task>& arr, int low, int high);

	void qSort(std::vector<Task>& arr, int low, int high);
}



