#pragma once

#include <ostream>

struct V3 {
	double x,
		y,
		z;

	V3(double xx, double yy, double zz) : x(xx), y(yy), z(zz) {}

	V3& operator+=(const V3& rhs) {
		this->x += rhs.x;
		this->y += rhs.y;
		this->z += rhs.z;

		return *this;
	}

	V3& operator-=(const V3& rhs) {
		this->x -= rhs.x;
		this->y -= rhs.y;
		this->z -= rhs.z;

		return *this;
	}

	friend V3 operator+(V3 lhs, const V3& rhs) {
		lhs += rhs;
		return lhs;
	}

	friend V3 operator-(V3 lhs, const V3& rhs) {
		lhs -= rhs;
		return lhs;
	}

	friend std::ostream& operator<<(std::ostream& os, const V3& vec);

};
