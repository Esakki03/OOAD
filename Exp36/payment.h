
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class customer
  * 
  */

class customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  customer ();

  /**
   * Empty Destructor
   */
  virtual ~customer ();

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

  int id;
  string name;
  int contact;
  string address;
  int payment;
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
   * Set the value of contact
   * @param new_var the new value of contact
   */
  void setContact (int new_var)   {
      contact = new_var;
  }

  /**
   * Get the value of contact
   * @return the value of contact
   */
  int getContact ()   {
    return contact;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (string new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  string getAddress ()   {
    return address;
  }

  /**
   * Set the value of payment
   * @param new_var the new value of payment
   */
  void setPayment (int new_var)   {
      payment = new_var;
  }

  /**
   * Get the value of payment
   * @return the value of payment
   */
  int getPayment ()   {
    return payment;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H


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



  /**
   */
  void add ()
  {
  }


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

  string payment_method;
  int amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of payment_method
   * @param new_var the new value of payment_method
   */
  void setPayment_method (string new_var)   {
      payment_method = new_var;
  }

  /**
   * Get the value of payment_method
   * @return the value of payment_method
   */
  string getPayment_method ()   {
    return payment_method;
  }

  /**
   * Set the value of amount
   * @param new_var the new value of amount
   */
  void setAmount (int new_var)   {
      amount = new_var;
  }

  /**
   * Get the value of amount
   * @return the value of amount
   */
  int getAmount ()   {
    return amount;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_H
