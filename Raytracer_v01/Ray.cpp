//
//  Ray.cpp
//  Raytracer_v01
//
//  Created by Luis Pereira on 30/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "Ray.h"

namespace koios {
    
    Ray::Ray(): m_o(0.0), m_d(0.0, 0.0, 1.0) {}
    
    Ray::Ray(const Point& c_origin, const Vector& c_direction): m_o(c_origin), m_d(c_direction) {}
    
    Ray::Ray(const Ray& c_ray): m_o(c_ray.m_o), m_d(c_ray.m_d) {}
    
    Ray& Ray::operator=(const Ray &c_ray) 
    {
        if (this == &c_ray)
        {
            return (*this);
        }
        
        m_o = c_ray.m_o;
        
        m_d = c_ray.m_d;
        
        return (*this);
    }
    
    Ray::~Ray() {}
    
    
}
