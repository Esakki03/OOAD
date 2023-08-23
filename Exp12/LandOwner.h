
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


#ifndef LANDOWNER_H
#define LANDOWNER_H

#include <string>

/**
  * class LandOwner
  * 
  */

class LandOwner
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  LandOwner ();

  /**
   * Empty Destructor
   */
  virtual ~LandOwner ();

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
  void addLand ()
  {
  }


  /**
   */
  void RemoveLand ()
  {
  }


  /**
   */
  void ViewOwnedLands ()
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

  int LandOwnerID;
  string OwnerLands;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of LandOwnerID
   * @param new_var the new value of LandOwnerID
   */
  void setLandOwnerID (int new_var)   {
      LandOwnerID = new_var;
  }

  /**
   * Get the value of LandOwnerID
   * @return the value of LandOwnerID
   */
  int getLandOwnerID ()   {
    return LandOwnerID;
  }

  /**
   * Set the value of OwnerLands
   * @param new_var the new value of OwnerLands
   */
  void setOwnerLands (string new_var)   {
      OwnerLands = new_var;
  }

  /**
   * Get the value of OwnerLands
   * @return the value of OwnerLands
   */
  string getOwnerLands ()   {
    return OwnerLands;
  }
private:


  void initAttributes () ;

};

#endif // LANDOWNER_H
