/**
 * Project OOP3200-F2020-Lesson4
 * @author Ryan Makund
 * @version 1.0
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
void Person(string first_name, string last_name, float age);
    
float getM_Age();
    
/**
 * @param value
 */
void setM_Age(float value);
    
string getM_FirstName();
    
/**
 * @param value
 */
void setM_FirstName(string value);
    
string getM_LastName();
    
/**
 * @param value
 */
void setM_LastName(string value);
    
void SaysHello();
    
string ToString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;
};

#endif //_PERSON_H