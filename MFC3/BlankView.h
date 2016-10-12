#pragma once



// CBlankView 窗体视图

class CBlankView : public CFormView
{
	DECLARE_DYNCREATE(CBlankView)

protected:
	CBlankView();           // 动态创建所使用的受保护的构造函数
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};


