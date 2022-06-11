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
	virtual string getTalant();
};
class Swimming : virtual public Talant
{
	virtual string getTalant();
};
class Counting : virtual public Talant
{
	virtual string getTalant();
};




class Animal
{
protected:
	string name;
	vector <Talant*> talants;
public:
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

};
