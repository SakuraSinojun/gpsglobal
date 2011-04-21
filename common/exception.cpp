
#include <cstdio>
#include "exception.h"

static const char * __err_table[] =
{
	"³É¹¦",
	
};

CGPSException::CGPSException(unsigned int errvalue) :
	m_value(errvalue)
{
}

unsigned int CGPSException::ErrId()
{
	return m_value;
}

const char * CGPSException::ErrDesc()
{
	
	if(m_value < 0)
	{
		return NULL;
	}
	if(m_value >= sizeof(__err_table)/sizeof(char *))
	{
		return NULL;
	}
	
	return __err_table[m_value];
	
}

