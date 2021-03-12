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