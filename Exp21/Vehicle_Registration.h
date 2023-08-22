
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


#ifndef VEHICLE_REGISTRATION__H
#define VEHICLE_REGISTRATION__H

#include <string>

/**
  * class Vehicle_Registration_
  * 
  */

class Vehicle_Registration_
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Vehicle_Registration_ ();

  /**
   * Empty Destructor
   */
  virtual ~Vehicle_Registration_ ();

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
  void Register_Vehicle ()
  {
  }


  /**
   */
  void Get_details_and_verify ()
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

  string Vehicle_details;
  string Owner;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Vehicle_details
   * @param new_var the new value of Vehicle_details
   */
  void setVehicle_details (string new_var)   {
      Vehicle_details = new_var;
  }

  /**
   * Get the value of Vehicle_details
   * @return the value of Vehicle_details
   */
  string getVehicle_details ()   {
    return Vehicle_details;
  }

  /**
   * Set the value of Owner
   * @param new_var the new value of Owner
   */
  void setOwner (string new_var)   {
      Owner = new_var;
  }

  /**
   * Get the value of Owner
   * @return the value of Owner
   */
  string getOwner ()   {
    return Owner;
  }
private:


  void initAttributes () ;

};

#endif // VEHICLE_REGISTRATION__H
