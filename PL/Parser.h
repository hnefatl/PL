#ifndef _PARSER_H
#define _PARSER_H

#include "Sentence.h"

#include <string>

class Parser
{
public:
	static Sentence Parse(std::string Input);

};

#endif