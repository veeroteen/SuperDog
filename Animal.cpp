#include "Animal.h"

string Dancing::getTalant () {
	return "Dance";
}
string Swimming::getTalant(){ 
	return "Swim";
}
string Counting::getTalant(){ 
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
Animal::~Animal() {
	for (int i = 0; i < talants.size(); i++) {
		delete talants[i];
	}
}
void Dog::addTalant(string name) {
	if (name == "Dance") {
		talants.emplace_back(new Swimming());
	}
	else if (name == "Swim") {
		talants.emplace_back(new Swimming());
	}
	else if (name == "Count") {
		talants.emplace_back(new Counting());
	}
}

