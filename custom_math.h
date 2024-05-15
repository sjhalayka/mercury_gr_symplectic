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



namespace custom_math
{
	class vector_3;

	const long double pi = 4 * atan(1.0);
	const long double pi_half = pi/2;
	const long double pi_2 = 2*pi;
	const long double epsilon = 1e-6;

	long double d(const long double &a, const long double &b);
	long double d_3(const vector_3 &a, const vector_3 &b);
	long double d_3_sq(const vector_3 &a, const vector_3 &b);
};

class custom_math::vector_3
{
public:
	long double x, y, z;

	vector_3(const long double &src_x = 0, const long double &src_y = 0, const long double &src_z = 0);
	bool operator==(const vector_3 &rhs);
	bool operator!=(const vector_3 &rhs);
	void zero(void);
	void rotate_x(const long double &radians);
	void rotate_y(const long double &radians);
    void rotate_z(const long double &radians);
    vector_3 operator+(const vector_3 &rhs);
	vector_3 operator-(const vector_3 &rhs);
	vector_3 operator*(const vector_3 &rhs);
	vector_3 operator*(const long double &rhs);
	vector_3 operator/(const long double &rhs);
	vector_3 &operator=(const vector_3 &rhs);
	vector_3 &operator+=(const vector_3 &rhs);
	vector_3 &operator*=(const vector_3 &rhs);
	vector_3 &operator*=(const long double &rhs);
	vector_3 operator-(void);
	long double length(void) const;
	vector_3 &normalize(void);
	long double dot(const vector_3 &rhs) const;
	long double self_dot(void) const;
	vector_3 cross(const vector_3 &rhs) const;
};

#endif