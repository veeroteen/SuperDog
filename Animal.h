#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Talant {
public:
	virtual string getTalant() = 0;
};
class Dancing : virtual public Talant
{
	virtual string getTalant()override;
};
class Swimming : virtual public Talant
{
	virtual string getTalant()override;
};
class Counting : virtual public Talant
{
	virtual string getTalant()override;
};

class Animal
{
protected:
	string name;
	vector <Talant*> talants;
public:
	virtual ~Animal() {
		for (int i = 0; i < talants.size(); i++) {
			delete talants[i];
		}
	}
	virtual void voice() = 0;
	virtual void showTalants();
	virtual void addTalant(string name) = 0;
};
class Dog : virtual public Animal
{
public:

	Dog(string name);
	virtual void voice();
	virtual void addTalant(string name);
	Talant* gettalant() {
		return talants[0];
	}

};
