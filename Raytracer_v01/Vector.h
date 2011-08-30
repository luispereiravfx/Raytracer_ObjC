/// \file Vector.h
/// \brief Creates a Vector. 
/// \author Luis Pereira
/// \version 0.1
/// \date 30/08/2011 Initial Version
/// Revision History :
/// Initial Version 30/08/2011

#ifndef __VECTOR_H__
#define __VECTOR_H__

#include "Precision.h"

namespace koios
{
    /// \brief Adds the class to the file
    class Point;
    
    /// \class Vector
    /// \brief Creates a Vector data structure
    class Vector
    {
        // PUBLIC CLASS MEMBERS
    public:
        /// \brief The xx component of the Vector
        real m_x;
        
        /// \brief The yy component of the Vector
        real m_y;
        
        /// \brief The zz component of the Vector
        real m_z;
        
        // PUBLIC CLASS METHODS
    public:
        
        /// \brief Default Constructor
        Vector();
        
        /// \brief Default Constructor given a real
        /// \param c_value The value to assign to all of the components
        Vector(const real c_value);
        
        /// \brief Default Constructor given three reals
        /// \param c_x The value for the xx component
        /// \param c_y The value for the yy component
        /// \param c_z The value for the zz component
        Vector(const real c_x, const real c_y, const real c_z);
        
        /// \brief Default copy constructor
        /// \param c_vec the Vector to copy 
        Vector(const Vector& c_vec);
        
        /// \brief Default Constructor given a Point
        /// \param c_pt The point to base the vector from
        Vector(const Point& c_pt);
        
        /*
        /// \brief Default Constructor given a Normal
        /// \param c_norm The normal to base the Vector from
        Vector(const Normal& c_norm);
        */
        
        /// \brief Destructor
        ~Vector();
        
        /* OPERATORS */
        
        /// \brief OPERATOR: Copy
        /// \param c_vec The Vector to copy
        /// \return REFERENCE: Vector = Vector
        Vector& operator= (const Vector& c_vec);
        
        /*
        /// \brief Assignment operator - Normal assignment
        /// \param c_norm The Normal to assign to the Vector
        /// \return REFERENCE: Vector = Normal
        Vector& operator= (const Normal& c_norm);
        */
        
        /// \brief OPERATOR: Point Assignment
        /// \param c_pt The Point to assign to the Vector
        /// \return REFERENCE: Vector = Point
        Vector& operator= (const Point& c_pt);
        
        /// \brief OPERATOR: Unary Minus
        /// \return Vector = -Vector
        Vector operator- (void) const;
        
        /// \brief OPERATOR: Multiplication by a real - on the right side
        /// \param c_value The real to multiply by the Vector
        /// \return Vector = Vector * real
        Vector operator* (const real c_value) const;
        
        /// \brief OPERATOR: Division by a real - on the right side
        /// \param c_value The real to divide by the Vector
        /// \return Vector = Vector / real
        Vector operator/ (const real c_value) const;
        
        /// \brief OPERATOR: Addition of two Vectors
        /// \param c_vec The vector to add
        /// \return Vector = Vector + Vector
        Vector operator+ (const Vector& c_vec) const;
        
        /// \brief OPERATOR: Increment of a Vector
        /// \param c_vec The Vector to increment by
        /// \return REFERENCE: Vector += Vector
        Vector& operator+= (const Vector& c_vec);
        
        /// \brief OPERATOR: Subtraction of a Vector
        /// \param c_vec The Vector to subtract
        /// \return Vector = Vector - Vector
        Vector operator- (const Vector& c_vec) const;
        
        /// \brief OPERATOR: Dot Product
        /// \param c_vec The Vector to perform Dot Product with
        /// \return real = Vector * Vector
        real operator* (const Vector& c_vec) const;
        
        /// \brief OPERATOR: Cross Product
        /// \param c_vec The Vector to find the Cross Product
        /// \return Vector = Vector ^ Vector
        Vector operator^ (const Vector& c_vec) const;
        
        /* OTHER METHODS */ 
        
        /// \brief Determines the length of the Vector
        /// \return Returns the length of the Vector
        real length() const; 
        
        /// \brief Determines the squared length of the Vector
        /// \return Returns the squared length of the Vector
        real length_squared() const;
        
        /// \brief Normalizes the Vector
        void normalize();
        
        /// \brief Normalizes the Vector and returns the result
        /// \return REFERENCE: The normalized Vector
        Vector& hat();
        
    };


    /* INLINE METHODS */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Unary Minus
    /// \return Vector = -Vector
     inline Vector Vector::operator- (void) const
    {
        return Vector(-m_x, -m_y, -m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Multiplication by a real - on the right side
    /// \param c_value The real to multiply by the Vector
    /// \return Vector = Vector * real
    inline Vector Vector::operator* (const real c_value) const
    {
        return Vector(m_x * c_value, m_y * c_value, m_z * c_value);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Division by a real - on the right side
    /// \param c_value The real to divide by the Vector
    /// \return Vector = Vector / real
    inline Vector Vector::operator/ (const real c_value) const
    {
        return Vector(m_x / c_value, m_y / c_value, m_z / c_value);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Addition of two Vectors
    /// \param c_vec The vector to add
    /// \return Vector = Vector + Vector
    inline Vector Vector::operator+ (const Vector& c_vec) const
    {
        return Vector(m_x + c_vec.m_x, m_y + c_vec.m_y, m_z + c_vec.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Subtraction of a Vector
    /// \param c_vec The Vector to subtract
    /// \return Vector = Vector - Vector
    inline Vector Vector::operator- (const Vector& c_vec) const
    {
        return Vector(m_x - c_vec.m_x, m_y - c_vec.m_y, m_z - c_vec.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Dot Product
    /// \param c_vec The Vector to perform Dot Product with
    /// \return real = Vector * Vector
    inline real Vector::operator* (const Vector& c_vec) const
    {
        return (m_x * c_vec.m_x + m_y * c_vec.m_y + m_z * c_vec.m_z);
    }
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Cross Product
    /// \param c_vec The Vector to find the Cross Product
    /// \return Vector = Vector ^ Vector
    inline Vector Vector::operator^ (const Vector& c_vec) const
    {
        return Vector( m_y * c_vec.m_z - m_z * c_vec.m_y,
                       m_z * c_vec.m_x - m_x * c_vec.m_z,
                       m_x * c_vec.m_y - m_y * c_vec.m_y );
    }
    
    // ----------------------------------------------------------------------------
    /// \brief Determines the squared length of the Vector
    /// \return Returns the squared length of the Vector
    inline real Vector::length_squared() const
    {
        return (m_x * m_x + m_y * m_y + m_z * m_z);
    }
    
    /* NON MEMBER METHODS */
    
    // ----------------------------------------------------------------------------
    /// \brief OPERATOR: Multiplication by a real - on the left side
    /// \param c_value The real to multiply by the Vector
    /// \param c_vec The Vector to be multiplied by the real
    /// \return Vector = Vector ^ Vector
    Vector operator* (const real c_value, Vector& c_vec);
    
    inline Vector operator* (const real c_value, Vector& c_vec)
    {
        return Vector(c_value * c_vec.m_x, c_value * c_vec.m_y, c_value * c_vec.m_z);
    }
    
}

#endif // __VECTOR_H__
