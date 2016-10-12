// DataMngFrame.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC3.h"
#include "DataMngFrame.h"
#include "Constant.h"
#include "BlankView.h"
#include "NavDataView.h"
#include "DataOperator.h"

// CDataMngFrame

IMPLEMENT_DYNCREATE(CDataMngFrame, CMDIChildWnd)

CDataMngFrame::CDataMngFrame()
{
	m_pNavDataView = NULL;
	m_pAppDataView = NULL;
}

CDataMngFrame::~CDataMngFrame()
{
}


BEGIN_MESSAGE_MAP(CDataMngFrame, CMDIChildWnd)
	ON_WM_MDIACTIVATE()
END_MESSAGE_MAP()


// CDataMngFrame 消息处理程序


BOOL CDataMngFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO: 在此添加专用代码和/或调用基类;
	//m_splitter.CreateStatic(this, SPL_WND_A_ROW, SPL_WND_A_COL);
	m_splitter.CreateStatic(this, SPL_WND_A_ROW, SPL_WND_A_COL);

	m_splitter.CreateView(SPL_VIEW_ROW_0, SPL_VIEW_COL_0, RUNTIME_CLASS(CNavDataView), 
		CSize(SPL_VIEW_NAV_WIDTH, SPL_VIEW_NAV_HEIGHT), pContext);
	m_pNavDataView = static_cast<CView*>(m_splitter.GetPane(SPL_VIEW_ROW_0, SPL_VIEW_COL_0));
	ASSERT(m_pNavDataView != NULL);

	m_splitter.CreateView(SPL_VIEW_ROW_0, SPL_VIEW_COL_1, RUNTIME_CLASS(CBlankView), 
		CSize(SPL_VIEW_APP_WIDTH, SPL_VIEW_APP_HEIGHT), pContext);
	m_pAppDataView = static_cast<CView*>(m_splitter.GetPane(SPL_VIEW_ROW_0, SPL_VIEW_COL_1));
	ASSERT(m_pAppDataView != NULL);

	return CMDIChildWnd::OnCreateClient(lpcs, pContext);

	return CMDIChildWnd::OnCreateClient(lpcs, pContext);
}


void CDataMngFrame::OnMDIActivate(BOOL bActivate, CWnd* pActivateWnd, CWnd* pDeactivateWnd)
{
	CMDIChildWnd::OnMDIActivate(bActivate, pActivateWnd, pDeactivateWnd);

	// TODO: 在此处添加消息处理程序代码;
	if (TRUE == bActivate)
	{
		DWORD dwItemHandle = (DWORD)VAL_ZERO;
		DWORD dwImageState = (DWORD)VAL_ZERO;
		DWORD dwID = (DWORD)VAL_ZERO;
		UINT uStyle = (DWORD)VAL_ZERO;
		UINT uState = (DWORD)VAL_ZERO;

		HTREEITEM hProItem = NULL;
		HTREEITEM hDevItem = NULL;

		CString strTitle;
		strTitle.LoadString(IDS_DATA_MANAGE);
		if (GetTitle() != strTitle)
		{
			SetTitle((LPCTSTR)strTitle);
			m_pDataOperator->InitialNavDataView((CNavDataView*)m_pNavDataView);
		}

	//	//		((CNavDataView*)m_pNavDataView)->Schedule();
	}
	else
	{
	//	if (NULL != ((CMainFrame*)AfxGetMainWnd())->m_pDataMngFrm)
	//	{
	//		::SendMessage(((CMainFrame*)AfxGetMainWnd())->m_hWnd, WM_SCHEDULE, (WPARAM)VAL_ZERO, (LPARAM)VAL_ZERO);
	//	}
	}
}
