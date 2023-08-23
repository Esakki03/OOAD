
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


#ifndef LANDPARCEL_H
#define LANDPARCEL_H

#include <string>

/**
  * class LandParcel
  * 
  */

class LandParcel
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  LandParcel ();

  /**
   * Empty Destructor
   */
  virtual ~LandParcel ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * 
   */
  void UpdateParcelDetails ()
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

  int Parcel_ID;
  string area;
  string Location;
  int owner_Id;
  string LegalDescription;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of Parcel_ID
   * @param new_var the new value of Parcel_ID
   */
  void setParcel_ID (int new_var)   {
      Parcel_ID = new_var;
  }

  /**
   * Get the value of Parcel_ID
   * @return the value of Parcel_ID
   */
  int getParcel_ID ()   {
    return Parcel_ID;
  }

  /**
   * Set the value of area
   * @param new_var the new value of area
   */
  void setArea (string new_var)   {
      area = new_var;
  }

  /**
   * Get the value of area
   * @return the value of area
   */
  string getArea ()   {
    return area;
  }

  /**
   * Set the value of Location
   * @param new_var the new value of Location
   */
  void setLocation (string new_var)   {
      Location = new_var;
  }

  /**
   * Get the value of Location
   * @return the value of Location
   */
  string getLocation ()   {
    return Location;
  }

  /**
   * Set the value of owner_Id
   * @param new_var the new value of owner_Id
   */
  void setOwner_Id (int new_var)   {
      owner_Id = new_var;
  }

  /**
   * Get the value of owner_Id
   * @return the value of owner_Id
   */
  int getOwner_Id ()   {
    return owner_Id;
  }

  /**
   * Set the value of LegalDescription
   * @param new_var the new value of LegalDescription
   */
  void setLegalDescription (string new_var)   {
      LegalDescription = new_var;
  }

  /**
   * Get the value of LegalDescription
   * @return the value of LegalDescription
   */
  string getLegalDescription ()   {
    return LegalDescription;
  }
private:


  void initAttributes () ;

};

#endif // LANDPARCEL_H
