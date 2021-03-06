#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//Drive Robot in Random Direction, Speed and Duration
task main()
{
	//Declare variables
	int randomOptions = 0;
	int randomSpeed = 0;
	int randomRotation = 0;
	string stringy = "";
	while (1)
	{
		randomOptions = random(3); //random option of forward,backward,left or right
		randomSpeed = random(100); //random speed between 0 and 100
		randomRotation = random(10); //random number of rotoations between 0 and 10



		switch(randomOptions) //Depending on the random number generated we will do 4 different things and display what is happening.
		{
		case 0:
			eraseDisplay();
			displayText(line3,"Backward");
			sprintf(stringy,"Speed %d", randomSpeed);
			displayText(line4,stringy);
			sprintf(stringy,"Rotations %d", randomRotation);
			displayText(line5,stringy);
			backward(randomRotation,rotations, randomSpeed);
			break;
		case 1:
			eraseDisplay();
			displayText(line3,"Forward");
			sprintf(stringy,"Speed %d", randomSpeed);
			displayText(line4,stringy);
			sprintf(stringy,"Rotations %d", randomRotation);
			displayText(line5,stringy);
			forward(randomRotation,rotations, randomSpeed);
			break;
		case	2:
			eraseDisplay();
			displayText(line3,"Turn Left");
			sprintf(stringy,"Speed %d", randomSpeed);
			displayText(line4,stringy);
			sprintf(stringy,"Rotations %d", randomRotation);
			displayText(line5,stringy);
			turnLeft(randomRotation,rotations, randomSpeed);
			break;
		case	3:
			eraseDisplay();
			displayText(line3,"Turn Right");
			sprintf(stringy,"Speed %d", randomSpeed);
			displayText(line4,stringy);
			sprintf(stringy,"Rotations %d", randomRotation);
			displayText(line5,stringy);
			turnRight(randomRotation,rotations, randomSpeed);
			break;

		default: //If for some reason none of the above numbers are generated, then we do nothing.
		}
	}
}
