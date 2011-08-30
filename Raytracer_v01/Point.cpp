//
//  Point.cpp
//  Raytracer_v01
//
//  Created by Luis Pereira on 27/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "Point.h"
#include <cmath>

namespace koios
{
    
    Point::Point(const Point& c_pt)
    {
        m_x = c_pt.m_x;
        m_y = c_pt.m_y;
        m_z = c_pt.m_z;
    }
    
    real Point::distance(const Point c_pt) const
    {
        return sqrt( (m_x - c_pt.m_x) * (m_x - c_pt.m_x) *
                     (m_y - c_pt.m_y) * (m_y - c_pt.m_y) *
                     (m_z - c_pt.m_z) * (m_z - c_pt.m_z));
    }
    
    Point& Point::operator=(const Point &c_pt) 
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
}

