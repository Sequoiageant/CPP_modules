#include "Logger.hpp"
#include <iostream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds

int main(void)
{
	Logger log;

	log.log("console", "I am the Console message");
	log.log("file", "I am the first message");
	std::this_thread::sleep_for (std::chrono::seconds(1));
	log.log("file", "I am the second message");
	std::this_thread::sleep_for (std::chrono::seconds(1));
	log.log("file", "I am the third message");
}
