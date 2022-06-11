#include "Animal.h"

string Dancing::getTalant() {
	return "Dance";
}
string Swimming::getTalant() {
	return "Swim";
}
string Counting::getTalant() {
	return "Count";
}


Dog::Dog(string name) {
	this->name = name;
}

void Dog::voice() {
	cout << "Bark!\n";
}

void Animal::showTalants() {
	cout << "This is  "<< name << " and it has some talents :\n";
	for (int i = 0; i < talants.size(); i++) {
		cout << "It can " << talants[i]->getTalant() << endl;
	}
}

void Dog::addTalant(string name) {
	if (name == "Dance") {
		talants.push_back(new Dancing());
	}
	else if (name == "Swim") {
		talants.push_back(new Swimming());
	}
	else if (name == "Count") {
		talants.push_back(new Counting());
	}
}