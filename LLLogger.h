#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>

class LLLogger {
public:
	LLLogger(std::string name, bool show_message_time);

	void log(std::string message);
	void logc(const char* messagec);

	void err(std::string message);
	void errc(const char* messagec);

	void warn(std::string message);
    void warnc(const char* messagec);
    static std::string gettime_humanreadable();


private:
	std::string name;
	std::string show_message_time;

};