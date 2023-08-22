
#ifndef CENTRAK_MANEGEMENT_SYATEM_H
#define CENTRAK_MANEGEMENT_SYATEM_H

#include <string>

/**
  * class centrak_manegement_syatem
  * 
  */

class centrak_manegement_syatem
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  centrak_manegement_syatem ();

  /**
   * Empty Destructor
   */
  virtual ~centrak_manegement_syatem ();

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
  void leave_taken_ ()
  {
  }


  /**
   */
  void tax ()
  {
  }


  /**
   */
  void loan ()
  {
  }


  /**
   */
  void salary ()
  {
  }


  /**
   */
  void central_manegement_syatem ()
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

  void empolyee_name;
  void emp_number;
  void details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of empolyee_name
   * @param new_var the new value of empolyee_name
   */
  void setEmpolyee_name (void new_var)   {
      empolyee_name = new_var;
  }

  /**
   * Get the value of empolyee_name
   * @return the value of empolyee_name
   */
  void getEmpolyee_name ()   {
    return empolyee_name;
  }

  /**
   * Set the value of emp_number
   * @param new_var the new value of emp_number
   */
  void setEmp_number (void new_var)   {
      emp_number = new_var;
  }

  /**
   * Get the value of emp_number
   * @return the value of emp_number
   */
  void getEmp_number ()   {
    return emp_number;
  }

  /**
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (void new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  void getDetails ()   {
    return details;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAK_MANEGEMENT_SYATEM_H
