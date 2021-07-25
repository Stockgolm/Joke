#include <iostream>
#include <string>
#include <thread>
#include <windows.h>
#include <boost/filesystem.hpp>

void xd(int &a) {
	for (int i = 0; i < 56; i++) {
		std::string path = "C:\\Users\\User\\Desktop\\Sorry " + std::to_string(i);
		boost::filesystem::path dir(path);
		if (boost::filesystem::create_directories(path)) {
			system("cls");
			a++;
		}
	}
}

void xd1(int& a) {
	for (int i = 0; i < 56; i++) {
		std::string path = "C:\\Users\\User\\Desktop\\I'm so sorry( " + std::to_string(i);
		boost::filesystem::path dir(path);
		if (boost::filesystem::create_directories(path)) {
			system("cls");
			a++;
		}
	}
}

void xd2(int& a) {
	for (int i = 0; i < 56; i++) {
		std::string path = "C:\\Users\\User\\Desktop\\Oops ^_^ " + std::to_string(i);
		boost::filesystem::path dir(path);
		if (boost::filesystem::create_directories(path)) {
			system("cls");
			a++;
		}
	}
}

int main() {

	
	

	std::cout << "Start: 1" << std::endl;
	std::cout << "Exit: 0" << std::endl;
	std::cout << "==>  "; int st; std::cin >> st;

	int amount = 0;

	if (st == 1) {
		COORD dummy;
		bool ret = SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), 1, &dummy);
		std::thread th(xd,std::ref(amount));
		std::thread th1(xd1, std::ref(amount));
		std::thread th2(xd2, std::ref(amount));
		for (int i = 0; i < 56; i++) {
			COORD dummy;
			bool ret = SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), 1, &dummy);
			std::string path = "C:\\Users\\User\\Desktop\\Thanks " + std::to_string(i);
			boost::filesystem::path dir(path);
			if (boost::filesystem::create_directories(path)) {
				system("cls");
				amount++;
				std::cout << "Create folders: " << amount; std::cout << std::endl;
				std::cout << " Good Luck ^_^ ";
			}
		}
		th.join();
		th1.join();
		th2.join();
		
		system("explorer C:\\Users\\User\\Desktop");
		Sleep(55000);
	}

	if (st == 0) {
		exit(1);
	}

	if (st == 8845) {
		system("cls");
		std::cout << "Accept"; std::cout << std::endl;
		Sleep(300);
		system("cls");
		std::cout << "Delete folders..."; std::cout << std::endl;
		Sleep(300);
		system("cls");
		std::cout << "Please wait 1-2 minutes"; std::cout << std::endl;
		Sleep(200);
		int amount = 0;
		for (int i = 0; i < 56; i++) {
			std::string path = "C:\\Users\\User\\Desktop\\Thanks " + std::to_string(i);
			if (boost::filesystem::remove(path)) {
				system("cls");
				amount++;
				std::cout << "Files to delete: " << amount << std::endl;
			}
		}

		for (int i = 0; i < 56; i++) {
			std::string path = "C:\\Users\\User\\Desktop\\Sorry " + std::to_string(i);
			if (boost::filesystem::remove(path)) {
				system("cls");
				amount++;
				std::cout << "Files to delete: " << amount << std::endl;
			}
		}

		for (int i = 0; i < 56; i++) {
			std::string path = "C:\\Users\\User\\Desktop\\I'm so sorry( " + std::to_string(i);
			if (boost::filesystem::remove(path)) {
				system("cls");
				amount++;
				std::cout << "Files to delete: " << amount << std::endl;
			}
		}

		for (int i = 0; i < 56; i++) {
			std::string path = "C:\\Users\\User\\Desktop\\Oops ^_^ " + std::to_string(i);
			if (boost::filesystem::remove(path)) {
				system("cls");
				amount++;
				std::cout << "Files to delete: " << amount << std::endl;
			}
		}

	}
}