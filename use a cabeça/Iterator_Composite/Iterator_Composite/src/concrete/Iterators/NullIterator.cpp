#include "NullIterator.h"
#include "..\..\Util\Util.h"

NullIterator::NullIterator()
{}

bool NullIterator::hasNext()
{
	return false;
}

void *NullIterator::next()
{
	return nullptr;
}

void NullIterator::remove()
{
	throw UnsupportedOperationException();
}
