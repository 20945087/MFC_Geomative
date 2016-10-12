
// MainFrm.cpp : CMainFrame ���ʵ��
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

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO: �ڴ���ӳ�Ա��ʼ������
	m_pDataMngFrm=NULL;
}

CMainFrame::~CMainFrame()
{
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CMDIFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	//cs.style = WS_OVERLAPPED | WS_CAPTION | FWS_ADDTOTITLE
	//	 | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX |WS_MAXIMIZEBOX;
	cs.style |=WS_MAXIMIZEBOX;
	return TRUE;
}

// CMainFrame ���

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


// CMainFrame ��Ϣ�������


void CMainFrame::OnMngDataWin()
{
	// TODO: �ڴ���������������
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
