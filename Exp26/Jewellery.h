
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


#ifndef JEWELLERY_H
#define JEWELLERY_H

#include <string>

/**
  * class Jewellery
  * 
  */

class Jewellery
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Jewellery ();

  /**
   * Empty Destructor
   */
  virtual ~Jewellery ();

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
  void addJewellery ()
  {
  }


  /**
   */
  void editJewellery ()
  {
  }


  /**
   */
  void deleteJewellery ()
  {
  }


  /**
   */
  void searchJewellery ()
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

  int jewellery_id;
  string jewellery_type;
  string jewellery_description;
  string jewellery_name;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of jewellery_id
   * @param new_var the new value of jewellery_id
   */
  void setJewellery_id (int new_var)   {
      jewellery_id = new_var;
  }

  /**
   * Get the value of jewellery_id
   * @return the value of jewellery_id
   */
  int getJewellery_id ()   {
    return jewellery_id;
  }

  /**
   * Set the value of jewellery_type
   * @param new_var the new value of jewellery_type
   */
  void setJewellery_type (string new_var)   {
      jewellery_type = new_var;
  }

  /**
   * Get the value of jewellery_type
   * @return the value of jewellery_type
   */
  string getJewellery_type ()   {
    return jewellery_type;
  }

  /**
   * Set the value of jewellery_description
   * @param new_var the new value of jewellery_description
   */
  void setJewellery_description (string new_var)   {
      jewellery_description = new_var;
  }

  /**
   * Get the value of jewellery_description
   * @return the value of jewellery_description
   */
  string getJewellery_description ()   {
    return jewellery_description;
  }

  /**
   * Set the value of jewellery_name
   * @param new_var the new value of jewellery_name
   */
  void setJewellery_name (string new_var)   {
      jewellery_name = new_var;
  }

  /**
   * Get the value of jewellery_name
   * @return the value of jewellery_name
   */
  string getJewellery_name ()   {
    return jewellery_name;
  }
private:


  void initAttributes () ;

};

#endif // JEWELLERY_H
