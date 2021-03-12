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

class Pkw: public Vehicle{
public:
	Pkw(int);
	void setPassenger(int passenger);
	int getPassenger();
private:
	int m_passenger;
};

Pkw::Pkw(int passenger):Vehicle(0,0){
	m_passenger = passenger;
}

void Pkw::setPassenger(int passenger){
	m_passenger = passenger;
}

int Pkw::getPassenger(){
	return m_passenger;
}

int main(void)
{
	Pkw pkw = Pkw(4);
	printf("Num of passengers: %d\n", pkw.getPassenger());
	Pkw* pkw_p = new Pkw(5);
	printf("Num of passengers: %d\n", pkw_p->getPassenger()); // -> operator is used if pointer is used
	return 0;
}

