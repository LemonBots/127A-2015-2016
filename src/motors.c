# include "main.h"

enum MOTORS
{
    leftMotor1 = 1,
    leftMotor2 = 2,
    rightMotor1 = 3,
    rightMotor2 = 4
};

int leftMotor1Polarity = 1;
int leftMotor2Polarity = -1;
int rightMotor1Polarity = 1;
int rightMotor2Polarity = -1;

void setLeftMotor1(int power){
	motorSet(leftMotor1, power * leftMotor1Polarity);
}

void setLeftMotor2(int power){
	motorSet(leftMotor2, power * leftMotor2Polarity);
}

void setRightMotor1(int power){
	motorSet(rightMotor1, power * rightMotor1Polarity);
}

void setRightMotor2(int power){
	motorSet(rightMotor2, power * rightMotor2Polarity);
}

void setLeftMotors(int power){
	setLeftMotor1(power);
	setLeftMotor2(power);
}

void setRightMotors(int power){
	setRightMotor1(power);
	setRightMotor2(power);
}

void drive(int power){
	setLeftMotors(power);
	setRightMotors(power);
}



