#include "Point.h"
#include <cmath>

namespace koios
{
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor
    Point::Point() : m_x(0.0), m_y(0.0), m_z(0.0) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given three reals
    /// \param c_x The value for the xx component
    /// \param c_y The value for the yy component
    /// \param c_z The value for the zz component
    Point::Point(const real c_x, const real c_y, const real c_z) : m_x(c_x), m_y(c_y), m_z(c_z) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given a real
    /// \param c_value The value to assign to all of the components
    Point::Point(const real c_value) : m_x(c_value), m_y(c_value), m_z(c_value) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default copy constructor
    /// \param c_pt the Point to copy
    Point::Point(const Point& c_pt): m_x(c_pt.m_x), m_y(c_pt.m_y), m_z(c_pt.m_z) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Destructor
    Point::~Point() {}
    
    // ----------------------------------------------------------------------------
    /// \brief Distance between two points
    /// \param c_pt The point to analyze the distance with
    /// \return The distance between the two points in a real
    real Point::distance(const Point c_pt) const
    {
        return sqrt( (m_x - c_pt.m_x) * (m_x - c_pt.m_x) *
                     (m_y - c_pt.m_y) * (m_y - c_pt.m_y) *
                     (m_z - c_pt.m_z) * (m_z - c_pt.m_z));
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Copy
    /// \param c_pt The Point to copy
    /// \return REFERENCE: Point = Point
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

