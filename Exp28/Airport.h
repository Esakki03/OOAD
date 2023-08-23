
#ifndef AIRCRAFT_H
#define AIRCRAFT_H

#include <string>

/**
  * class Aircraft
  * 
  */

class Aircraft
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Aircraft ();

  /**
   * Empty Destructor
   */
  virtual ~Aircraft ();

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
  void Get_Reg_NO ()
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

  int RegistrationNumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of RegistrationNumber
   * @param new_var the new value of RegistrationNumber
   */
  void setRegistrationNumber (int new_var)   {
      RegistrationNumber = new_var;
  }

  /**
   * Get the value of RegistrationNumber
   * @return the value of RegistrationNumber
   */
  int getRegistrationNumber ()   {
    return RegistrationNumber;
  }
private:


  void initAttributes () ;

};

#endif // AIRCRAFT_H


#ifndef AIRPORT_H
#define AIRPORT_H

#include <string>

/**
  * class Airport
  * 
  */

class Airport
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Airport ();

  /**
   * Empty Destructor
   */
  virtual ~Airport ();

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
  void get_airport_details ()
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

  int AirportCode;
  string AirportName;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of AirportCode
   * @param new_var the new value of AirportCode
   */
  void setAirportCode (int new_var)   {
      AirportCode = new_var;
  }

  /**
   * Get the value of AirportCode
   * @return the value of AirportCode
   */
  int getAirportCode ()   {
    return AirportCode;
  }

  /**
   * Set the value of AirportName
   * @param new_var the new value of AirportName
   */
  void setAirportName (string new_var)   {
      AirportName = new_var;
  }

  /**
   * Get the value of AirportName
   * @return the value of AirportName
   */
  string getAirportName ()   {
    return AirportName;
  }
private:


  void initAttributes () ;

};

#endif // AIRPORT_H
