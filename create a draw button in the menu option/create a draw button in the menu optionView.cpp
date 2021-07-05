
// create a draw button in the menu optionView.cpp : implementation of the CcreateadrawbuttoninthemenuoptionView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "create a draw button in the menu option.h"
#endif

#include "create a draw button in the menu optionDoc.h"
#include "create a draw button in the menu optionView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CcreateadrawbuttoninthemenuoptionView

IMPLEMENT_DYNCREATE(CcreateadrawbuttoninthemenuoptionView, CView)

BEGIN_MESSAGE_MAP(CcreateadrawbuttoninthemenuoptionView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CcreateadrawbuttoninthemenuoptionView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_DRAW_DRAWSQUARE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawsquare)
	ON_COMMAND(ID_DRAW_DRAWCIRCLE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawcircle)
	ON_COMMAND(ID_DRAW_DRAWLINE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawline)
	ON_COMMAND(ID_DRAW_DRAWTRIANGLE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawtriangle)
	ON_COMMAND(ID_DRAW_DRAWRECTANGLE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawrectangle)
	ON_COMMAND(ID_DRAW_DRAWPOINT, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpoint)
	ON_COMMAND(ID_DRAW_DRAWPOLYLINE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpolyline)
	ON_COMMAND(ID_DRAW_DRAWELICPSE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawelicpse)
	ON_COMMAND(ID_DRAW_DRAWPIE, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpie)
	ON_COMMAND(ID_DRAW_DRAWARC, &CcreateadrawbuttoninthemenuoptionView::OnDrawDrawarc)
	ON_COMMAND(ID_Menu, &CcreateadrawbuttoninthemenuoptionView::OnMenu)
END_MESSAGE_MAP()

// CcreateadrawbuttoninthemenuoptionView construction/destruction

CcreateadrawbuttoninthemenuoptionView::CcreateadrawbuttoninthemenuoptionView() noexcept
{
	// TODO: add construction code here

}

CcreateadrawbuttoninthemenuoptionView::~CcreateadrawbuttoninthemenuoptionView()
{
}

BOOL CcreateadrawbuttoninthemenuoptionView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CcreateadrawbuttoninthemenuoptionView drawing

void CcreateadrawbuttoninthemenuoptionView::OnDraw(CDC* pDC)
{

	CcreateadrawbuttoninthemenuoptionDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	switch (m_draw)
	{
		case 5:
			pDC->Rectangle(100,100,350,460);
			break;
		case 1:
			pDC->Rectangle(100, 100, 400, 400);
			break;
		case 9:
			pDC->Pie(40, 20, 226, 144, 155, 32, 202, 115);
			break;
		case 11:
			pDC->Chord(20, 20, 226, 144, 202, 115, 105, 32);
			break;
		case 10:
			pDC->Arc(20, 20, 226, 144, 202, 115, 105, 32);
			break;
		case 2:
			pDC->Ellipse(200, 200, 600, 600);
			break;
		case 8:
			pDC->Ellipse(200, 200, 300, 500);
			break;
		case 3:
			pDC->MoveTo(400, 500);
			pDC->LineTo(900, 500);
				break;
		case 4:
			pDC->MoveTo(400,500);
			pDC->LineTo(900, 500);
			pDC->LineTo(650, 750);
			pDC->LineTo(400, 500);
			break;
		case 6:
			pDC->MoveTo(400, 500);
			break;
		case 7:
			pDC->MoveTo(400, 500);
			pDC->LineTo(900, 500);
			pDC->LineTo(650, 750);
			break;
		default:
			break;
	}
	// TODO: add draw code for native data here
}


// CcreateadrawbuttoninthemenuoptionView printing


void CcreateadrawbuttoninthemenuoptionView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CcreateadrawbuttoninthemenuoptionView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CcreateadrawbuttoninthemenuoptionView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CcreateadrawbuttoninthemenuoptionView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CcreateadrawbuttoninthemenuoptionView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CcreateadrawbuttoninthemenuoptionView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CcreateadrawbuttoninthemenuoptionView diagnostics

#ifdef _DEBUG
void CcreateadrawbuttoninthemenuoptionView::AssertValid() const
{
	CView::AssertValid();
}

void CcreateadrawbuttoninthemenuoptionView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CcreateadrawbuttoninthemenuoptionDoc* CcreateadrawbuttoninthemenuoptionView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CcreateadrawbuttoninthemenuoptionDoc)));
	return (CcreateadrawbuttoninthemenuoptionDoc*)m_pDocument;
}
#endif //_DEBUG


// CcreateadrawbuttoninthemenuoptionView message handlers


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawsquare()
{
	m_draw = 1;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawcircle()
{
	m_draw = 2;
	Invalidate();
	UpdateWindow();
	// TODO: Add your command handler code here
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawline()
{
	m_draw = 3;
	Invalidate();
	UpdateWindow();
	// TODO: Add your command handler code here
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawtriangle()
{
	m_draw = 4;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawrectangle()
{
	m_draw = 5;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpoint()
{
	m_draw = 6;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpolyline()
{
	m_draw = 7;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawelicpse()
{
	m_draw = 8;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawpie()
{
	m_draw = 9;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnDrawDrawarc()
{
	m_draw = 10;
	Invalidate();
	UpdateWindow();
}


void CcreateadrawbuttoninthemenuoptionView::OnMenu()
{
	m_draw = 11;
	Invalidate();
	UpdateWindow();
}
