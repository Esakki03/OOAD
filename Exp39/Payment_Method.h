
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


#ifndef PAYMENT_METHOD_H
#define PAYMENT_METHOD_H

#include <string>

/**
  * class Payment_Method
  * 
  */

class Payment_Method
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Payment_Method ();

  /**
   * Empty Destructor
   */
  virtual ~Payment_Method ();

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
  void Make_payment ()
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
  void Type;
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
   * Set the value of Type
   * @param new_var the new value of Type
   */
  void setType (void new_var)   {
      Type = new_var;
  }

  /**
   * Get the value of Type
   * @return the value of Type
   */
  void getType ()   {
    return Type;
  }
private:


  void initAttributes () ;

};

#endif // PAYMENT_METHOD_H
