// BlankView.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC3.h"
#include "BlankView.h"


// CBlankView

IMPLEMENT_DYNCREATE(CBlankView, CFormView)

CBlankView::CBlankView()
	: CFormView(CBlankView::IDD)
{

}

CBlankView::~CBlankView()
{
}

void CBlankView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CBlankView, CFormView)
END_MESSAGE_MAP()


// CBlankView 诊断

#ifdef _DEBUG
void CBlankView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void CBlankView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// CBlankView 消息处理程序
