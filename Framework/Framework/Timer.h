#ifndef TIMER_H
#define TIMER_H

#include <chrono>

typedef std::chrono::high_resolution_clock Clock;
typedef std::chrono::high_resolution_clock::time_point TimePoint;

class Timer
{
private:
	Clock		m_clock;	// The high-resolution clock
	TimePoint	m_startTime;

public:
	Timer();

	void start();	// For starting the Timer
	float getElapsedSeconds(); // Get the total time passed since start() was called
};


#endif
