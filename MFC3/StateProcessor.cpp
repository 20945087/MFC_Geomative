#include "StdAfx.h"
#include "StateProcessor.h"
#include "Constant.h"


CStateProcessor::CStateProcessor(void)
{
}


CStateProcessor::~CStateProcessor(void)
{
}
UINT CStateProcessor::ChangeToImageState(UINT uItemState)
{
	return INDEXTOSTATEIMAGEMASK(uItemState);
}

UINT CStateProcessor::ChangeToItemState(UINT uImageState)
{
	UINT uItemState = 0;
	uItemState = uImageState;
	uItemState >>= STATE_OFFSET;
	return uItemState;
}