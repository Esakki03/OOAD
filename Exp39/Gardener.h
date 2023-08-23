
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


#ifndef GARDENER_H
#define GARDENER_H

#include <string>

/**
  * class Gardener
  * 
  */

class Gardener
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Gardener ();

  /**
   * Empty Destructor
   */
  virtual ~Gardener ();

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
  void Add_Availablity ()
  {
  }


  /**
   */
  void scheduleMaintenance ()
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
  void Expertise;
  void Availability;
  void Bookings;
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
   * Set the value of Expertise
   * @param new_var the new value of Expertise
   */
  void setExpertise (void new_var)   {
      Expertise = new_var;
  }

  /**
   * Get the value of Expertise
   * @return the value of Expertise
   */
  void getExpertise ()   {
    return Expertise;
  }

  /**
   * Set the value of Availability
   * @param new_var the new value of Availability
   */
  void setAvailability (void new_var)   {
      Availability = new_var;
  }

  /**
   * Get the value of Availability
   * @return the value of Availability
   */
  void getAvailability ()   {
    return Availability;
  }

  /**
   * Set the value of Bookings
   * @param new_var the new value of Bookings
   */
  void setBookings (void new_var)   {
      Bookings = new_var;
  }

  /**
   * Get the value of Bookings
   * @return the value of Bookings
   */
  void getBookings ()   {
    return Bookings;
  }
private:


  void initAttributes () ;

};

#endif // GARDENER_H
