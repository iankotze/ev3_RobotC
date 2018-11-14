//Extension of the CountBumped program so that the number of times different buttons are getBumpedValue
//are enumerated. 

task main()
{
	//Declare all the variables
	int Sue=0;
	int Sam=0;
	//
	string stringy ="";

	//Loop that waits for left of right buttons to be pushed
	//If the button is pushed then add 1 to the integer variable
	while(true)
	{
		//
		if(getButtonPress(buttonLeft)==1)
		{
			//Add 1 to Sue
			++Sue;
			playSoundFile("Connect");
			wait10Msec(100);
		}
		if(getButtonPress(buttonRight)==1)
		{
			//Add 2 to Sam
			++Sam;
			playSoundFile("Connect");
			wait10Msec(100);

		}
		//Convert the Sam Integer variable to a string and concatenate it with another string
		sprintf(stringy,"Sam %d", Sam);
		//Display the new string
		displayText(line4,stringy);
		//Same as above but for the next integer variable
		sprintf(stringy,"Sue %d", Sue);
		displayText(line5,stringy);
	}

}
