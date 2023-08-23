
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>

/**
  * class Administrator
  * 
  */

class Administrator
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Administrator ();

  /**
   * Empty Destructor
   */
  virtual ~Administrator ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return string
   */
  string getVote ()
  {
  }


  /**
   */
  void Login ()
  {
  }


  /**
   */
  void ChangeParty ()
  {
  }


  /**
   */
  void EditParty ()
  {
  }


  /**
   * @return string
   */
  string setParty ()
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

  string UserName;
  string Password;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of UserName
   * @param new_var the new value of UserName
   */
  void setUserName (string new_var)   {
      UserName = new_var;
  }

  /**
   * Get the value of UserName
   * @return the value of UserName
   */
  string getUserName ()   {
    return UserName;
  }

  /**
   * Set the value of Password
   * @param new_var the new value of Password
   */
  void setPassword (string new_var)   {
      Password = new_var;
  }

  /**
   * Get the value of Password
   * @return the value of Password
   */
  string getPassword ()   {
    return Password;
  }
private:


  void initAttributes () ;

};

#endif // ADMINISTRATOR_H


#ifndef PARTY_H
#define PARTY_H

#include <string>

/**
  * class Party
  * 
  */

class Party
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Party ();

  /**
   * Empty Destructor
   */
  virtual ~Party ();

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
  void setPresidentName ()
  {
  }


  /**
   * @return string
   */
  string getPresidentName ()
  {
  }


  /**
   */
  void setGovernorName ()
  {
  }


  /**
   * @return string
   */
  string getGovernorName ()
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

  string PartyName;
  string CandidateName;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of PartyName
   * @param new_var the new value of PartyName
   */
  void setPartyName (string new_var)   {
      PartyName = new_var;
  }

  /**
   * Get the value of PartyName
   * @return the value of PartyName
   */
  string getPartyName ()   {
    return PartyName;
  }

  /**
   * Set the value of CandidateName
   * @param new_var the new value of CandidateName
   */
  void setCandidateName (string new_var)   {
      CandidateName = new_var;
  }

  /**
   * Get the value of CandidateName
   * @return the value of CandidateName
   */
  string getCandidateName ()   {
    return CandidateName;
  }
private:


  void initAttributes () ;

};

#endif // PARTY_H
