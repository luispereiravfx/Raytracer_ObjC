#include "Point.h"
#include "Vector.h"


#include <cmath>

namespace koios
{
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor
    Vector::Vector() : m_x(0.0), m_y(0.0), m_z(0.0) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given a real
    /// \param c_value The value to assign to all of the components
    Vector::Vector(const real c_value) : m_x(c_value), m_y(c_value), m_z(c_value) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given three reals
    /// \param c_x The value for the xx component
    /// \param c_y The value for the yy component
    /// \param c_z The value for the zz component
    Vector::Vector(const real c_x, const real c_y, const real c_z) : m_x(c_x), m_y(c_y), m_z(c_z) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Default copy constructor
    /// \param c_vec the Vector to copy 
    Vector::Vector(const Vector& c_vec) : m_x(c_vec.m_x), m_y(c_vec.m_y), m_z(c_vec.m_z) {}
    
    /*
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given a Normal
    /// \param c_norm The normal to base the Vector from
    Vector::Vector(const Normal& c_norm) : m_x(c_norm.m_x), m_y(c_norm.m_y), m_z(c_norm.m_z) {}
    */
    
    // ----------------------------------------------------------------------------
    /// \brief Default Constructor given a Point
    /// \param c_pt The point to base the vector from
    Vector::Vector(const Point& c_pt) : m_x(c_pt.m_x), m_y(c_pt.m_y), m_z(c_pt.m_z) {}
    
    // ----------------------------------------------------------------------------
    /// \brief Destructor
    Vector::~Vector() {}
    
    
    /* OPERATIORS */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Copy
    /// \param c_vec The Vector to copy
    /// \return REFERENCE: Vector = Vector
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
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Point Assignment
    /// \param c_pt The Point to assign to the Vector
    /// \return REFERENCE: Vector = Point
    Vector& Vector::operator= (const Point& c_pt)
    {
        m_x = c_pt.m_x;
        m_y = c_pt.m_y;
        m_z = c_pt.m_z;
        
        return (*this);
    }
    
    /*
    // ----------------------------------------------------------------------------
    /// \brief Assignment operator - Normal assignment
    /// \param c_norm The Normal to assign to the Vector
    /// \return REFERENCE: Vector = Normal
    Vector& Vector::operator= (const Normal& c_norm)
    {
        m_x = c_norm.m_x;
        m_y = c_norm.m_y;
        m_z = c_norm.m_z;
        
        return (*this);
    }
    */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Increment of a Vector
    /// \param c_vec The Vector to increment by
    /// \return REFERENCE: Vector += Vector
    Vector& Vector::operator+= (const Vector& c_vec)
    {
        m_x += c_vec.m_x;
        m_y += c_vec.m_y;
        m_z += c_vec.m_z;
        
        return (*this);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief Determines the length of the Vector
    /// \return Returns the length of the Vector
    real Vector::length() const
    {
        return (sqrt(m_x * m_x + m_y * m_y + m_z * m_z));
    }
    
    // ----------------------------------------------------------------------------
    /// \brief Normalizes the Vector
    void Vector::normalize()
    {
        real length = sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
        m_x /= length;
        m_y /= length;
        m_z /= length;
    }
    
    // ----------------------------------------------------------------------------
    /// \brief Normalizes the Vector and returns the result
    /// \return REFERENCE: The normalized Vector
    Vector& Vector::hat()
    {
        real length = sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
        m_x /= length;
        m_y /= length;
        m_z /= length;
        return (*this);
    }
}