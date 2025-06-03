
#ifndef CLASS_H
#define CLASS_H
#include <iostream>
#include <ctime>
#include <random>
using namespace std;
class Book {
private: 
	string name_;
	string author_;
	int year_;
	double price_;
	int quantityinstock_;
public:
	Book(const string& name, const string& author, int year, double price, int quantityinstock);
	void showinfo() const;
	void swyear(int year);
	int allprice();
	void buysmbook(int basket);
	int chanceofbuy();
	void funnygame();

};
#endif //CLASS_H