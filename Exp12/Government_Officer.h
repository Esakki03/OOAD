
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


#ifndef GOVERNMENT_OFFICER_H
#define GOVERNMENT_OFFICER_H

#include <string>

/**
  * class Government_Officer
  * 
  */

class Government_Officer
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Government_Officer ();

  /**
   * Empty Destructor
   */
  virtual ~Government_Officer ();

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
  void approveLandTransfer ()
  {
  }


  /**
   */
  void updateParcelDetails ()
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

  int officerID;
  string department;
  string title;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of officerID
   * @param new_var the new value of officerID
   */
  void setOfficerID (int new_var)   {
      officerID = new_var;
  }

  /**
   * Get the value of officerID
   * @return the value of officerID
   */
  int getOfficerID ()   {
    return officerID;
  }

  /**
   * Set the value of department
   * @param new_var the new value of department
   */
  void setDepartment (string new_var)   {
      department = new_var;
  }

  /**
   * Get the value of department
   * @return the value of department
   */
  string getDepartment ()   {
    return department;
  }

  /**
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (string new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  string getTitle ()   {
    return title;
  }
private:


  void initAttributes () ;

};

#endif // GOVERNMENT_OFFICER_H
