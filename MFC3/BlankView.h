#pragma once



// CBlankView ������ͼ

class CBlankView : public CFormView
{
	DECLARE_DYNCREATE(CBlankView)

protected:
	CBlankView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CBlankView();

public:
	enum { IDD = IDD_BLANK };
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};

