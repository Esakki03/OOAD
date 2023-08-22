
#ifndef EXAMINATION_H
#define EXAMINATION_H

#include <string>

/**
  * class Examination
  * 
  */

class Examination
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Examination ();

  /**
   * Empty Destructor
   */
  virtual ~Examination ();

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
  void Eligibility_check ()
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

  string Name;
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
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
    return Name;
  }
private:


  void initAttributes () ;

};

#endif // EXAMINATION_H


#ifndef VEHICLE_LICENSING_H
#define VEHICLE_LICENSING_H

#include <string>

/**
  * class Vehicle_Licensing
  * 
  */

class Vehicle_Licensing
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Vehicle_Licensing ();

  /**
   * Empty Destructor
   */
  virtual ~Vehicle_Licensing ();

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
  void Provide_License ()
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

  int Age;
  string Name;
  void Address;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Age
   * @param new_var the new value of Age
   */
  void setAge (int new_var)   {
      Age = new_var;
  }

  /**
   * Get the value of Age
   * @return the value of Age
   */
  int getAge ()   {
    return Age;
  }

  /**
   * Set the value of Name
   * @param new_var the new value of Name
   */
  void setName (string new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  string getName ()   {
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
private:


  void initAttributes () ;

};

#endif // VEHICLE_LICENSING_H
