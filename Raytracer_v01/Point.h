/// \file Point.h
/// \brief Creates a Point. 
/// \author Luis Pereira
/// \version 0.1
/// \date 30/08/2011 Initial Version
/// Revision History :
/// Initial Version 30/08/2011

#ifndef __POINT_H__
#define __POINT_H__

#include "Precision.h"
#include "Vector.h"


namespace koios 
{
    /// \class Point
    /// \brief Creates a Point data structure
    class Point
    {
        // PUBLIC CLASS MEMBERS
    public:
    
        /// \brief The xx component of the Point
        real m_x;
        
        /// \brief The yy component of the Point
        real m_y;
        
        /// \brief The zz component of the Point
        real m_z;
        
        // PUBLIC FUNCTION CALLS OF THE CLASS
    public:
        
        /// \brief Default Constructor
        Point();
        
        /// \brief Default Constructor given three reals
        /// \param c_x The value for the xx component
        /// \param c_y The value for the yy component
        /// \param c_z The value for the zz component
        Point(const real c_x, const real c_y, const real c_z); 
        
        /// \brief Default Constructor given a real
        /// \param c_value The value to assign to all of the components
        Point(const real c_value); 
                                                     
        /// \brief Default copy constructor
        /// \param c_pt the Vector to copy
        Point(const Point& c_pt);
        
        /// \brief Destructor
        ~Point();
        
        /* OPERATORS */
        
        /// \brief OPERATOR: Copy
        /// \param c_pt The Point to copy
        /// \return REFERENCE: Point = Point
        Point& operator= (const Point& c_pt);
        
        /// \brief OPERATOR: Unary Minus
        /// \return Point = -Point
        Point operator- () const;
        
        /// \brief OPERATOR: Subtraction of a Point
        /// \param c_pt The Point to subtract
        /// \return Point = Point - Point
        Vector operator- (const Point& c_pt) const;
        
        /// \brief OPERATOR: Addition of a Point and a Vector
        /// \param c_vec The vector to add
        /// \return Point = Point + Vector
        Point operator+ (const Vector& c_vec) const;
        
        /// \brief OPERATOR: Subtraction of a Point
        /// \param c_vec The Vector to subtract
        /// \return Point = Point - Vector
        Point operator- (const Vector& c_vec) const;
        
        /// \brief OPERATOR: Multiplication by a real - on the right side
        /// \param c_value The real to multiply by the Point
        /// \return Point = Point * real
        Point operator* (const real c_value) const;
        
        /* OTHER METHODS */
        
        /// \brief Distance between two points
        /// \param c_pt The point to analyze the distance with
        /// \return The distance between the two points in a real
        real distance(const Point c_pt) const;
        
        /// \brief Square of the distance between two points
        /// \param c_pt The point to analyze the distance with
        /// \return The square of the distance between the two points in a real
        real distance_squared(const Point c_pt) const;
    
    };
    
    /* INLINE FUNCTIONS */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Unary Minus
    /// \return Point = -Point
    inline Point Point::operator- () const
    {
        return Point(-m_x, -m_y, -m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Subtraction of a Point
    /// \param c_pt The Point to subtract
    /// \return Point = Point - Point
    inline Vector Point::operator-(const Point& c_pt) const
    {
        return Vector(m_x - c_pt.m_x, m_y - c_pt.m_y, m_z - c_pt.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Addition of a Point and a Vector
    /// \param c_vec The vector to add
    /// \return Point = Point + Vector
    inline Point Point::operator+(const Vector &c_vec) const
    {
        return Point(m_x + c_vec.m_x, m_y + c_vec.m_y, m_z + c_vec.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Subtraction of a Point
    /// \param c_vec The Vector to subtract
    /// \return Point = Point - Vector
    inline Point Point::operator-(const Vector &c_vec) const
    {
        return Point(m_x - c_vec.m_x, m_y - c_vec.m_y, m_z - c_vec.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Multiplication by a real - on the right side
    /// \param c_value The real to multiply by the Point
    /// \return Point = Point * real
    inline Point Point::operator*(const real c_value) const
    {
        return Point(m_x * c_value, m_y * c_value, m_z * c_value);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief Square of the distance between two points
    /// \param c_pt The point to analyze the distance with
    /// \return The square of the distance between the two points in a real
    inline real Point::distance_squared(const Point c_pt) const
    {
        return ( (m_x - c_pt.m_x) * (m_x - c_pt.m_x) *
                 (m_y - c_pt.m_y) * (m_y - c_pt.m_y) *
                 (m_z - c_pt.m_z) * (m_z - c_pt.m_z));
    }
    
    
    /* NON MEMBER METHODS */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Multiplication by a real - on the left side
    /// \param c_value The real to multiply by the Point
    /// \param c_pt The Point to be multiplied by the real
    /// \return Point = Point * real
    Point operator* (const real c_value, const Point& c_pt);
    
    inline Point operator* (const real c_value, const Point& c_pt)
    {
        return Point(c_value * c_pt.m_x, c_value * c_pt.m_y, c_value * c_pt.m_z);
    }
    
    
    
}
    
#endif //__POINT_H__
