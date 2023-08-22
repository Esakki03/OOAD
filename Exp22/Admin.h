
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
  void Create ()
  {
  }


  /**
   */
  void Update ()
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

  int ID;
  string Name;
  string Age;
  // 				
  string Username;
  // 
  // 
  // 			
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of ID
   * @param new_var the new value of ID
   */
  void setID (int new_var)   {
      ID = new_var;
  }

  /**
   * Get the value of ID
   * @return the value of ID
   */
  int getID ()   {
    return ID;
  }

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
   * Set the value of Age
   * @param new_var the new value of Age
   */
  void setAge (string new_var)   {
      Age = new_var;
  }

  /**
   * Get the value of Age
   * @return the value of Age
   */
  string getAge ()   {
    return Age;
  }

  /**
   * Set the value of Username
   * 
   * @param new_var the new value of Username
   */
  void setUsername (string new_var)   {
      Username = new_var;
  }

  /**
   * Get the value of Username
   * 
   * @return the value of Username
   */
  string getUsername ()   {
    return Username;
  }

  /**
   * Set the value of Password
   * 
   * 
   * 
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * 
   * 
   * 
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // ADMIN_H
