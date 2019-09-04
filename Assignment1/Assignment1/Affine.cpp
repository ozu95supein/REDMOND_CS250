#include "Affine.h"

namespace cs250
{
	glm::vec4 point(float x, float y, float z)
	{
		return glm::vec4(x, y, z, 1.0f);
	}
	glm::vec4 vector(float x, float y, float z)
	{
		return glm::vec4(x, y, z, 0.0f);
	}
	bool isPoint(const glm::vec4 &v)
	{
		if (near(v.w, 1.0f))
		{
			return true;
		}
		return false;
	}
	bool isVector(const glm::vec4 &v)
	{
		if (near(v.w, 0.0f))
		{
			return true;
		}
		return false;
	}

	float angle(const glm::vec4 &u, const glm::vec4 &v)
	{
		//get dot prod
		float dotprod = glm::dot(u, v);
		//get the absolutes values and multiply them
		float u_abs = glm::sqrt(((u.x * u.x) + (u.y * u.y) + (u.z * u.z) + (u.w * u.w)));
		float v_abs = glm::sqrt(((v.x * v.x) + (v.y * v.y) + (v.z * v.z) + (v.w * v.w)));
		float abs_mult = u_abs * v_abs;
		float return_angle = glm::acos(dotprod / abs_mult);
		return return_angle;
	}
	glm::vec4 cross(const glm::vec4 &u, const glm::vec4 &v)
	{
		glm::vec3 temp = glm::cross(glm::vec3(u.x, u.y, u.z), glm::vec3(v.x, v.y, v.z));
		return glm::vec4(temp.x, temp.y, temp.z, 0.0f);
	}

	glm::mat4 affine(const glm::vec4 &Lx, const glm::vec4 &Ly,
		const glm::vec4 &Lz, const glm::vec4 &C)
	{

	}
	bool isAffine(const glm::mat4 &M)
	{

	}

	glm::mat4 rotate(float deg, const glm::vec4 &v)
	{

	}
	glm::mat4 scale(float r)
	{

	}
	glm::mat4 scale(float rx, float ry, float rz)
	{

	}
	glm::mat4 translate(const glm::vec4 &v)
	{

	}
	glm::mat4 affineInverse(const glm::mat4 &A)
	{

	}

}