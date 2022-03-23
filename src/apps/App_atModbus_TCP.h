// /**
// @file
// Application for communicating with OP320A&S SNM over RS232/485 (via RTU protocol).
// */
// /*
//   Application_SNM.h - Arduino library for communicating with OP320A&S SNM
//   over RS232/485 (via RTU protocol).


//   This version is

//   Copyright:: 2022 ngoduc1606@gmail.com
// */

// #ifndef _Application_atMB_
// #define _Application_atMB_
// /* _____PROJECT INCLUDES____________________________________________________ */
// #include "App.h"
// #include "..\src\services\modbus\Service_atModbus_TCP.h"
// #include "..\src\services\modbus\Modbus_Register.h"

// /* _____DEFINETIONS__________________________________________________________ */

// /* _____GLOBAL VARIABLES_____________________________________________________ */
// /* _____GLOBAL FUNCTION______________________________________________________ */
// /* _____CLASS DEFINETION_____________________________________________________ */
// /**
//  * This Application class is the application to manage the 
//  */
// class App_MB_TCP : public Application
// {
// public:
//     App_MB_TCP();
//  	~App_MB_TCP();
//   	static void  App_MB_Pend();
// 	static void  App_MB_Start();
// 	static void  App_MB_Restart();
// 	static void  App_MB_Execute();
// 	static void  App_MB_Suspend();
// 	static void  App_MB_Resume();	  
// 	static void  App_MB_End();
// protected:
// private:
// } atMB_TCP_app ;
// /**
//  * This function will be automatical called when a object is created by this class
//  */
// App_MB_TCP::App_MB_TCP(/* args */)
// {
//   	_Pend_User 	     = *App_MB_Pend;
// 	_Start_User 	 = *App_MB_Start;
// 	_Restart_User 	 = *App_MB_Restart;
// 	_Execute_User 	 = *App_MB_Execute;
// 	_Suspend_User	 = *App_MB_Suspend;
// 	_Resume_User	 = *App_MB_Resume;
// 	_End_User	     = *App_MB_End;

// 	// change the ID of application
// 	ID_Application = 3;
// 	// change the application name
// 	Name_Application = (char*)"Modbus TCP Application";
// }
// /**
//  * This function will be automatical called when the object of class is delete
//  */
// App_MB_TCP::~App_MB_TCP()
// {
	
// }
// /**
//  * Pend to start is the fisrt task of this application it will do prerequisite condition. In the debig mode, task will send information of application to terminal to start the application.
//  */
// void  App_MB_TCP::App_MB_Pend()
// {
//     atMB_TCP_app.Debug();
// }
// /**
//  * This start function will init some critical function 
//  */
// void  App_MB_TCP::App_MB_Start()
// {
 
//  /***********
//  ---------- Init General Register ------------
// ***********/

//   for( int count = GENERAL_REGISTER_RW_MODBUS_RTU_ID; count <= GENERAL_REGISTER_R_HUMIDITY; count++){
//      mb_TCP.addHreg(count,count);
//      }


//  /***********
//  ---------- Init SNM Register ------------
// ***********/

//   for( int count = SNM_REGISTER_RW_ST30_SENSOR_STATE; count <= SNM_REGISTER_R_ETHANOL_MIN; count++){
//      mb_TCP.addHreg(count,count);
//      }


// 	// init atXYZ Service in the fist running time
// 	Service_MB_TCP.Run_Service();
// }  
// /**
//  * Restart function of SNM  app
//  */
// void  App_MB_TCP::App_MB_Restart()
// {

// }
// /**
//  * Execute fuction of SNM app
//  */
// void  App_MB_TCP::App_MB_Execute()
// {	    
//   //   if (mb.Hreg(SNM_REGISTER_R_ID_MODBUS) != atMB_app.Modbus_ID)
//   // {
//   //   if (mb.Hreg(SNM_REGISTER_R_ID_MODBUS) < 128)
//   //   {
//   //     atMB_app.Modbus_ID = (uint8_t)mb.Hreg(SNM_REGISTER_R_ID_MODBUS);
//   //     mb.slave(atMB_app.Modbus_ID);
//   //   }
//   // } 
// 	Service_MB_TCP.Run_Service();
// }
// void  App_MB_TCP::App_MB_Suspend(){}
// void  App_MB_TCP::App_MB_Resume(){}	  
// void  App_MB_TCP::App_MB_End(){}

// #endif
