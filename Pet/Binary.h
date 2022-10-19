#pragma once
#include<bitset>
#include "FileReader.h"
class Binary :public FileReader {
public:
	virtual void Display(string path)const override;

};

