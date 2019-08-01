#include <iostream>
#include "concrete\MenuItem.h"
#include "concrete\Menu.h"
#include "concrete\Waitress.h"

//template<class T = void*>
//class Test
//{
//public:
//	T data;
//public:
//	Test(T _data = 0) : data(_data){}
//
//	operator T() { return data; }
//
//	T operator()() { return data; }
//
//	Test<T> &operator++() 
//	{ 
//		data++; 
//		return *this; 
//	}
//};
//
//template<class T>
//Test<T> &operator++(Test<T> &t)
//{
//	++(t.data);
//	return t;
//}

class MenuTestDrive
{
public:
	static void main(int argc, char **args)
	{
		create();
	}

	static void create()
	{
		Menu pancakeHouseMenu("PANCAKE HOUSE MENU", "Breakfast");
		Menu dinerMenu("DINER MENU", "Lunch");
		Menu cafeMenu("CAFE MENU", "Dinner");
		Menu dessertMenu("DESSERT MENU", "Dessert of course!");

		Menu allMenus("ALL MENUS", "All menus combined");

		allMenus.add(pancakeHouseMenu);
		allMenus.add(dinerMenu);
		allMenus.add(dessertMenu);
		allMenus.add(cafeMenu);

		//MenuItem DinnerMenu
		MenuItem vegetarian("Vegetarian BLT",
						    "(Fakin) Bacon With lettuce & tomato on whole wheat",
						    true, 2.99);

		MenuItem blt("BLT",
					 "Bacon With lettuce & tomato on whole wheat",
					 false, 2.99);

		MenuItem soup("Soup of the day",
					  "Soup of the day, with a side of potato salad",
					  false, 3.29);

		MenuItem hotdog("Hotdog",
					    "A hot dog, with saurkraut, relish, onions, topped with cheese",
					    false, 3.05);

		MenuItem steamed("Steamed Veggies and Brow Rice",
					     "Steamed Veggies and Brow Rice",
					     true, 3.99);

		MenuItem pasta("Pasta", "Spaghetti with Marinara Sauce, and a slice of sourdough bread",
						true, 3.89);

		dinerMenu.add(vegetarian);
		dinerMenu.add(blt);
		dinerMenu.add(soup);
		dinerMenu.add(hotdog);
		dinerMenu.add(steamed);
		dinerMenu.add(pasta);

		//MenuItem PancakeMenu
		MenuItem k_b("K&B's Pancake Breakfast",
					 "Pancakes with scrambled eggs, and toast",
					 true, 2.99);

		MenuItem reguler("Reguler Pancake Breakfast",
						 "Pancakes with fried eggs, sausage",
						 false, 2.99);

		MenuItem blueberry("Blueberry Pancakes",
						   "Pancakes made with fresh blueberries",
						   true, 3.49);

		MenuItem waffles("Waffles",
						 "Waffles with your choice of blueberries or strawberries",
						 true, 3.59);

		pancakeHouseMenu.add(k_b);
		pancakeHouseMenu.add(reguler);
		pancakeHouseMenu.add(blueberry);
		pancakeHouseMenu.add(waffles);

		//MenuItem DissertMenu
		MenuItem apple("Apple pie",
					   "Apple pie with a flakey crust, topped with vanilla icecream",
							  true, 1.59);

		MenuItem cheesecake("Cheesecake",
							"Creamy new York cheesecake, with a chocolate graham crust",
							true, 1.99);

		MenuItem sorbet("Sorbet",
						 "A scoop of raspberry and a soop of lime",
						 true, 1.89);

		dessertMenu.add(apple);
		dessertMenu.add(cheesecake);
		dessertMenu.add(sorbet);

		//MenuItem CafeMenu
		MenuItem veggieBurger("Veggie Burger and Air Fries",
							  "Veggies burger on a whole wheat bun, lettuce, tomato, and fries",
							  true, 3.99);

		MenuItem soup2("Soup of the day",
					   "A cup of soup of the day, with a side salad",
					   false, 3.69);

		MenuItem burrito("Burrito",
						 "A large burrito, with whole pinto beans, salsa, guacamole",
						 true, 4.29);

		cafeMenu.add(veggieBurger);
		cafeMenu.add(soup2);
		cafeMenu.add(burrito);

		Waitress waitress(&allMenus);

		//waitress.printMenu();
		waitress.printVegetariaMenu();
	}
};

int main(int argc, char **argv)
{
	//int a = 10;
	//Test<> x = &a;
	////++x;
	////x++;
	//int *b = static_cast<int*>(x());
	//std::cout << *b << std::endl;

	MenuTestDrive::main(argc, argv);

	system("pause");
	return 0;
}