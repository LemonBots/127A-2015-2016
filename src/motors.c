enum MOTORS
{
    leftMotor1 = 1,
    leftMotor2 = 2,
    rightMotor1 = 3,
    rightMotor2 = 4
}

leftMotor1Polarity = 1;
leftMotor2Polarity = -1;
rightMotor1Polarity = 1;
rightMotor2Polarity = -1;

drive(int power){
	setLeftMotors(power);
	setRightMotors(power);
}

setLeftMotors(int power){
	setLeftMotor1(power);
	setLeftMotor2(power);
}

setRightMotors(int power){
	setRightMotor1(power);
	setRightMotor2(power);
}

setLeftMotor1(int power){
	motorSet(leftMotor1, power * leftMotor1Polarity);
}

setLeftMotor2(int power){
	motorSet(leftMotor2, power * leftMotor2Polarity);
}

setrightMotor1(int power){
	motorSet(rightMotor1, power * rightMotor1Polarity);
}

setRightMotor2(int power){
	motorSet(rightMotor2, power * rightMotor2Polarity);
}

