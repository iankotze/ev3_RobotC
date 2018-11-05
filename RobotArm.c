//Control a robotic arm
//If a button is pushed then a specific motor is moved in
//the desired direction, when you let go of the button then the
//motor stops moving.
//Robot can move up, down, left, right and operate one attachement

#pragma config(Motor,  motorB,          DrillMotor,    tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          Vertical,      tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorD,          Horizontal,    tmotorEV3_Large, PIDControl, encoder)


task UpAndDown()
{
	while (true)
	{
		while(getButtonPress(buttonUp)==1)
		{
			setMotorSpeed(motorC,-10);
		}
		while (getButtonPress(buttonDown)==1)
		{
			setMotorSpeed(motorC,10);
		}
		setMotorSpeed(motorC,0);
	}
}
task LeftAndRight()
{
	while (true)
	{
		while(getButtonPress(buttonLeft)==1)
		{
		§	setMotorSpeed(motorD,-10);
		}
		while (getButtonPress(buttonRight)==1)
		{
			setMotorSpeed(motorD,10);
		}
		setMotorSpeed(motorD,0);
	}
}

task Drill()
{
	while (true)
	{
		if(getButtonPress(buttonEnter)==1)
		{
			setMotorSpeed(motorB,100);
		}
		else
		{
			setMotorSpeed(motorB,0);
		}
	}
}

task main()
{
	while(true)
	{
		startTask(UpAndDown);
		startTask(LeftAndRight);
		startTask(Drill);
	}
}
