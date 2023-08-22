
#ifndef ADMIN_H
#define ADMIN_H

#include <string>

/**
  * class Admin
  * 
  */

class Admin
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Admin ();

  /**
   * Empty Destructor
   */
  virtual ~Admin ();

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

  int id;
  string username;
  string password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (string new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  string getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (string new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  string getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H


#ifndef STEP_H
#define STEP_H

#include <string>

/**
  * class step
  * 
  */

class step
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  step ();

  /**
   * Empty Destructor
   */
  virtual ~step ();

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

  int id;
  string stepname;
  string stepdate;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of stepname
   * @param new_var the new value of stepname
   */
  void setStepname (string new_var)   {
      stepname = new_var;
  }

  /**
   * Get the value of stepname
   * @return the value of stepname
   */
  string getStepname ()   {
    return stepname;
  }

  /**
   * Set the value of stepdate
   * @param new_var the new value of stepdate
   */
  void setStepdate (string new_var)   {
      stepdate = new_var;
  }

  /**
   * Get the value of stepdate
   * @return the value of stepdate
   */
  string getStepdate ()   {
    return stepdate;
  }
private:


  void initAttributes () ;

};

#endif // STEP_H
