#pragma once
class CStateProcessor
{
public:
	CStateProcessor(void);
	~CStateProcessor(void);
	UINT ChangeToItemState(UINT uImageState);		//图像状态改变为对象状态(uImageState---in:图像状态)
	UINT ChangeToImageState(UINT uItemState);		//对象状态改变为图像状态(uItemState---in:对象状态)
};

