#ifndef CONST_H
#define CONST_H

//This header file contains some defenitions to be used all over the application

//All possible actions
	enum  ActionType
	{
		ADD_AND_GATE_2,		//Add 2-input AND gate
		ADD_OR_GATE_2,		//Add 2-input OR gate
		ADD_NOR_GATE_2,		//Add 2-input NOR gate
		ADD_NAND_GATE_2,	//Add 2-input NAND gate
		ADD_XNOR_GATE_2,	//Add 2-input XNOR gate
		ADD_XOR_GATE_2,		//Add 2-input XOR gate
		ADD_NOT_GATE_2,
		ADD_Buff,			//Add 1-input Buffer gate
		SAVE,		//Save the whole Circuit to a file
		LOAD,		//Load a Circuit from a file
		DEL,		//Delete a Component, a Connection
		EDIT_Label,			//Edit Label of a Component, a Connection
		ADD_CONNECTION,		//Add Wire Connection
		ADD_Switch,			//Add Switch
		MOVE,		//Move a Component, a Connection
		ADD_LED,			//Add LED
		EXIT,		//Exit the application
		ADD_Label,			//Add Label to a Component, a Connection
		ADD_INV,			//Add 1-input Inverter gate
		Change_Switch,		//Change Switch Status in Simulation Mode
		SELECT,		//Select a Component, a Connection
		UNDO,		//Undo the last Action preformed
		REDO,		//Redo the last Action canceled
		DSN_MODE,	//Switch to Design mode
		SIM_MODE,	//Switch to Simulatiom mod
		STATUS_BAR,		//A click on the status bar
		DSN_TOOL,	//A click on an empty place in the design tool bar
	};


//Possible Status for the pin
enum STATUS
{
	LOW,
	HIGH,
	NCON	//not connected
};

enum  MODE	//Modes of operation
{
	DESIGN,
	SIMULATION
};

//Maximum number of input pins that can be connected to any output pin
#define MAX_CONNS 20

//assume fan out is 5 for now it can be read from the user or can be predefined as const
enum FANOUT
{
	AND2_FANOUT = 5	//Default fan out of 2-input AND gate
};


#ifndef NULL
#define NULL 0
#endif

#endif