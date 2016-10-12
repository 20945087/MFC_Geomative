#include "StateProcessor.h"
#include "HandleProcessor.h"
#pragma once

class CNavDataView; 

class CDataOperator
{
public:
	CDataOperator(void);
	virtual ~CDataOperator(void);
	bool InitialNavDataView(CNavDataView* pNavDataView);

	CStateProcessor m_stateProcessor;
	CHandleProcessor m_handleProcessor;
private:
	_ConnectionPtr m_pConnection;
};

