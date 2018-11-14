//code that count how many times a touch sensor has been bumped in 3 seconds

#pragma config(Sensor, S1,     T1,             sensorEV3_Touch)


task main()

{

string stringy ="";
resetBumpedValue(S1);
eraseDisplay();
displayBigStringAt(0,16,"Ready");

wait10Msec(500); //This wait block is so that the robot has time to reset the counter
eraseDisplay();
playSound(soundBlip);

clearTimer(T1);
//Loops code while timer T1 has counter less than 3 seconds
while(time1[T1]<3000)
	{
		sprintf(stringy,"Count %d", getBumpedValue(S1));
		displayBigStringAt(0,16,stringy);
	}
wait10Msec(500);
}
