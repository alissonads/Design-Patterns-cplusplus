#include <iostream>
#include "concrete\ducks\decorator\QuackCounter.h"
#include "concrete\factory\CountingDuckFactory.h"
#include "concrete\factory\GooseFactory.h"
#include "concrete\composite\Flock.h"
#include "concrete\observer\Quackologist.h"

class DuckSimulator
{
public:
	static void main(int argc, char **args)
	{
		DuckSimulator simulator;
		AbstractDuckFactory &duckFactory = CountingDuckFactory();
		simulator.simulate(duckFactory);
	}

private:
	void simulate(AbstractDuckFactory &duckFactory)
	{
		Quackable *mallardDuck = duckFactory.createMallardDuck();
		Quackable *redheadDuck = duckFactory.createReadheadDuck();
		Quackable *duckCall = duckFactory.createDuckCall();
		Quackable *rubberDuck = duckFactory.createRubberDuck();
		Quackable *gooseDuck = GooseFactory().createGooseAdapter();

		std::cout << "Duck Simulator" << std::endl;

		Flock flockOfDucks;
		flockOfDucks.add(redheadDuck);
		flockOfDucks.add(duckCall);
		flockOfDucks.add(rubberDuck);
		flockOfDucks.add(gooseDuck);
		flockOfDucks.add(mallardDuck);
		
		Flock flockOfMallards;
		Quackable *mallardOne = duckFactory.createMallardDuck();
		Quackable *mallardTwo = duckFactory.createMallardDuck();
		Quackable *mallardThree = duckFactory.createMallardDuck();
		Quackable *mallardFour = duckFactory.createMallardDuck();

		flockOfMallards.add(mallardOne);
		flockOfMallards.add(mallardTwo);
		flockOfMallards.add(mallardThree);
		flockOfMallards.add(mallardFour);

		flockOfDucks.add(&flockOfMallards);

		Quackologist quackologist;
		flockOfDucks.registerObserver(&quackologist);

		std::cout << "\nDuck Simulator: Whole Flock Simulation" << std::endl;
		simulate(&flockOfDucks);

		std::cout << "\nDuck Simulator: Mallard Flock Simulation" << std::endl;
		simulate(&flockOfMallards);

		std::cout << "\nThe ducks quacked " << QuackCounter::getQuacks() << " times" << std::endl;

		delete mallardDuck;
		delete redheadDuck;
		delete duckCall;
		delete rubberDuck;
		delete gooseDuck;
		
		delete mallardOne;
		delete mallardTwo;
		delete mallardThree;
		delete mallardFour;
	}

	void simulate(Quackable *duck)
	{
		duck->quack();
	}
};

int main(int argc, char **argv)
{
	DuckSimulator::main(argc, argv);

	system("pause");
	return 0;
}