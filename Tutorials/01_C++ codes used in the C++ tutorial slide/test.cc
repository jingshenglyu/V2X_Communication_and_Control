#include <stdio.h>


class Vehicle{
public:
	Vehicle(double, double);
	double getVelocity();
	void setVelocity(double velocity);
	double m_velocity;
	void proceedTime(double time);
	double getLocation();
private:
	double m_x;
};

Vehicle::Vehicle(double initVelocity, double initLoc){
	m_velocity = initVelocity;
	m_x = initLoc;
}

double Vehicle::getVelocity()
{
	return m_velocity;
}

void Vehicle::setVelocity(double velocity)
{
	m_velocity = velocity;
	//this->m_velocity = velocity; // It's does the same thing.
}

void Vehicle::proceedTime(double time)
{
	m_x = m_x + m_velocity*time;
}

double Vehicle::getLocation()
{
	return m_x;
}

int main(void)
{
	Vehicle vehicle = Vehicle(0, 0);
	vehicle.setVelocity(1);
	double vel = vehicle.getVelocity();
	printf("Current velocity is: %f\n", vel);
	vehicle.proceedTime(2.5);
	double loc = vehicle.getLocation();
	printf("Current location is: %f\n", loc);
	//printf("Current location is: %f\n", vehicle.m_x); // try this and you will encounter an error!
	return 0;
}

