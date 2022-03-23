/**
@file
Application for communicating with OP320A&S SNM over RS232/485 (via RTU protocol).
*/
/*
  Application_SNM.h - Arduino library for communicating with OP320A&S SNM
  over RS232/485 (via RTU protocol).


  This version is

  Copyright:: 2022 ngoduc1606@gmail.com
*/

#ifndef _Application_atMB_
#define _Application_atMB_
/* _____PROJECT INCLUDES____________________________________________________ */
#include "App.h"
#include "..\src\services\modbus\Service_atModbus.h"
#include "..\src\services\modbus\Modbus_Register.h"

/* _____DEFINETIONS__________________________________________________________ */
#define MODBUS_RX_PIN 16
#define MODBUS_TX_PIN 17
SoftwareSerial Serial_Modbus_1(MODBUS_RX_PIN, MODBUS_TX_PIN);
/* _____GLOBAL VARIABLES_____________________________________________________ */
/* _____GLOBAL FUNCTION______________________________________________________ */
uint8_t Modbus_ID = 3;
/* _____CLASS DEFINETION_____________________________________________________ */
/**
 * This Application class is the application to manage the 
 */
class App_MB : public Application
{
public:
    uint8_t Modbus_ID = 3;
  	App_MB();
 	~App_MB();
  	static void  App_MB_Pend();
	static void  App_MB_Start();
	static void  App_MB_Restart();
	static void  App_MB_Execute();
	static void  App_MB_Suspend();
	static void  App_MB_Resume();	  
	static void  App_MB_End();
protected:
private:
} atMB_app ;
/**
 * This function will be automatical called when a object is created by this class
 */
App_MB::App_MB(/* args */)
{
  	_Pend_User 	     = *App_MB_Pend;
	_Start_User 	 = *App_MB_Start;
	_Restart_User 	 = *App_MB_Restart;
	_Execute_User 	 = *App_MB_Execute;
	_Suspend_User	 = *App_MB_Suspend;
	_Resume_User	 = *App_MB_Resume;
	_End_User	     = *App_MB_End;

	// change the ID of application
	ID_Application = 1;
	// change the application name
	Name_Application = (char*)"Modbus Application";
	// change the ID of SNM
    Modbus_ID = 3;
}
/**
 * This function will be automatical called when the object of class is delete
 */
App_MB::~App_MB()
{
	
}
/**
 * Pend to start is the fisrt task of this application it will do prerequisite condition. In the debig mode, task will send information of application to terminal to start the application.
 */
void  App_MB::App_MB_Pend()
{
    atMB_app.Debug();
}
/**
 * This start function will init some critical function 
 */
void  App_MB::App_MB_Start()
{
    Serial_Modbus_1.begin(9600, SWSERIAL_8E1);
    mb.begin(&Serial_Modbus_1);
    mb.slave(atMB_app.Modbus_ID);
    
    mb.addHreg(SNM_REGISTER_R_ID_MODBUS,atMB_app.Modbus_ID);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_ST30_SENSOR_STATE,10);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_SGP30_SENSOR_STATE,18);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_FAULT_CODE,51);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_SAMPLING_INTERVAL,12);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_NUMBER_SAMPLING,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_RW_RANGE_TIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TEMPERATURE_REALTIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TEMPERATURE_MEAN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TEMPERATURE_MAX,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TEMPERATURE_MIN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_HUMIDITY_REALTIME,11);
    delay(50);
    mb.addHreg(SNM_REGISTER_R_HUMIDITY_MEAN,11);
    delay(50);
    mb.addHreg(SNM_REGISTER_R_HUMIDITY_MAX,11);
    delay(50);
    mb.addHreg(SNM_REGISTER_R_HUMIDITY_MIN,11);
    delay(50);
    mb.addHreg(SNM_REGISTER_R_CO2_REALTIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_CO2_MEAN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_CO2_MAX,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_CO2_MIN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_H2_REALTIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_H2_MEAN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_H2_MAX,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_H2_MIN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TVOC_REALTIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TVOC_MEAN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TVOC_MAX,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_TVOC_MIN,11);
    mb.addHreg(SNM_REGISTER_R_ETHANOL_REALTIME,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_ETHANOL_MEAN,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_ETHANOL_MAX,11);
    delay(100);
    mb.addHreg(SNM_REGISTER_R_ETHANOL_MIN,11);
    delay(100);
	// init atXYZ Service in the fist running time
	atMB.Run_Service();
}  
/**
 * Restart function of SNM  app
 */
void  App_MB::App_MB_Restart()
{

}
/**
 * Execute fuction of SNM app
 */
void  App_MB::App_MB_Execute()
{	    
  //   if (mb.Hreg(SNM_REGISTER_R_ID_MODBUS) != atMB_app.Modbus_ID)
  // {
  //   if (mb.Hreg(SNM_REGISTER_R_ID_MODBUS) < 128)
  //   {
  //     atMB_app.Modbus_ID = (uint8_t)mb.Hreg(SNM_REGISTER_R_ID_MODBUS);
  //     mb.slave(atMB_app.Modbus_ID);
  //   }
  // } 
	atMB.Run_Service();
}
void  App_MB::App_MB_Suspend(){}
void  App_MB::App_MB_Resume(){}	  
void  App_MB::App_MB_End(){}

#endif
