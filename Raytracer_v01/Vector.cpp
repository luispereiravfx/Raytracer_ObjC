//
//  Vector.cpp
//  Raytracer_v01
//
//  Created by Luis Pereira on 27/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "Vector.h"
#include "Point.h"
#include <math.h>

namespace koios
{
    // ----------------------------------------------------------------
    Vector::Vector() : m_x(0.0), m_y(0.0), m_z(0.0) {}
    
    // ----------------------------------------------------------------
    Vector::Vector(const real c_value) : m_x(c_value), m_y(c_value), m_z(c_value) {}
    
    // ----------------------------------------------------------------
    Vector::Vector(const real c_x, const real c_y, const real c_z) : m_x(c_x), m_y(c_y), m_z(c_z) {}
    
    // ----------------------------------------------------------------
    Vector::Vector(const Vector& c_vec) : m_x(c_vec.m_x), m_y(c_vec.m_y), m_z(c_vec.m_z) {}
    
    /*
     // ----------------------------------------------------------------
     Vector::Vector(const Normal& c_norm) : m_x(c_norm.m_x), m_y(c_norm.m_y), m_z(c_norm.m_z) {}
     */
    
    
     // ----------------------------------------------------------------
     Vector::Vector(const Point& c_pt) : m_x(c_pt.m_x), m_y(c_pt.m_y), m_z(c_pt.m_z) {}
    
    
    // ----------------------------------------------------------------
    Vector::~Vector() {}
    
    
    ////////////////
    // OPERATIONS //
    ////////////////
    
    // ----------------------------------------------------------------
    Vector& Vector::operator= (const Vector& c_vec)
    {
        if (this == &c_vec)
        {
            return (*this);
        }
        
        m_x = c_vec.m_x;
        m_y = c_vec.m_y;
        m_z = c_vec.m_z;
        
        return (*this);
    }
    
    /*
    // ----------------------------------------------------------------
    Vector& Vector::operator= (const Point& c_pt)
    {
        if (this == &c_pt)
        {
            return (*this);
        }
        
        m_x = c_pt.m_x;
        m_y = c_pt.m_y;
        m_z = c_pt.m_z;
        
        return (*this);
    }
     */
    
    /*
    // ---------------------------------------------------------------- 
    Vector& Vector::operator= (const Normal& c_norm)
    {
        if (this == &c_norm)
        {
            return (*this);
        }
        
        m_x = c_norm.m_x;
        m_y = c_norm.m_y;
        m_z = c_norm.m_z;
        
        return (*this);
    }
    */
    
    // ----------------------------------------------------------------
    Vector& Vector::operator+= (const Vector& c_vec)
    {
        m_x += c_vec.m_x;
        m_y += c_vec.m_y;
        m_z += c_vec.m_z;
        
        return (*this);
    }
    
    // ----------------------------------------------------------------
    real Vector::length() const
    {
        return (sqrt(m_x * m_x + m_y * m_y + m_z * m_z));
    }
    
    // ----------------------------------------------------------------
    void Vector::normalize()
    {
        real length = sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
        m_x /= length;
        m_y /= length;
        m_z /= length;
    }
    
    // ----------------------------------------------------------------
    Vector& Vector::hat()
    {
        real length = sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
        m_x /= length;
        m_y /= length;
        m_z /= length;
        return (*this);
    }
}