#ifndef Runner_H
#define Runner_H
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Runner{
private:
	string first_name;
	string last_name;
	int pace;
public:
	Runner();
	Runner(string First_name, string Last_name, int Pace);
	
	string get_first_name();
	string get_last_name();
	int get_pace();

};
#endif