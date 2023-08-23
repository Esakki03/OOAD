
#ifndef DATE_H
#define DATE_H

#include <string>

/**
  * class date
  * 
  */

class date
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  date ();

  /**
   * Empty Destructor
   */
  virtual ~date ();

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

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // DATE_H


#ifndef JEWELLERY_MANAGEMENT_H
#define JEWELLERY_MANAGEMENT_H

#include <string>

/**
  * class jewellery_management
  * 
  */

class jewellery_management
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  jewellery_management ();

  /**
   * Empty Destructor
   */
  virtual ~jewellery_management ();

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
  void Response ()
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

  void Sale_person_details;
  void Customer_Details;
  void Jewellery_Details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Sale_person_details
   * @param new_var the new value of Sale_person_details
   */
  void setSale_person_details (void new_var)   {
      Sale_person_details = new_var;
  }

  /**
   * Get the value of Sale_person_details
   * @return the value of Sale_person_details
   */
  void getSale_person_details ()   {
    return Sale_person_details;
  }

  /**
   * Set the value of Customer_Details
   * @param new_var the new value of Customer_Details
   */
  void setCustomer_Details (void new_var)   {
      Customer_Details = new_var;
  }

  /**
   * Get the value of Customer_Details
   * @return the value of Customer_Details
   */
  void getCustomer_Details ()   {
    return Customer_Details;
  }

  /**
   * Set the value of Jewellery_Details
   * @param new_var the new value of Jewellery_Details
   */
  void setJewellery_Details (void new_var)   {
      Jewellery_Details = new_var;
  }

  /**
   * Get the value of Jewellery_Details
   * @return the value of Jewellery_Details
   */
  void getJewellery_Details ()   {
    return Jewellery_Details;
  }
private:


  void initAttributes () ;

};

#endif // JEWELLERY_MANAGEMENT_H
