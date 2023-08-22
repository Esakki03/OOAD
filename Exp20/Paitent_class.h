
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


#ifndef PAITENT_CLASS_H
#define PAITENT_CLASS_H

#include <string>

/**
  * class Paitent_class
  * 
  */

class Paitent_class
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Paitent_class ();

  /**
   * Empty Destructor
   */
  virtual ~Paitent_class ();

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
  void Add_patient ()
  {
  }


  /**
   */
  void Edit_patient_details ()
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

  void Patient_Id;
  void Patient_Details;
  void Patient_mobile;
  void Patient_username;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Patient_Id
   * @param new_var the new value of Patient_Id
   */
  void setPatient_Id (void new_var)   {
      Patient_Id = new_var;
  }

  /**
   * Get the value of Patient_Id
   * @return the value of Patient_Id
   */
  void getPatient_Id ()   {
    return Patient_Id;
  }

  /**
   * Set the value of Patient_Details
   * @param new_var the new value of Patient_Details
   */
  void setPatient_Details (void new_var)   {
      Patient_Details = new_var;
  }

  /**
   * Get the value of Patient_Details
   * @return the value of Patient_Details
   */
  void getPatient_Details ()   {
    return Patient_Details;
  }

  /**
   * Set the value of Patient_mobile
   * @param new_var the new value of Patient_mobile
   */
  void setPatient_mobile (void new_var)   {
      Patient_mobile = new_var;
  }

  /**
   * Get the value of Patient_mobile
   * @return the value of Patient_mobile
   */
  void getPatient_mobile ()   {
    return Patient_mobile;
  }

  /**
   * Set the value of Patient_username
   * @param new_var the new value of Patient_username
   */
  void setPatient_username (void new_var)   {
      Patient_username = new_var;
  }

  /**
   * Get the value of Patient_username
   * @return the value of Patient_username
   */
  void getPatient_username ()   {
    return Patient_username;
  }
private:


  void initAttributes () ;

};

#endif // PAITENT_CLASS_H
