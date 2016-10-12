
#pragma once

class CDataOperator;
// CDataMngFrame 框架;

class CDataMngFrame : public CMDIChildWnd
{
	DECLARE_DYNCREATE(CDataMngFrame)
public:
	CView* m_pNavDataView;
	CView* m_pAppDataView;
protected:
	CDataMngFrame();           // 动态创建所使用的受保护的构造函数;
	virtual ~CDataMngFrame();

protected:
	DECLARE_MESSAGE_MAP()
private:
	//CDataOperator* m_pDataOperator;
	CSplitterWnd m_splitter;
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	CDataOperator*  m_pDataOperator;
public:
	afx_msg void OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd);
};


