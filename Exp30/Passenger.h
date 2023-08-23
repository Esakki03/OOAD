
#ifndef CLERK_H
#define CLERK_H

#include <string>

/**
  * class Clerk
  * 
  */

class Clerk
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Clerk ();

  /**
   * Empty Destructor
   */
  virtual ~Clerk ();

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
  void Form_details_ ()
  {
  }


  /**
   */
  void clancelleation_form ()
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
  void Name;
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
private:


  void initAttributes () ;

};

#endif // CLERK_H


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
  void Search_Train ()
  {
  }


  /**
   */
  void Book_ticket ()
  {
  }


  /**
   */
  void Cancel_tticket ()
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
