#include"class.h"

GrosseryBag::GrosseryBag(const std::string& name,
	int GrossBagMaxCap,
	int GrossBagCurrLoad,
	int Yammies)
	: name_(name),GrossBagMaxCap_(GrossBagMaxCap),GrossBagCurrLoad_(GrossBagCurrLoad),
	Yammies_(Yammies){ }

//int GrosseryBag::removeYammiesToFRDG(Fridge& fridge, int& Yammies, int& GrossBagCurrLoad, int& ChillerCurrLoad) {
//	Yammies--;
//	GrossBagCurrLoad--;
//	fridge.putYammies(Yammies++, ChillerCurrLoad++);
//
//	return fridge.putYammies(Yammies, ChillerCurrLoad), Yammies, GrossBagCurrLoad, ChillerCurrLoad;
//}

int GrosseryBag::eatYammies(GrosseryBag& grosseryBag) {
	grosseryBag.Yammies_--;
	grosseryBag.GrossBagCurrLoad_--;
	return Yammies_, GrossBagCurrLoad_;
}
//int GrosseryBag::putYammies(Fridge& fridge1, GrosseryBag& grosseryBag)
//{
//	grosseryBag.Yammies_++;
//	grosseryBag.GrossBagCurrLoad_++;
//	fridge1.eatYammies(fridge1);
//	return Yammies_,GrossBagCurrLoad_;
//}
//int GrosseryBag::putYammies(Fridge& fridge1, GrosseryBag& grosseryBag){
//	grosseryBag.Yammies_++;
//	grosseryBag.GrossBagCurrLoad_++;
//	fridge1.eatYammies(fridge1);
//	return Yammies_, GrossBagCurrLoad_;
//}

void GrosseryBag::checkBagContent() {
	std::cout << " Grossery Bag's Slots Occuppied : "<< GrossBagCurrLoad_ << " / " << GrossBagMaxCap_ << std::endl;
	std::cout << " Yammies Inside : " << Yammies_ << std::endl;
}


Fridge::Fridge(const std::string& name, int ChillerQnty, 
	int ChillerCurrLoad, int ChillerMaxCap, int Yammies)
	: name_(name),ChillerQnty_(ChillerQnty),ChillerCurrLoad_(ChillerCurrLoad),
	ChillerMaxCap_(ChillerMaxCap),Yammies_(Yammies){ }

void Fridge::checkFridgeContent() {
	std::cout << " Fridge's Slots Occuppied : " << ChillerCurrLoad_ << " / " << ChillerMaxCap_ << std::endl;
	std::cout << " Yammies Inside : " << Yammies_ << std::endl;
}

int Fridge::eatYammies(Fridge& fridge) {
	
	fridge.Yammies_--;
	fridge.ChillerCurrLoad_--;
	return Yammies_, ChillerCurrLoad_;
};
int Fridge::putYammies(GrosseryBag& grossBag, Fridge& fridge) {

	fridge.Yammies_++;
	fridge.ChillerCurrLoad_++;
	grossBag.eatYammies(grossBag);
	return Yammies_, ChillerCurrLoad_;
};
//int removeYammiesToBAG(int Yammies, int ChillerCurrLoad, int& grossBagCurrLoad) {
//
//};
