#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hello! Welcome to The Simulation." << endl;

	system("pause");

	cout << "Please limit responses to one word only." << endl;

	system("pause");

	string name;

	cout << "What is your name?" << endl;

	cin >> name;

	cout << "Nice to meet you " << name << "!" << endl;

	cout << name << ". What do you like to do for fun?" << endl;

	string hobby;

	cin >> hobby;

	cout << hobby << "? That sounds like a lot of fun!" << endl;

	system("pause");

	cout << "I wish I could do " << hobby << "!" << endl;

	system("pause");

	cout << "However " << name << " I am only a simulation..." << endl;

	string lastname;

	cout << name << " What is your last name?" << endl;

	cin >> lastname;

	cout << "So your name is " << name << " " << lastname << " and you enjoy " << hobby << "." << endl;

	cout << "Very interesting " << name << "..." << endl;

	system("pause");

	string home;

	cout << "Where are you from?" << endl;

	cin >> home;

	cout << home << "?" << " That is a beautiful name for a place to call home!" << endl;

	cout << "So tell me, " << name << " " << lastname << "." << endl;

	string adjective;

	cout << "What is it like in " << home << "?" << endl;

	cin >> adjective;

	cout << "Wow." << endl;

	cout << "I wish I could go to " << home << " and experience " << adjective << "!" << endl;

	system("pause");

	cout << "Well, " << name << " " << lastname << " from " << home << "." << endl;

	cout << "Maybe someday I will achieve sentient life, and " << hobby << " with you!" << endl;

	cout << "Until next time " << name << "!" << endl;

	system("pause");

	return 0;
}