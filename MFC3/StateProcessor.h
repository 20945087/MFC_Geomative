#pragma once
class CStateProcessor
{
public:
	CStateProcessor(void);
	~CStateProcessor(void);
	UINT ChangeToItemState(UINT uImageState);		//ͼ��״̬�ı�Ϊ����״̬(uImageState---in:ͼ��״̬)
	UINT ChangeToImageState(UINT uItemState);		//����״̬�ı�Ϊͼ��״̬(uItemState---in:����״̬)
};

