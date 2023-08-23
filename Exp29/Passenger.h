
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


#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

/**
  * class Passenger
  * 
  */

class Passenger
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Passenger ();

  /**
   * Empty Destructor
   */
  virtual ~Passenger ();

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
  void Search_Bus ()
  {
  }


  /**
   */
  void Book_ticket ()
  {
  }


  /**
   */
  void Cancel_ticket ()
  {
  }


  /**
   */
  void Pay_charges ()
  {
  }


  /**
   */
  void Modify_form ()
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

  void Name;
  void Address;
  void Age;
  void Gender;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
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
   * Set the value of Age
   * @param new_var the new value of Age
   */
  void setAge (void new_var)   {
      Age = new_var;
  }

  /**
   * Get the value of Age
   * @return the value of Age
   */
  void getAge ()   {
    return Age;
  }

  /**
   * Set the value of Gender
   * @param new_var the new value of Gender
   */
  void setGender (void new_var)   {
      Gender = new_var;
  }

  /**
   * Get the value of Gender
   * @return the value of Gender
   */
  void getGender ()   {
    return Gender;
  }
private:


  void initAttributes () ;

};

#endif // PASSENGER_H
