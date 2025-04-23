#pragma once

#include "task.h"
#include <vector>
#include <string>

class Task_manager //�� � �������� �����
{
public:
	void addTask(const Task& task); //�������� ������ 
	void removeTask(const int index);//������� ������
	void listTasks(); //������� ������ �����
	void sortByDeadline(); //����������� ������ �� ����
	void saveFromFile(const std::string& filename);
	void loadFromeFuile(const std::string& filename);

private:
	std::vector<Task> tasks;
};

