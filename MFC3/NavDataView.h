#include "resource.h"
#pragma once
// CNavDataView 窗体视图
class CNavDataView : public CFormView
{
	DECLARE_DYNCREATE(CNavDataView)

protected:
	CNavDataView();           // 动态创建所使用的受保护的构造函数
	virtual ~CNavDataView();

public:
	enum { IDD = IDD_NAV_DATA };
	CTreeCtrl	m_dataTree;
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


