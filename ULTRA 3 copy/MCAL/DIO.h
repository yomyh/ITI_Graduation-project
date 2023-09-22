

#ifndef DIO_H_
#define DIO_H_
#include "std.h"
/*
	Function Name        : DIO_vsetPINDir
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber,unsigned char direction
	Function Description : Set the direction of the given pin in the given port (direction 0 = input : 1 = output)
*/
void DIO_vsetPINDir(c8 portname,c8 pinnumber,c8 direction);

/*
	Function Name        : DIO_write
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber,unsigned char outputvalue
	Function Description : Set the value of the given pin in the given port (outputvalue 0 = low : 1 = high) 
*/
void DIO_write(c8 portname,c8 pinnumber,c8 outputvalue);

/*
	Function Name        : DIO_u8read
	Function Returns     : unsigned char
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
*/
unsigned char DIO_u8read(c8 portname,c8 pinnumber);

/*
	Function Name        : DIO_toggle
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char pinnumber
	Function Description : Reverse the value of the given pin in the given port.
*/
void DIO_toggle(c8 portname,c8 pinnumber);

/*
	Function Name        : DIO_set_port_direction
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char direction
	Function Description : set the direction of whole port .
*/

void DIO_set_port_direction(c8 portname,c8 direction);


/*
	Function Name        : DIO_write_port
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char portvalue
	Function Description : Write the value to all port pins.
*/

void DIO_write_port(c8 portname,c8 portvalue);

/*
	Function Name        : DIO_read_port
	Function Returns     : unsigned char
	Function Arguments   : unsigned char portname
	Function Description : read the value of the port .
*/
unsigned char DIO_read_port(c8 portname);

/*
	Function Name        : DIO_vconnectpullup
	Function Returns     : void
	Function Arguments   : char portname ,char pinnumber, char connect_pullup
	Function Description : Connect and disconnect pull up resistor to the given pin at the given port 
*/
void DIO_vconnectpullup(c8 portname ,c8 pinnumber, c8 connect_pullup);
/*
	Function Name        : write_low_nibble
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char value
	Function Description : write a value to the low nibble of the port 
*/
void write_low_nibble(c8 portname,c8 value);
/*
	Function Name        : write_high_nibble
	Function Returns     : void
	Function Arguments   : unsigned char portname,unsigned char value
	Function Description : write a value to the high nibble of the port 
*/
void write_high_nibble(c8 portname,c8 value);
#endif

