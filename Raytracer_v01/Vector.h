//
//  Vector.h
//  Raytracer_v01
//
//  Created by Luis Pereira on 27/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "Precision.h"



namespace koios
{
    
    class Point;
    
    class Vector
    {
        // PUBLIC MEMBERS OF THE CLASS
    public:
        /// xx coordinate
        real m_x;
        
        /// yy coordinate
        real m_y;
        
        /// zz coordinate
        real m_z;
        
        // PUBLIC FUNCTION CALLS OF THE CLASS
    public:
        
        Vector();
        Vector(const real c_value);
        Vector(const real c_x, const real c_y, const real c_z);
        Vector(const Vector& c_vec);
        //Vector(const Normal& c_norm);
        Vector(const Point& c_pt);
        
        ~Vector();
        
        ///////////////
        // OPERATORS //
        ///////////////
        
        Vector& operator= (const Vector& c_vec);
        
        //Vector& operator= (const Normal& c_norm);
        
        Vector operator- (void) const;
        
        Vector operator* (const real c_value) const;
        
        Vector operator/ (const real c_value) const;
        
        Vector operator+ (const Vector& c_vec) const;
        
        Vector& operator+= (const Vector& c_vec);
        
        Vector operator- (const Vector& c_vec) const;
        
        real operator* (const Vector& c_vec) const;
        
        Vector operator^ (const Vector& c_vec) const;
        
        ///////////////////
        // OTHER METHODS // 
        ///////////////////
        
        real length() const; 
        
        real length_squared() const;
        
        void normalize();
        
        Vector& hat();
        
    };

    //////////////////////
    // INLINE FUNCTIONS //
    //////////////////////
    
     inline Vector Vector::operator- (void) const
    {
        return Vector(-m_x, -m_y, -m_z);
    }
    
    inline Vector Vector::operator* (const real c_value) const
    {
        return Vector(m_x * c_value, m_y * c_value, m_z * c_value);
    }
    
    inline Vector Vector::operator/ (const real c_value) const
    {
        return Vector(m_x / c_value, m_y / c_value, m_z / c_value);
    }
    
    inline Vector Vector::operator+ (const Vector& c_vec) const
    {
        return Vector(m_x + c_vec.m_x, m_y + c_vec.m_y, m_z + c_vec.m_z);
    }
    
    inline Vector Vector::operator- (const Vector& c_vec) const
    {
        return Vector(m_x - c_vec.m_x, m_y - c_vec.m_y, m_z - c_vec.m_z);
    }
    
    inline real Vector::operator* (const Vector& c_vec) const
    {
        return (m_x * c_vec.m_x + m_y * c_vec.m_y + m_z * c_vec.m_z);
    }
    
    inline Vector Vector::operator^ (const Vector& c_vec) const
    {
        return Vector( m_y * c_vec.m_z - m_z * c_vec.m_y,
                       m_z * c_vec.m_x - m_x * c_vec.m_z,
                       m_x * c_vec.m_y - m_y * c_vec.m_y );
    }
    
    inline real Vector::length_squared() const
    {
        return (m_x * m_x + m_y * m_y + m_z * m_z);
    }
    
}

#endif // __VECTOR_H__
