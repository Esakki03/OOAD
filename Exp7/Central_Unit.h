
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



  /**
   */
  void verify ()
  {
  }


  /**
   */
  void approve_user ()
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

  void username;
  void password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of username
   * @param new_var the new value of username
   */
  void setUsername (void new_var)   {
      username = new_var;
  }

  /**
   * Get the value of username
   * @return the value of username
   */
  void getUsername ()   {
    return username;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword (void new_var)   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  void getPassword ()   {
    return password;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H


#ifndef CENTRAL_UNIT_H
#define CENTRAL_UNIT_H

#include <string>

/**
  * class Central_Unit
  * 
  */

class Central_Unit
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Central_Unit ();

  /**
   * Empty Destructor
   */
  virtual ~Central_Unit ();

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
  void Add ()
  {
  }


  /**
   */
  void Update ()
  {
  }


  /**
   */
  void Delete ()
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
  void Update;
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
   * Set the value of Update
   * @param new_var the new value of Update
   */
  void setUpdate (void new_var)   {
      Update = new_var;
  }

  /**
   * Get the value of Update
   * @return the value of Update
   */
  void getUpdate ()   {
    return Update;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_UNIT_H
