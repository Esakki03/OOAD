
#ifndef COMPANY_H
#define COMPANY_H

#include <string>

/**
  * class Company
  * 
  */

class Company
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Company ();

  /**
   * Empty Destructor
   */
  virtual ~Company ();

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

  void Company_name;
  void Vision_misiion;
  void Growth;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Company_name
   * @param new_var the new value of Company_name
   */
  void setCompany_name (void new_var)   {
      Company_name = new_var;
  }

  /**
   * Get the value of Company_name
   * @return the value of Company_name
   */
  void getCompany_name ()   {
    return Company_name;
  }

  /**
   * Set the value of Vision_misiion
   * @param new_var the new value of Vision_misiion
   */
  void setVision_misiion (void new_var)   {
      Vision_misiion = new_var;
  }

  /**
   * Get the value of Vision_misiion
   * @return the value of Vision_misiion
   */
  void getVision_misiion ()   {
    return Vision_misiion;
  }

  /**
   * Set the value of Growth
   * @param new_var the new value of Growth
   */
  void setGrowth (void new_var)   {
      Growth = new_var;
  }

  /**
   * Get the value of Growth
   * @return the value of Growth
   */
  void getGrowth ()   {
    return Growth;
  }
private:


  void initAttributes () ;

};

#endif // COMPANY_H


#ifndef FIRE_SENSOR_H
#define FIRE_SENSOR_H

#include <string>

/**
  * class Fire_sensor
  * 
  */

class Fire_sensor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Fire_sensor ();

  /**
   * Empty Destructor
   */
  virtual ~Fire_sensor ();

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
  void monitor_fire ()
  {
  }


  /**
   */
  void send_status ()
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

  bool fire_detetction;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of fire_detetction
   * @param new_var the new value of fire_detetction
   */
  void setFire_detetction (bool new_var)   {
      fire_detetction = new_var;
  }

  /**
   * Get the value of fire_detetction
   * @return the value of fire_detetction
   */
  bool getFire_detetction ()   {
    return fire_detetction;
  }
private:


  void initAttributes () ;

};

#endif // FIRE_SENSOR_H
