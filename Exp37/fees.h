
#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>

/**
  * class Appointment
  * 
  */

class Appointment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Appointment ();

  /**
   * Empty Destructor
   */
  virtual ~Appointment ();

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
  void update_appointment ()
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

  string patient_name;
  int patient_id;
  string date;
  string time;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of patient_name
   * @param new_var the new value of patient_name
   */
  void setPatient_name (string new_var)   {
      patient_name = new_var;
  }

  /**
   * Get the value of patient_name
   * @return the value of patient_name
   */
  string getPatient_name ()   {
    return patient_name;
  }

  /**
   * Set the value of patient_id
   * @param new_var the new value of patient_id
   */
  void setPatient_id (int new_var)   {
      patient_id = new_var;
  }

  /**
   * Get the value of patient_id
   * @return the value of patient_id
   */
  int getPatient_id ()   {
    return patient_id;
  }

  /**
   * Set the value of date
   * @param new_var the new value of date
   */
  void setDate (string new_var)   {
      date = new_var;
  }

  /**
   * Get the value of date
   * @return the value of date
   */
  string getDate ()   {
    return date;
  }

  /**
   * Set the value of time
   * @param new_var the new value of time
   */
  void setTime (string new_var)   {
      time = new_var;
  }

  /**
   * Get the value of time
   * @return the value of time
   */
  string getTime ()   {
    return time;
  }
private:


  void initAttributes () ;

};

#endif // APPOINTMENT_H


#ifndef FEES_H
#define FEES_H

#include <string>

/**
  * class fees
  * 
  */

class fees
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  fees ();

  /**
   * Empty Destructor
   */
  virtual ~fees ();

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
  void addpayment ()
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

  int payment;
  int amount;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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

#endif // FEES_H
