
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>

/**
  * class Controller
  * 
  */

class Controller
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Controller ();

  /**
   * Empty Destructor
   */
  virtual ~Controller ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void Check_Fire ()
  {
  }


  /**
   */
  void Check_Intrusion ()
  {
  }


  /**
   */
  void Write_alert ()
  {
  }


  /**
   */
  void read_command ()
  {
  }


  /**
   */
  void control_fan ()
  {
  }


  /**
   */
  void control_light ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  string Alert_Msg;
  string Command;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Alert_Msg
   * @param new_var the new value of Alert_Msg
   */
  void setAlert_Msg (string new_var)   {
      Alert_Msg = new_var;
  }

  /**
   * Get the value of Alert_Msg
   * @return the value of Alert_Msg
   */
  string getAlert_Msg ()   {
    return Alert_Msg;
  }

  /**
   * Set the value of Command
   * @param new_var the new value of Command
   */
  void setCommand (string new_var)   {
      Command = new_var;
  }

  /**
   * Get the value of Command
   * @return the value of Command
   */
  string getCommand ()   {
    return Command;
  }
private:


  void initAttributes () ;

};

#endif // CONTROLLER_H


#ifndef FAN_H
#define FAN_H

#include <string>

/**
  * class Fan
  * 
  */

class Fan
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Fan ();

  /**
   * Empty Destructor
   */
  virtual ~Fan ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void on ()
  {
  }


  /**
   */
  void off ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  On/Off Status;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Status
   * @param new_var the new value of Status
   */
  void setStatus (On/Off new_var)   {
      Status = new_var;
  }

  /**
   * Get the value of Status
   * @return the value of Status
   */
  On/Off getStatus ()   {
    return Status;
  }
private:


  void initAttributes () ;

};

#endif // FAN_H
