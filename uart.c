

/*
	This function initializes the register of the UART
	Parameters:void
	return: void

*/
void configureUART()
{

// we will initialize all the bits to initialize our uart, like parity enable, data length, MSB, or LSB and make it asynchronous

}

/*
	This function transmits 8 bit data to the receiver
	Parameters: uint8 u8Data
	return: 1,0 1-success, 0 - error

*/
bool writeData(uint8 u8Data)
{

  //1. pass u8Data to uart register data in loop until register bit sent is set
  uart register = u8Data;
  
  while(Transmission complete == 0)
  {}
  

}

/*
	This function receives 8 bit data from the receiver register and validates it using parity check
	Parameters: void
	return: 1,0 1-success, 0 - error

*/

bool validateUartData(void)
{
	//1.loop until receive bit is 
	//2. receive data 
	//3. check data if valid, Odd parity check
	while(ReceiveFlag==0)
		
	u8Temp = uart register data ;
	
	//check if data received number 1s is odd, then return 1 else return 0
	
}

/*
	This function gets the valid 8 bit data
	Parameters: uint8 u8ReceiveData
	return: 1,0 1-success, 0 - error

*/

bool readData(uint8 u8ReceiveData)
{
	if(validData  == 1)
	{
		u8ReceiveData = u8Temp;//received data from transmitter;
		return 1
	}
	else 
		return 0

}

/*
	This function enables the uart to operate
	Parameters: void
	return: void

*/
void openUart(void)
{}


/*
	This function disables the uart to operate
	Parameters: void
	return: void

*/
void closeUart(void)
{}



