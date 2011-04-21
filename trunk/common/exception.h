

#pragma once

#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__


enum
{
	ERR_SUCCESS = 0,
	
};

class CGPSException
{
public:
	CGPSException(unsigned int errvalue);
	unsigned int ErrId();
	const char * ErrDesc();
private:
	unsigned int m_value;
};


#endif

