
#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

/**
  * class appointment
  * 
  */

class appointment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  appointment ();

  /**
   * Empty Destructor
   */
  virtual ~appointment ();

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
  void update ()
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

  string name;
  int id;
  int date;
  int time;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (int new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  int getDate ()   {
    return date;
  }

  /**
   * Set the value of time
   * @param new_var the new value of time
   */
  void setTime (int new_var)   {
      time = new_var;
  }

  /**
   * Get the value of time
   * @return the value of time
   */
  int getTime ()   {
    return time;
  }
private:


  void initAttributes () ;

};

#endif // APPOINTMENT_H
