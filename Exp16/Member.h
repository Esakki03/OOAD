
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


#ifndef MEMBER_H
#define MEMBER_H

#include <string>

/**
  * class Member
  * 
  */

class Member
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Member ();

  /**
   * Empty Destructor
   */
  virtual ~Member ();

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
  void presentingthe_paper ()
  {
  }


  /**
   */
  void winningthe_prize ()
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

  void Name;
  void id;
  void proof;
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
  void setName (void new_var)   {
      Name = new_var;
  }

  /**
   * Get the value of Name
   * @return the value of Name
   */
  void getName ()   {
    return Name;
  }

  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
  }

  /**
   * Set the value of proof
   * @param new_var the new value of proof
   */
  void setProof (void new_var)   {
      proof = new_var;
  }

  /**
   * Get the value of proof
   * @return the value of proof
   */
  void getProof ()   {
    return proof;
  }
private:


  void initAttributes () ;

};

#endif // MEMBER_H
