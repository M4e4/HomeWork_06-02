#pragma once
#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
private:
	int count;
public:
	Counter(int count = 1);
	void up();
	void down();
	int get() const;
};

#endif //COUNTER_H