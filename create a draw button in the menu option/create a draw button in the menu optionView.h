
// create a draw button in the menu optionView.h : interface of the CcreateadrawbuttoninthemenuoptionView class
//

#pragma once


class CcreateadrawbuttoninthemenuoptionView : public CView
{
protected: // create from serialization only
	CcreateadrawbuttoninthemenuoptionView() noexcept;
	DECLARE_DYNCREATE(CcreateadrawbuttoninthemenuoptionView)

// Attributes
public:
	CcreateadrawbuttoninthemenuoptionDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CcreateadrawbuttoninthemenuoptionView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDrawDrawsquare();
private:
	int m_draw = -1;
public:
	afx_msg void OnDrawDrawcircle();
	afx_msg void OnDrawDrawline();
	afx_msg void OnDrawDrawtriangle();
	afx_msg void OnDrawDrawrectangle();
	afx_msg void OnDrawDrawpoint();
	afx_msg void OnDrawDrawpolyline();
	afx_msg void OnDrawDrawelicpse();
	afx_msg void OnDrawDrawpie();
	afx_msg void OnDrawDrawarc();
	afx_msg void OnMenu();
};

#ifndef _DEBUG  // debug version in create a draw button in the menu optionView.cpp
inline CcreateadrawbuttoninthemenuoptionDoc* CcreateadrawbuttoninthemenuoptionView::GetDocument() const
   { return reinterpret_cast<CcreateadrawbuttoninthemenuoptionDoc*>(m_pDocument); }
#endif

