/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/

#ifndef ___COUNTER_H
#define ___COUNTER_H
#include "stdio.h"
#define COUNTER_COUNT 8
enum Directions{
    UP,DOWN,UNDEFINED
};
struct CounterImp{
  enum Directions direction;
  int value;
  int count;
  bool is_used;
};
typedef struct CounterImp* Counter;
Counter new_counter(enum Directions direction);
void set_direction(Counter counter,enum Directions direction);
void set_increment_value(Counter counter, int value);
int get_increment_value(Counter counter);
bool set_value(Counter counter,int value);
int get_value(Counter counter);
void increment(Counter counter);
Directions get_direction(Counter counter);
void init();
#endif
