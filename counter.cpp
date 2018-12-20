/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#include "counter.h"
//Implemented everything
struct CounterImp c1 = {UNDEFINED,0,0};
struct CounterImp c2 = {UNDEFINED,0,0};
struct CounterImp c3 = {UNDEFINED,0,0};
struct CounterImp c4 = {UNDEFINED,0,0};
struct CounterImp c5 = {UNDEFINED,0,0};
struct CounterImp c6 = {UNDEFINED,0,0};
struct CounterImp c7 = {UNDEFINED,0,0};
struct CounterImp c8 = {UNDEFINED,0,0};
static Counter all_counters[COUNTER_COUNT] = {&c1,&c2,&c3,&c4,&c5,&c6,&c7,&c8};
Counter new_counter(enum Directions direction)
{
  for (int i = 0; i < COUNTER_COUNT; i++) {
    if (!all_counters[i]->is_used)
    {
      all_counters[i]->direction = direction;
      all_counters[i]->is_used = true;
      return all_counters[i];
    }
  }
  return 0;
}
void set_increment_value(Counter counter,int value)
{
  if(value>=0)
  {
    counter->value=value;
  }
}
int get_increment_value(Counter counter)
{
  return counter->value;
}
int get_value(Counter counter)
{
  return counter->count;
}
void increment(Counter counter)
{
  if (counter->direction==UP)
     {
       counter->count+=counter->value;
     }
     else if (counter->direction==DOWN)
     {
       counter->count-=counter->value;
     }
}
bool set_value(Counter counter, int value)
{
  if (counter->direction==DOWN)
  {
    counter->count=value;
      return true;
  }
  return false;
}
Directions get_direction(Counter counter)
{
  return counter->direction;
}
void set_direction(Counter counter,enum Directions direction)
{
  for (int i = 0; i < COUNTER_COUNT; i++) {
    if (all_counters[i] == counter)
    {
      all_counters[i]->direction = direction;
    }
  }
}
void init()
{
    for (int i = 0; i < COUNTER_COUNT; i++) {
      all_counters[i]->direction = UNDEFINED;
      all_counters[i]->value=1;
      all_counters[i]->count = 0;
      all_counters[i]->is_used = false;
    }
}
