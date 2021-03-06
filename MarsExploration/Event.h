#pragma once
#include <iostream>
#include "PriQ.h"
#include "Queue.h"
#include "Event.h"
#include "HashTable.h"
#include "Mission.h"
#include "Rover.h"
#include "UI.h"

class Event
{
protected:
	int EventDay;
	int MissionID;

public:
	
	/* Constructor */
	Event(int, int);

	/*get event date*/
	int getED();

	/* Check and execute to create mission and add it to the appropriate list */
	virtual void Execute(HashTable<Mission>& Mountainous, PriQ<Mission>& Emergency, Queue<int>& MountainousSort, Queue<Mission>& Polar,int * Arr) = 0;  //Mtnsosh fi al call t7oto "&"
};