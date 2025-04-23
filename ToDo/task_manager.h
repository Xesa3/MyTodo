#pragma once

#include "task.h"
#include <vector>
#include <string>

class Task_manager //Ну и менеджер задач
{
public:
	void addTask(const Task& task); //Добавить задачу 
	void removeTask(const int index);//Удалить задачу
	void listTasks(); //Вывести список задач
	void sortByDeadline(); //Сортировать задачи по дате
	void saveFromFile(const std::string& filename);
	void loadFromeFuile(const std::string& filename);

private:
	std::vector<Task> tasks;
};

