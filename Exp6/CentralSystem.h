
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


#ifndef CENTRALSYSTEM_H
#define CENTRALSYSTEM_H

#include <string>

/**
  * class CentralSystem
  * 
  */

class CentralSystem
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  CentralSystem ();

  /**
   * Empty Destructor
   */
  virtual ~CentralSystem ();

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
  void centralsystem ()
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

  void Store;
  void update;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Store
   * @param new_var the new value of Store
   */
  void setStore (void new_var)   {
      Store = new_var;
  }

  /**
   * Get the value of Store
   * @return the value of Store
   */
  void getStore ()   {
    return Store;
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

#endif // CENTRALSYSTEM_H
