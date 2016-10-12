
// MFC3View.h : CMFC3View 类的接口
//

#pragma once


class CMFC3View : public CView
{
protected: // 仅从序列化创建
	CMFC3View();
	DECLARE_DYNCREATE(CMFC3View)

// 特性
public:
	CMFC3Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFC3View.cpp 中的调试版本
inline CMFC3Doc* CMFC3View::GetDocument() const
   { return reinterpret_cast<CMFC3Doc*>(m_pDocument); }
#endif

