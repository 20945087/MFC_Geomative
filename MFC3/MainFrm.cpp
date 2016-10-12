
// MainFrm.cpp : CMainFrame 类的实现
//

#include "stdafx.h"
#include "MFC3.h"

#include "MainFrm.h"
#include "DataMngFrame.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CMDIFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CMDIFrameWnd)
	ON_COMMAND(IDM_MNG_DATA_WIN, &CMainFrame::OnMngDataWin)
END_MESSAGE_MAP()

// CMainFrame 构造/析构

CMainFrame::CMainFrame()
{
	// TODO: 在此添加成员初始化代码
	m_pDataMngFrm=NULL;
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	//cs.style = WS_OVERLAPPED | WS_CAPTION | FWS_ADDTOTITLE
	//	 | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX |WS_MAXIMIZEBOX;
	cs.style |=WS_MAXIMIZEBOX;
	return TRUE;
}

// CMainFrame 诊断

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CMDIFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CMDIFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame 消息处理程序


void CMainFrame::OnMngDataWin()
{
	// TODO: 在此添加命令处理程序代码
	// TODO: Add your command handler code here
	if (NULL == m_pDataMngFrm)
	{
		m_pDataMngFrm = (CDataMngFrame*)CreateNewChild(RUNTIME_CLASS(CDataMngFrame), IDR_MAINFRAME);
		m_pDataMngFrm->ShowWindow(SW_SHOWMAXIMIZED);
	}
	else
	{
		m_pDataMngFrm->ActivateFrame();
	}
}
