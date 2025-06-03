#pragma once
#include<iostream>

class GrosseryBag {
private:
	std::string name_;
	int GrossBagMaxCap_;
	int GrossBagCurrLoad_;
	int Yammies_;
public:
	GrosseryBag(const std::string& name,
		int GrossBagMaxCap,
		int GrossBagCurrLoad,
		int Yammies);
	int eatYammies(GrosseryBag& grosseryBag);
	//int putYammies(Fridge& fridge1,GrosseryBag& grosseryBag);
	//int removeYammiesToFRDG(Fridge& Fridge, int& Yammies, int& GrossBagCurrLoad, int& ChillerCurrLoad);
	void checkBagContent();
};

class Fridge {
private:
	std::string name_;
	int ChillerQnty_;
	int ChillerCurrLoad_;
	int ChillerMaxCap_;
	int Yammies_;
public:
	Fridge(const std::string& name, int ChillerQnty, int ChillerCurrLoad, int ChillerMaxCap, int Yammies);
	int eatYammies(Fridge& fridge);
	int putYammies(GrosseryBag& grossBag , Fridge& fridge);
	int removeYammiesToBAG(int Yammies, int ChillerCurrLoad, int& grossBagCurrLoad);
	void checkFridgeContent();
};