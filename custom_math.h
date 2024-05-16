#ifndef custom_math_h
#define custom_math_h

#include <algorithm>
using std::sort;

#include <limits>
using std::numeric_limits;

#include <vector>
using std::vector;

#include <set>
using std::set;

#include <map>
using std::map;


#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
#include <cstdlib>


#define TTMATH_NOASM 1 

#include <ttmath/ttmath.h>
typedef ttmath::Big<TTMATH_BITS(256), TTMATH_BITS(512)> MyBig;





namespace custom_math
{
	class vector_3;

	const MyBig pi = 4 * atan(1.0);
	//const MyBig pi_half = pi/2;
	//const MyBig pi_2 = 2*pi;
	//const MyBig epsilon = 1e-6;

};

class custom_math::vector_3
{
public:
	MyBig x, y, z;

	vector_3(const MyBig &src_x = 0, const MyBig &src_y = 0, const MyBig &src_z = 0);
	bool operator==(const vector_3 &rhs);
	bool operator!=(const vector_3 &rhs);
	void zero(void);
    void rotate_z(const MyBig &radians);
    vector_3 operator+(const vector_3 &rhs);
	vector_3 operator-(const vector_3 &rhs);
	vector_3 operator*(const vector_3 &rhs);
	vector_3 operator*(const MyBig &rhs);
	vector_3 operator/(const MyBig &rhs);
	vector_3 &operator=(const vector_3 &rhs);
	vector_3 &operator+=(const vector_3 &rhs);
	vector_3 &operator*=(const vector_3 &rhs);
	vector_3 &operator*=(const MyBig &rhs);
	vector_3 operator-(void);
	MyBig length(void) const;
	vector_3 &normalize(void);
	MyBig dot(const vector_3 &rhs) const;
	MyBig self_dot(void) const;
	vector_3 cross(const vector_3 &rhs) const;
};

#endif