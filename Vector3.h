/***********************************************************
 * \file Vector3.h
 *
 * \author puppet_master
 * \date 2018.5.20添加注释
 * \https://blog.csdn.net/puppet_master
 * 向量类，实现向量间各种运算
 ************************************************************/
#include "Stdfx.h"
#pragma once
class Vector3
{
public:
	float x, y, z, w;

	Vector3(float fx, float fy, float fz);

	 Vector3 operator + (const Vector3& right) const;
	 Vector3 operator - (const Vector3& right) const;
	 Vector3 operator * (float value) const;
	 Vector3 operator / (float value) const;
	 float SquareMagnitude();
	 float Magnitude();
	 void Normalize();

	float static Dot(const Vector3& left, const Vector3& right);
	Vector3 static Cross(const Vector3& left, const Vector3& right);
	inline Vector3 static Lerp(const Vector3& left, const Vector3& right, float t);

	void Print();
};
