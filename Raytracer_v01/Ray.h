//
//  Ray.h
//  Raytracer_v01
//
//  Created by Luis Pereira on 30/08/2011.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#ifndef __RAY_H__
#define __RAY_H__

#include "Point.h"
#include "Vector.h"

namespace koios {
    
    class Ray
    {
    public:
        
        Point m_o;
        
        Vector m_d;
        
    public:
        
        Ray();
        
        Ray(const Point& c_origin, const Vector& c_direction);
        
        Ray(const Ray& c_ray);
        
        ~Ray();
        
        Ray& operator= (const Ray &c_ray);
        
        
    };
    
}

#endif // __RAY_H__
