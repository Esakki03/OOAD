
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

/**
  * class Address
  * 
  */

class Address
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Address ();

  /**
   * Empty Destructor
   */
  virtual ~Address ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void city;
  void Street;
  void State;
  void Zip_code;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of city
   * @param new_var the new value of city
   */
  void setCity (void new_var)   {
      city = new_var;
  }

  /**
   * Get the value of city
   * @return the value of city
   */
  void getCity ()   {
    return city;
  }

  /**
   * Set the value of Street
   * @param new_var the new value of Street
   */
  void setStreet (void new_var)   {
      Street = new_var;
  }

  /**
   * Get the value of Street
   * @return the value of Street
   */
  void getStreet ()   {
    return Street;
  }

  /**
   * Set the value of State
   * @param new_var the new value of State
   */
  void setState (void new_var)   {
      State = new_var;
  }

  /**
   * Get the value of State
   * @return the value of State
   */
  void getState ()   {
    return State;
  }

  /**
   * Set the value of Zip_code
   * @param new_var the new value of Zip_code
   */
  void setZip_code (void new_var)   {
      Zip_code = new_var;
  }

  /**
   * Get the value of Zip_code
   * @return the value of Zip_code
   */
  void getZip_code ()   {
    return Zip_code;
  }
private:


  void initAttributes () ;

};

#endif // ADDRESS_H


#ifndef AVAILABILITY_H
#define AVAILABILITY_H

#include <string>

/**
  * class Availability
  * 
  */

class Availability
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Availability ();

  /**
   * Empty Destructor
   */
  virtual ~Availability ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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

  void DayOf_week;
  void Start_Time;
  void End_Time;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of DayOf_week
   * @param new_var the new value of DayOf_week
   */
  void setDayOf_week (void new_var)   {
      DayOf_week = new_var;
  }

  /**
   * Get the value of DayOf_week
   * @return the value of DayOf_week
   */
  void getDayOf_week ()   {
    return DayOf_week;
  }

  /**
   * Set the value of Start_Time
   * @param new_var the new value of Start_Time
   */
  void setStart_Time (void new_var)   {
      Start_Time = new_var;
  }

  /**
   * Get the value of Start_Time
   * @return the value of Start_Time
   */
  void getStart_Time ()   {
    return Start_Time;
  }

  /**
   * Set the value of End_Time
   * @param new_var the new value of End_Time
   */
  void setEnd_Time (void new_var)   {
      End_Time = new_var;
  }

  /**
   * Get the value of End_Time
   * @return the value of End_Time
   */
  void getEnd_Time ()   {
    return End_Time;
  }
private:


  void initAttributes () ;

};

#endif // AVAILABILITY_H
