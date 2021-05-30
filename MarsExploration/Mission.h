#pragma once
#include <iostream>
#include "Rover.h"

class Mission
{
private:
	Rover* rover;
	char MissionType;
	int ID;
	int TargetLocation;
	int MissionDuration;
	int Significance;
	int FormulationDate;
	int WaitingDays;
public:
	/* Constructor */
	Mission(char MissionType,int ID, int TargetLocation, int MissionDuration, int FormulationDate, int Significance,Rover* r = NULL);
	
	void setRover(Rover*);
	Rover* getRover();

	int getID();
	void setID(int i);

	int getTargetLocation();
	void setTargetLocation(int);

	int getMissionDuration();
	void setMissionDuration(int);

	int getSignificance();
	void setSignificance(int);

	int getFormulationDate();
	void setFormulationDate(int);

	char getMissionType();
	void setMissionType(char);

	void increamentWaitingDays();
};

