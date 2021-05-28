#include "Mission.h"


// KHALOO BAlKO eno ehna bndkhal el formulation date msh el mission duration 3ashan msh hane3rafo ella ba3d man-set el rover we da msh men el katwa el olla
Mission::Mission(char MT, int id, int TL, int FD, int S, Rover* r = NULL)
{
	ID = id;
	TargetLocation = TL;
	formulationDate = FD;
	Significance = S;
	rover = r;
	MissionType = MT;
}
void Mission::setRover(Rover* r)
{
	rover = r;
}
Rover* Mission::getRover()
{
	return rover;
}

int Mission::getID()
{
	return ID;
}
void Mission::setID(int id)
{
	ID = id;
}
int Mission::getTargetLocation()
{
	return TargetLocation;
}
void Mission::setTargetLocation(int TL)
{
	TargetLocation = TL;
}

int Mission::getMissionDuration()
{
	return MissionDuration;
}
void Mission::setMissionDuration(int MD)
{
	MissionDuration = MD;
}

int Mission::getSignificance()
{
	return Significance;
}
void Mission::setSignificance(int s)
{
	Significance = s;
}

int Mission::getFormulationDate()
{
	return formulationDate;
}
void Mission::setFormulationDate(int FD)
{
	formulationDate = FD;
}
char  Mission::getMissionType()
{
	return MissionType;
}
void  Mission::setMissionType(char MT)
{
	MissionType = MT;
}