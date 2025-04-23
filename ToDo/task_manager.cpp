#include <iostream>
#include "task_manager.h"
#include "Qsort.h"

void Task_manager::addTask(const Task& task) {
	tasks.push_back(task);
}

void Task_manager::listTasks() { // ����� �� ������ ������
    if (tasks.empty()) {
        std::cout << "������ ���!";
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i) {
        const Task& t = tasks[i];
        std::cout << "������ #" << i + 1 << "\n";
        std::cout << "��������: " << t.title << "\n";
        std::cout << "��������: " << t.description << "\n";
        std::cout << "�������: " << t.deadline.getDate() << "\n";
        std::cout << "--------------------------\n";
    }
	
}

void Task_manager::sortByDeadline()
{
    MyQsort::qSort(tasks, 0, 1);
}

void Task_manager::removeTask(const int index) {
    if (tasks.empty()) {
        std::cout << "������� ������!";
        return;
    }

    auto iter = tasks.cbegin();
    tasks.erase(iter + (index-1));

}
