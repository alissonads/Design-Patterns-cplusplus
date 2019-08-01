#include "GooseFactory.h"
#include "..\goose\Goose.h"
#include "..\adapter\GooseAdapter.h"

Goose *GooseFactory::createGoose()
{
	return new Goose();
}

Quackable *GooseFactory::createGooseAdapter()
{
	return new GooseAdapter(createGoose());
}
