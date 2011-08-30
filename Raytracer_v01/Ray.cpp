#include "Ray.h"

namespace koios {
    
    // ----------------------------------------------------------------------------
    /// \brief Default constructor
    Ray::Ray(): m_o(0.0), m_d(0.0, 0.0, 1.0) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default constructor given a Point and a Vector
    /// \param c_origin The origin of the ray
    /// \param c_direction The direction of the ray
    Ray::Ray(const Point& c_origin, const Vector& c_direction): m_o(c_origin), m_d(c_direction) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Copy constructor 
    /// \param c_ray The ray to copy
    Ray::Ray(const Ray& c_ray): m_o(c_ray.m_o), m_d(c_ray.m_d) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Destructor
    Ray::~Ray() {}
    
    // ----------------------------------------------------------------------------
    /// \brief The copy operator
    /// \param c_ray A ray to copy
    /// \return REFERENCE - Copied ray
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
    
    
}
