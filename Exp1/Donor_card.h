
#ifndef BLOOD_BANK_H
#define BLOOD_BANK_H

#include <string>

/**
  * class Blood_bank
  * 
  */

class Blood_bank
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Blood_bank ();

  /**
   * Empty Destructor
   */
  virtual ~Blood_bank ();

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
  void processRequestt ()
  {
  }


  /**
   */
  void validateTransaction ()
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

  int id;
  string name;
  string details;
  text adddress;
  string contactnumber;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (string new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  string getName ()   {
    return name;
  }

  /**
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (string new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  string getDetails ()   {
    return details;
  }

  /**
   * Set the value of adddress
   * @param new_var the new value of adddress
   */
  void setAdddress (text new_var)   {
      adddress = new_var;
  }

  /**
   * Get the value of adddress
   * @return the value of adddress
   */
  text getAdddress ()   {
    return adddress;
  }

  /**
   * Set the value of contactnumber
   * @param new_var the new value of contactnumber
   */
  void setContactnumber (string new_var)   {
      contactnumber = new_var;
  }

  /**
   * Get the value of contactnumber
   * @return the value of contactnumber
   */
  string getContactnumber ()   {
    return contactnumber;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_BANK_H


#ifndef DONOR_CARD_H
#define DONOR_CARD_H

#include <string>

/**
  * class Donor_card
  * 
  */

class Donor_card
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Donor_card ();

  /**
   * Empty Destructor
   */
  virtual ~Donor_card ();

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
  void add ()
  {
  }


  /**
   */
  void verification ()
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

  int id;
  string ownername;
  string donationdate;
  string details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (int new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  int getId ()   {
    return id;
  }

  /**
   * Set the value of ownername
   * @param new_var the new value of ownername
   */
  void setOwnername (string new_var)   {
      ownername = new_var;
  }

  /**
   * Get the value of ownername
   * @return the value of ownername
   */
  string getOwnername ()   {
    return ownername;
  }

  /**
   * Set the value of donationdate
   * @param new_var the new value of donationdate
   */
  void setDonationdate (string new_var)   {
      donationdate = new_var;
  }

  /**
   * Get the value of donationdate
   * @return the value of donationdate
   */
  string getDonationdate ()   {
    return donationdate;
  }

  /**
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (string new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  string getDetails ()   {
    return details;
  }
private:


  void initAttributes () ;

};

#endif // DONOR_CARD_H
