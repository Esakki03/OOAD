
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


#ifndef PATIENT_H
#define PATIENT_H

#include <string>

/**
  * class patient
  * 
  */

class patient
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  patient ();

  /**
   * Empty Destructor
   */
  virtual ~patient ();

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
  void add_patient ()
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

  string name;
  string address;
  string email;
  int mobile;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of email
   * @param new_var the new value of email
   */
  void setEmail (string new_var)   {
      email = new_var;
  }

  /**
   * Get the value of email
   * @return the value of email
   */
  string getEmail ()   {
    return email;
  }

  /**
   * Set the value of mobile
   * @param new_var the new value of mobile
   */
  void setMobile (int new_var)   {
      mobile = new_var;
  }

  /**
   * Get the value of mobile
   * @return the value of mobile
   */
  int getMobile ()   {
    return mobile;
  }
private:


  void initAttributes () ;

};

#endif // PATIENT_H
