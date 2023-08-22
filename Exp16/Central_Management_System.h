
#ifndef CENTRAL_MANAGEMENT_SYSTEM_H
#define CENTRAL_MANAGEMENT_SYSTEM_H

#include <string>

/**
  * class Central_Management_System
  * 
  */

class Central_Management_System
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Central_Management_System ();

  /**
   * Empty Destructor
   */
  virtual ~Central_Management_System ();

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
  void storing ()
  {
  }


  /**
   */
  void Updating_details ()
  {
  }


  /**
   */
  void central_Management_System ()
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

  void Member_details;
  void Function_details;
  void Details_of_seat_allocation;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Member_details
   * @param new_var the new value of Member_details
   */
  void setMember_details (void new_var)   {
      Member_details = new_var;
  }

  /**
   * Get the value of Member_details
   * @return the value of Member_details
   */
  void getMember_details ()   {
    return Member_details;
  }

  /**
   * Set the value of Function_details
   * @param new_var the new value of Function_details
   */
  void setFunction_details (void new_var)   {
      Function_details = new_var;
  }

  /**
   * Get the value of Function_details
   * @return the value of Function_details
   */
  void getFunction_details ()   {
    return Function_details;
  }

  /**
   * Set the value of Details_of_seat_allocation
   * @param new_var the new value of Details_of_seat_allocation
   */
  void setDetails_of_seat_allocation (void new_var)   {
      Details_of_seat_allocation = new_var;
  }

  /**
   * Get the value of Details_of_seat_allocation
   * @return the value of Details_of_seat_allocation
   */
  void getDetails_of_seat_allocation ()   {
    return Details_of_seat_allocation;
  }
private:


  void initAttributes () ;

};

#endif // CENTRAL_MANAGEMENT_SYSTEM_H
