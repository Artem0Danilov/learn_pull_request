
#ifndef CLASS_H
#define CLASS_H
#include <iostream>
using namespace std;
class Book {
private: 
	string name_;
	string author_;
	int year_;
public:
	Book(const string& name, const string& author, int year);
	void showinfo() const;

};
#endif //CLASS_H