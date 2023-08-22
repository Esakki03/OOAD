
#ifndef CENTRAL_SYSTEM1_H
#define CENTRAL_SYSTEM1_H

#include <string>

/**
  * class Central_System1
  * 
  */

class Central_System1
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Central_System1 ();

  /**
   * Empty Destructor
   */
  virtual ~Central_System1 ();

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
  void storing ()
  {
  }


  /**
   */
  void updating ()
  {
  }


  /**
   */
  void processing ()
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

  void store;
  void update;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of store
   * @param new_var the new value of store
   */
  void setStore (void new_var)   {
      store = new_var;
  }

  /**
   * Get the value of store
   * @return the value of store
   */
  void getStore ()   {
    return store;
  }

  /**
   * Set the value of update
   * @param new_var the new value of update
   */
  void setUpdate (void new_var)   {
      update = new_var;
  }

  /**
   * Get the value of update
   * @return the value of update
   */
  void getUpdate ()   {
    return update;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_SYSTEM1_H


#ifndef PROCESS_AGENT_HR_H
#define PROCESS_AGENT_HR_H

#include <string>

/**
  * class Process_Agent_HR
  * 
  */

class Process_Agent_HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Process_Agent_HR ();

  /**
   * Empty Destructor
   */
  virtual ~Process_Agent_HR ();

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
  void make_call ()
  {
  }


  /**
   */
  void Pitches_About_Product ()
  {
  }


  /**
   */
  void Make_Sales ()
  {
  }


  /**
   */
  void Ends_The_call ()
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

  string Name;
  integer id;
  integer PHONE_NO;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }

  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (integer new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  integer getId ()   {
    return id;
  }

  /**
   * Set the value of PHONE_NO
   * @param new_var the new value of PHONE_NO
   */
  void setPHONE_NO (integer new_var)   {
      PHONE_NO = new_var;
  }

  /**
   * Get the value of PHONE_NO
   * @return the value of PHONE_NO
   */
  integer getPHONE_NO ()   {
    return PHONE_NO;
  }
private:


  void initAttributes () ;

};

#endif // PROCESS_AGENT_HR_H
