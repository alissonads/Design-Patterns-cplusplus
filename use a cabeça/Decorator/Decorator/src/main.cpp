#include <iostream>

#include "package-Beverages.h"
#include  "package-Condiments.h"

int main()
{
	Beverage *beverage = new Expresso();
	std::cout << beverage->GetDescription() << " $" << beverage->Cost() << std::endl;

	Beverage *beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);

	std::cout << beverage2->GetDescription() << " $" << beverage2->Cost() << std::endl;

	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3->SetSize(SizeBeverage::VENTI);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);

	std::cout << beverage3->GetDescription() << " $" << beverage3->Cost() << std::endl;

	delete beverage;

	system("pause");
	return 0;
}