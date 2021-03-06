#pragma once
#include "Event.h"
class Formulation :
    public Event
{
    char MissionType;
    int TargetLocation;
    int MissionDuration;
    int Significance;
public:

    /* Constructor */
    Formulation(char MissionType,int TargetLocation,int MissionDuration,int Significance, int MissionID, int EventDay);
    virtual void Execute(HashTable<Mission>& Mountainous, PriQ<Mission>& Emergency, Queue<int>& MountainousSort, Queue<Mission>& Polar, int* Arr);

};