#pragma once
typedef struct Vector3 {
	float x;
	float y;
	float z;
};

typedef struct Matrix4x4 {
	float m[4][4];
};

// 行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

// 透視投影行列
Matrix4x4 MakePerspectiveFovMatrix(float fovY, float aspectRatio, float nearClip, float farClip);

// ビューポート変換行列
Matrix4x4 MakeViewportMatrix(float left, float top, float width, float heght, float minDepth, float maxDepth);

// 拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

// 平行移動
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

// X軸
Matrix4x4 MakeRotateXMatrix(float radian);

// Y軸
Matrix4x4 MakeRotateYMatrix(float radian);

// Z軸
Matrix4x4 MakeRotateZMatrix(float radian);

// アフィン変換
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rot, const Vector3& translate);

// 逆行列
Matrix4x4 Inverse(const Matrix4x4& m);