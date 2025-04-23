#include <iostream>
#include "task_manager.h"
#include "Qsort.h"

void Task_manager::addTask(const Task& task) {
	tasks.push_back(task);
}

void Task_manager::listTasks() { // Метод по выводу списка
    if (tasks.empty()) {
        std::cout << "Задачь нет!";
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i) {
        const Task& t = tasks[i];
        std::cout << "Задача #" << i + 1 << "\n";
        std::cout << "Название: " << t.title << "\n";
        std::cout << "Описание: " << t.description << "\n";
        std::cout << "Дедлайн: " << t.deadline.getDate() << "\n";
        std::cout << "--------------------------\n";
    }
	
}

void Task_manager::sortByDeadline()
{
    MyQsort::qSort(tasks, 0, 1);
}

void Task_manager::removeTask(const int index) {
    if (tasks.empty()) {
        std::cout << "Удалять нечего!";
        return;
    }

    auto iter = tasks.cbegin();
    tasks.erase(iter + (index-1));

}
