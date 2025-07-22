#include "Counter.h"

Counter::Counter(int count)
{
	this->count = count;
}

void Counter::up()
{
	++this->count;
}

void Counter::down()
{
	--this->count;
}

int Counter::get() const
{
	return this->count;
}