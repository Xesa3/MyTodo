#pragma once

#include <string>
#include <iomanip>  // std::setw, std::setfill
#include <sstream>


struct Date // ������� ��� ������ ����
{
	int day;
	int month;
	int year;

	Date(int day = 0, int month = 0, int year = 0) : day(day), month(month), year(year) {};

	std::string getDate() const { // ����� ��� ��������� ��������� ���� (DD.MM.YYYY)
		std::ostringstream oss;
		oss << std::setw(2) << std::setfill('0') << day << '.'
			<< std::setw(2) << std::setfill('0') << month << '.'
			<< year;
		return oss.str();
	}

	bool operator < (const Date& date) const { // �������� ��������� ��� ����
		if (year != date.year) {
			return year < date.year;
		}
		if (month != date.month) {
			return month < date.month;
		}
		return day < date.day;

	}
};