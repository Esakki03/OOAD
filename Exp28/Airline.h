
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


#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>

/**
  * class Airline
  * 
  */

class Airline
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Airline ();

  /**
   * Empty Destructor
   */
  virtual ~Airline ();

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
  void getDetails ()
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

  string AirlineName;
  int FlightNumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of AirlineName
   * @param new_var the new value of AirlineName
   */
  void setAirlineName (string new_var)   {
      AirlineName = new_var;
  }

  /**
   * Get the value of AirlineName
   * @return the value of AirlineName
   */
  string getAirlineName ()   {
    return AirlineName;
  }

  /**
   * Set the value of FlightNumber
   * @param new_var the new value of FlightNumber
   */
  void setFlightNumber (int new_var)   {
      FlightNumber = new_var;
  }

  /**
   * Get the value of FlightNumber
   * @return the value of FlightNumber
   */
  int getFlightNumber ()   {
    return FlightNumber;
  }
private:


  void initAttributes () ;

};

#endif // AIRLINE_H
