//
//  Point.h
//  Raytracer_v01
//
//  Created by Luis Pereira on 27/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef __POINT_H__
#define __POINT_H__

#include "Precision.h"
#include "Vector.h"


namespace koios 
{

    class Point
    {
    
        // PUBLIC MEMBERS OF THE CLASS
    public:
    
        /// The xx member
        real m_x;
        
        /// The yy member
        real m_y;
        
        /// The zz member
        real m_z;
        
        
        
        // PUBLIC FUNCTION CALLS OF THE CLASS
    public:
        
        /** Default constructor creates a point at the origin */
        Point() : m_x(0.0), m_y(0.0), m_z(0.0) {}
        
        /** Explicit constructor of the point */
        Point(const real c_x, const real c_y, const real c_z) : m_x(c_x), m_y(c_y), m_z(c_z) {}
        
        /** Explicit constructor with a single value */
        Point(const real c_value) : m_x(c_value), m_y(c_value), m_z(c_value) {}
                                                     
        /** Copy Constructor */
        Point(const Point& c_pt);
        
        /** Destructor */
        ~Point() {};
        
        ///////////////
        // OPERATORS //
        ///////////////
        
        /** Assignment operator */
        Point& operator= (const Point& c_pt);
        
        /** Unary Minus */
        Point operator- () const;
        
        /** Vector joining two point */
        Vector operator- (const Point& c_pt) const;
        
        /** Subtraction */
        Point operator+ (const Vector& c_vec) const;
        
        /** Multiplication by a real on the right  */
        Point operator- (const Vector& c_vec) const;
        
        Point operator* (const real c_value) const;
        
        
        
        
        ///////////////////
        // OTHER METHODS //
        ///////////////////
        
        /** Distance between two points */
        real distance(const Point c_pt) const;
        
        /** Square of the distacne between two points */
        real distance_squared(const Point c_pt) const;
        
        
    
    };
    
    inline Point Point::operator- () const
    {
        return Point(-m_x, -m_y, -m_z);
    }
    
    inline Vector Point::operator-(const Point& c_pt) const
    {
        return Vector(m_x - c_pt.m_x, m_y - c_pt.m_y, m_z - c_pt.m_z);
    }
    
    inline Point Point::operator+(const Vector &c_vec) const
    {
        return Point(m_x + c_vec.m_x, m_y + c_vec.m_y, m_z + c_vec.m_z);
    }
    
    inline Point Point::operator-(const Vector &c_vec) const
    {
        return Point(m_x - c_vec.m_x, m_y - c_vec.m_y, m_z - c_vec.m_z);
    }
    
    inline Point Point::operator*(const real c_value) const
    {
        return Point(m_x * c_value, m_y * c_value, m_z * c_value);
    }
    
    inline real Point::distance_squared(const Point c_pt) const
    {
        return ( (m_x - c_pt.m_x) * (m_x - c_pt.m_x) *
                 (m_y - c_pt.m_y) * (m_y - c_pt.m_y) *
                 (m_z - c_pt.m_z) * (m_z - c_pt.m_z));
    }
    
    /////////////////////////////////
    // INLINE NON MEMBER FUNCTIONS //
    /////////////////////////////////
    
    Point operator* (const real c_value, const Point& c_pt);
    
    inline Point operator* (const real c_value, const Point& c_pt)
    {
        return Point(c_value * c_pt.m_x, c_value * c_pt.m_y, c_value * c_pt.m_z);
    }
    
    
    
}
    
#endif //__POINT_H__
