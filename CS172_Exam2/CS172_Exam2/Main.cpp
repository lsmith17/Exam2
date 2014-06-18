#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"Runner.h"
using namespace std;

int main(){
	vector<Runner> runner(2000); // runner vector
	ifstream r;
	int i = 0;
	int count = 0;
	r.open("registrants.txt"); // I put the text file in with the Github solution
	while (!r.eof()){
		r >> runner[i].get_first_name() >> runner[i].get_last_name() >> runner[i].get_pace();
		i++;
		count++;
	}
	for (int i = 0; i < count - 1; i++){
		cout << runner[i].get_first_name() << " " << runner[i].get_last_name() << " " << runner[i].get_pace() << endl;
	}
	r.close();

	ofstream white, yellow, green, orange, blue, lilac, red; //Sort the runners into appropriate file
	white.open("white.txt");
	yellow.open("yellow.txt");
	green.open("green.txt");
	orange.open("orange.txt");
	blue.open("blue.txt");
	lilac.open("lilac.txt");
	red.open("red.txt");
	for (int a = 0; a < 1001; a++){
		if (runner[a].get_pace <= 360)
			white << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl; // need a stack class to put fastest runners at the top

		if (runner[a].get_pace >= 361 && runner[a].get_pace <= 420)
			yellow << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;
		
		if (runner[a].get_pace >= 421 && runner[a].get_pace <= 480)
			green << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;

		if (runner[a].get_pace >= 481 && runner[a].get_pace <= 540)
			orange << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;

		if (runner[a].get_pace >= 541 && runner[a].get_pace <= 600)
			blue << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;

		if (runner[a].get_pace >= 601 && runner[a].get_pace <= 720)
			lilac << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;

		if (runner[a].get_pace >= 721 && runner[a].get_pace <= 1200)
			red << runner[a].get_first_name() << " " << runner[a].get_last_name() << " " << runner[a].get_pace() << endl;


	}

	white.close();
	yellow.close();
	green.close();
	orange.close();
	blue.close();
	lilac.close();
	red.close();
}