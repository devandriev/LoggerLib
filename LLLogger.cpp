#include "LLLogger.h"

LLLogger::LLLogger(std::string name, bool show_message_time) {
	this->name					=	name;
	this->show_message_time		=	show_message_time;
}

void LLLogger::log(std::string message) {
  using namespace std;
  std::string full_message =
      "[" + gettime_humanreadable() + "] (" + this->name + ") " + message;
}

void LLLogger::logc(const char *messagec) {
  using namespace std;
  std::string full_message = "[" + gettime_humanreadable() + "] (" +
                             this->name + ") " + std::string(messagec);
}
void LLLogger::err(std::string message) {
  using namespace std;
  std::string full_message =
      "[" + gettime_humanreadable() + "] (" + this->name + ") ERR " + message;
}

void LLLogger::errc(const char *messagec) {
  using namespace std;
  std::string full_message = "[" + gettime_humanreadable() + "] (" +
                             this->name + ") ERR " + std::string(messagec);
}
void LLLogger::warn(std::string message) {
  using namespace std;
  std::string full_message =
      "[" + gettime_humanreadable() + "] WARN (" + this->name + ") " + message;
}

void LLLogger::warnc(const char *messagec) {
  using namespace std;
  std::string full_message = "[" + gettime_humanreadable() + "] (" +
                             this->name + ") WARN " + std::string(messagec);
}


std::string LLLogger::gettime_humanreadable() { 
	auto timestamp = std::chrono::system_clock::now();

	std::time_t now_tt = std::chrono::system_clock::to_time_t(timestamp);
        const char *tc = ctime(&now_tt);
    std::string str = std::string{tc};
    str.pop_back();
    return str;
}
