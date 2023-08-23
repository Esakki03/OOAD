
#ifndef ADD_H
#define ADD_H

#include <string>

/**
  * class Add
  * 
  */

class Add
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Add ();

  /**
   * Empty Destructor
   */
  virtual ~Add ();

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
  void Add_Client ()
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

  string Client_Name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Client_Name
   * @param new_var the new value of Client_Name
   */
  void setClient_Name (string new_var)   {
      Client_Name = new_var;
  }

  /**
   * Get the value of Client_Name
   * @return the value of Client_Name
   */
  string getClient_Name ()   {
    return Client_Name;
  }
private:


  void initAttributes () ;

};

#endif // ADD_H
