#include <vector3.h>

std::ostream& operator<<(std::ostream& os, const V3& vec) {
	os << "(" << vec.x << ", " << vec.y << ", " << vec.z << ")";
	return os;
}

