
#ifndef BUS_H
#define BUS_H

#include <string>

/**
  * class Bus
  * 
  */

class Bus
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Bus ();

  /**
   * Empty Destructor
   */
  virtual ~Bus ();

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

  void Bus_no;
  void Bus_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Bus_no
   * @param new_var the new value of Bus_no
   */
  void setBus_no (void new_var)   {
      Bus_no = new_var;
  }

  /**
   * Get the value of Bus_no
   * @return the value of Bus_no
   */
  void getBus_no ()   {
    return Bus_no;
  }

  /**
   * Set the value of Bus_name
   * @param new_var the new value of Bus_name
   */
  void setBus_name (void new_var)   {
      Bus_name = new_var;
  }

  /**
   * Get the value of Bus_name
   * @return the value of Bus_name
   */
  void getBus_name ()   {
    return Bus_name;
  }
private:


  void initAttributes () ;

};

#endif // BUS_H


#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

/**
  * class payment
  * 
  */

class payment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  payment ();

  /**
   * Empty Destructor
   */
  virtual ~payment ();

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

  void Amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Amount
   * @param new_var the new value of Amount
   */
  void setAmount (void new_var)   {
      Amount = new_var;
  }

  /**
   * Get the value of Amount
   * @return the value of Amount
   */
  void getAmount ()   {
    return Amount;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
