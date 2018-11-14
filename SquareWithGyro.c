//Drive in a square using a gyroscope as a guide
//Turn until Gyroscope has turned more than 90 degrees then go straight
#pragma config(Sensor, S2,     gyroSensor,     sensorEV3_Gyro, modeEV3Gyro_RateAndAngle)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)

task main()
{
	repeat(1)
	{
		forward(1,100);
		resetGyro(S2);
		while(getGyroDegrees(S2)<90)
		{
			setMotor(motorB,50);
			setMotor(motorC,-50);
		}
	}
}
