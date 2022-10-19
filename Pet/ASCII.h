#pragma once
#include "FileReader.h"
class ASCII :public FileReader {
public:
	virtual void Display(string path)const override;

};

