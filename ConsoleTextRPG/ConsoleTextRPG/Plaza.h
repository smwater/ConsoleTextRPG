#pragma once
#include "Header.h"

class Plaza
{
public:
	Plaza() = default;
	~Plaza() = default;
	Plaza(const Plaza& other) = delete;
	Plaza& operator=(const Plaza& other) = delete;

	void update();
	
private:
	int _placeIndex = 0;
	void show() const;
};