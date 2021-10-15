#ifndef RANDOMINTGENERATOR_H
#define RANDOMINTGENERATOR_H

#include <cstdlib>
#include <time.h>

//TODO: seperate into cpp
void initializeRand( ) { srand( time( NULL ) ); };
int getRandomInt( int maxValue ) { return rand( ) % maxValue + 1; };

#endif // !RANDOMINTGENERATOR_H
