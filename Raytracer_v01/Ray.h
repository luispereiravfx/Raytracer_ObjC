/// \file Ray.h
/// \brief Creates a Ray. Several rays will be shot from the camera point of view to calculate the color of a pixel
/// \author Luis Pereira
/// \version 0.1
/// \date 30/08/2011 Initial Version
/// Revision History :
/// Initial Version 30/08/2011

#ifndef __RAY_H__
#define __RAY_H__

#include "Point.h"
#include "Vector.h"

namespace koios {
    
    /// \class Ray
    /// \brief Creates a Ray data structure
    class Ray
    {

        // PUBLIC CLASS MEMBERS    
    public:
        
        /// \brief The point of origin of the ray
        Point m_o;
        
        /// \brief The direction of the ray
        Vector m_d;
        
        // PUBLIC CLASS METHODS
    public:
        
        /// \brief Default constructor
        Ray();
        
        /// \brief Default constructor given a Point and a Vector
        /// \param c_origin The origin of the ray
        /// \param c_direction The direction of the ray
        Ray(const Point& c_origin, const Vector& c_direction);
        
        /// \brief Copy constructor 
        /// \param c_ray The ray to copy
        Ray(const Ray& c_ray);
        
        /// \brief Destructor
        ~Ray();
        
        /* OPERATORS */
        
        /// \brief The copy operator
        /// \param c_ray A ray to copy
        /// \return REFERENCE: Copied ray
        Ray& operator= (const Ray &c_ray);
        
    };
    
}

#endif // __RAY_H__
