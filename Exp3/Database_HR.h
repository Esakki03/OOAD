
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


#ifndef DATABASE_HR_H
#define DATABASE_HR_H

#include <string>

/**
  * class Database_HR
  * 
  */

class Database_HR
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Database_HR ();

  /**
   * Empty Destructor
   */
  virtual ~Database_HR ();

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
  void Get_details ()
  {
  }


  /**
   */
  void Update_Details ()
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
private:


  void initAttributes () ;

};

#endif // DATABASE_HR_H
