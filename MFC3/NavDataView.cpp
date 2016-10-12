// NavDataView.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC3.h"
#include "NavDataView.h"


// CNavDataView

IMPLEMENT_DYNCREATE(CNavDataView, CFormView)

CNavDataView::CNavDataView()
	: CFormView(CNavDataView::IDD)
{

}

CNavDataView::~CNavDataView()
{
}

void CNavDataView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_NAV_DATA_TREE, m_dataTree);
}

BEGIN_MESSAGE_MAP(CNavDataView, CFormView)
END_MESSAGE_MAP()


// CNavDataView 诊断

#ifdef _DEBUG
void CNavDataView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CNavDataView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CNavDataView 消息处理程序
