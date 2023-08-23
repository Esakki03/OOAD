
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


#ifndef MENU_H
#define MENU_H

#include <string>

/**
  * class menu
  * 
  */

class menu
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  menu ();

  /**
   * Empty Destructor
   */
  virtual ~menu ();

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
  void display ()
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

  string hair_style;
  string beard_style;
  string skin_care;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of hair_style
   * @param new_var the new value of hair_style
   */
  void setHair_style (string new_var)   {
      hair_style = new_var;
  }

  /**
   * Get the value of hair_style
   * @return the value of hair_style
   */
  string getHair_style ()   {
    return hair_style;
  }

  /**
   * Set the value of beard_style
   * @param new_var the new value of beard_style
   */
  void setBeard_style (string new_var)   {
      beard_style = new_var;
  }

  /**
   * Get the value of beard_style
   * @return the value of beard_style
   */
  string getBeard_style ()   {
    return beard_style;
  }

  /**
   * Set the value of skin_care
   * @param new_var the new value of skin_care
   */
  void setSkin_care (string new_var)   {
      skin_care = new_var;
  }

  /**
   * Get the value of skin_care
   * @return the value of skin_care
   */
  string getSkin_care ()   {
    return skin_care;
  }
private:


  void initAttributes () ;

};

#endif // MENU_H
