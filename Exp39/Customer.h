
#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

/**
  * class Address
  * 
  */

class Address
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Address ();

  /**
   * Empty Destructor
   */
  virtual ~Address ();

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

  void city;
  void Street;
  void State;
  void Zip_code;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of city
   * @param new_var the new value of city
   */
  void setCity (void new_var)   {
      city = new_var;
  }

  /**
   * Get the value of city
   * @return the value of city
   */
  void getCity ()   {
    return city;
  }

  /**
   * Set the value of Street
   * @param new_var the new value of Street
   */
  void setStreet (void new_var)   {
      Street = new_var;
  }

  /**
   * Get the value of Street
   * @return the value of Street
   */
  void getStreet ()   {
    return Street;
  }

  /**
   * Set the value of State
   * @param new_var the new value of State
   */
  void setState (void new_var)   {
      State = new_var;
  }

  /**
   * Get the value of State
   * @return the value of State
   */
  void getState ()   {
    return State;
  }

  /**
   * Set the value of Zip_code
   * @param new_var the new value of Zip_code
   */
  void setZip_code (void new_var)   {
      Zip_code = new_var;
  }

  /**
   * Get the value of Zip_code
   * @return the value of Zip_code
   */
  void getZip_code ()   {
    return Zip_code;
  }
private:


  void initAttributes () ;

};

#endif // ADDRESS_H


#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

/**
  * class Customer
  * 
  */

class Customer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Customer ();

  /**
   * Empty Destructor
   */
  virtual ~Customer ();

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
  void Make_booking ()
  {
  }


  /**
   */
  void Cancel_Booking ()
  {
  }


  /**
   */
  void View_Booking_Status ()
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

  void Id;
  void First_name;
  void Last_name;
  void Email;
  void Phone_Number;
  void Address;
  void Booking;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Id
   * @param new_var the new value of Id
   */
  void setId (void new_var)   {
      Id = new_var;
  }

  /**
   * Get the value of Id
   * @return the value of Id
   */
  void getId ()   {
    return Id;
  }

  /**
   * Set the value of First_name
   * @param new_var the new value of First_name
   */
  void setFirst_name (void new_var)   {
      First_name = new_var;
  }

  /**
   * Get the value of First_name
   * @return the value of First_name
   */
  void getFirst_name ()   {
    return First_name;
  }

  /**
   * Set the value of Last_name
   * @param new_var the new value of Last_name
   */
  void setLast_name (void new_var)   {
      Last_name = new_var;
  }

  /**
   * Get the value of Last_name
   * @return the value of Last_name
   */
  void getLast_name ()   {
    return Last_name;
  }

  /**
   * Set the value of Email
   * @param new_var the new value of Email
   */
  void setEmail (void new_var)   {
      Email = new_var;
  }

  /**
   * Get the value of Email
   * @return the value of Email
   */
  void getEmail ()   {
    return Email;
  }

  /**
   * Set the value of Phone_Number
   * @param new_var the new value of Phone_Number
   */
  void setPhone_Number (void new_var)   {
      Phone_Number = new_var;
  }

  /**
   * Get the value of Phone_Number
   * @return the value of Phone_Number
   */
  void getPhone_Number ()   {
    return Phone_Number;
  }

  /**
   * Set the value of Address
   * @param new_var the new value of Address
   */
  void setAddress (void new_var)   {
      Address = new_var;
  }

  /**
   * Get the value of Address
   * @return the value of Address
   */
  void getAddress ()   {
    return Address;
  }

  /**
   * Set the value of Booking
   * @param new_var the new value of Booking
   */
  void setBooking (void new_var)   {
      Booking = new_var;
  }

  /**
   * Get the value of Booking
   * @return the value of Booking
   */
  void getBooking ()   {
    return Booking;
  }
private:


  void initAttributes () ;

};

#endif // CUSTOMER_H
