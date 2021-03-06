#ifndef PARSER_H
#define PARSER_H

#include "matrix.h"
#include "polygon.h"

void parse_file ( const char * filename, 
		  matrix&  transform, 
		  matrix&  edges,
		  screen& s);

#endif
