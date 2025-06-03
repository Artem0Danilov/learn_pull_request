#include "class.h"
using namespace std;
Book::Book(const string& name, const string& author, int year, double price, int quantityinstock)
	: name_(name), author_(author), year_(year), price_(price), quantityinstock_(quantityinstock){}
void Book::showinfo() const {
	cout << "-----------------" << "\n";
	cout << "Name of book: " << name_ << "\n";
	cout << "Author of book: " << author_ << "\n";
	cout << "Year of book: " << year_ << "\n";
	cout << "Price of one book : " << price_ << "\n";
	cout << "Quantity in stock: " << quantityinstock_ << "\n";
	cout << "-----------------" << "\n";
}
void Book::swyear(int year) {
	year_ = year;
}
int Book::allprice() {
	double allprice = price_ * quantityinstock_;
	cout << " All price: " << allprice << endl; 
	return allprice;
}
void Book::buysmbook(int basket) {
	int newquantity = quantityinstock_ - basket;
	if (newquantity < 0) {
		cout << "Error" << "\n";
	}
	else {
		quantityinstock_ = newquantity;
	}
}
int Book::chanceofbuy() {
	int firstchanceofbuy = 100;
	if (year_ < 4390 or price_ > 2000) {
		firstchanceofbuy -= 10;
	}
	if (quantityinstock_ < 20 ) {
		firstchanceofbuy += 20;
	}
	cout << " Chance of buying: " << endl;
	return firstchanceofbuy;
}
void Book::funnygame() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(0, 99);
	int random_number = dist(gen);
	if (random_number == 45) {
		cout << "You win book" << endl;
		quantityinstock_ -= 1;
	}
	else {
		cout << " Sorry you lox" << endl;
	}
}