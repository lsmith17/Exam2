#include<iostream>
#include<string>
#include<vector>
#include "Runner.h"
using namespace std;

Runner::Runner(string First_name, string Last_name, int Pace){
	first_name = First_name;
	last_name = Last_name;
	pace = Pace;
}

Runner::Runner(){
	first_name = "";
	last_name = "";
	pace = 0;
}

string Runner::get_first_name(){
	return first_name;
}
string Runner::get_last_name(){
	return last_name;
}
int Runner::get_pace(){
	return pace;
}