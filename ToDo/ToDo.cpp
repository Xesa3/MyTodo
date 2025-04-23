#include <iostream>

#include "task_manager.h"

int main()
{
    setlocale(LC_ALL, "RU");

    Date one(23, 04, 2025);
    Date two(28, 03, 2025);


    Task on;
    on.title = "one";
    on.description = "balbasl";
    on.deadline = one;
    Task tw;
    tw.title = "two";
    tw.description = "balbasl";
    tw.deadline = two;

    Task_manager manager;
    manager.addTask(on);
    manager.addTask(tw);

    manager.listTasks();

    manager.sortByDeadline();

    manager.listTasks();



    /*
    Task_manager manager;

    Task a;
    a.title = "Программирование";
    a.description = "Начать разработку своего проекта";
    Date a1(27,05,2025);

    a.deadline = a1;

    Task b;
    b.title = "Программирование";
    b.description = "Релизовать скан по чеку";
    Date b1(24, 05, 2025);

    b.deadline = b1;

    Task c;
    c.title = "Учеба";
    c.description = "Дз по физике";

    Date c1(24, 04, 2025);
    c.deadline = c1;

    manager.addTask(a);
    manager.addTask(b);
    manager.addTask(c);

    manager.listTasks();

    manager.removeTask(2);

    std::cout << std::endl  << "Задача #2 была удалена" << std::endl << std::endl;
    manager.listTasks();
    */
}

