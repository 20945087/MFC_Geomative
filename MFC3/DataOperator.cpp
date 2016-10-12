#include "StdAfx.h"
#include "DataOperator.h"
#include "NavDataView.h"
#include "Constant.h"

CDataOperator::CDataOperator(void)
{
}


CDataOperator::~CDataOperator(void)
{
}


bool CDataOperator::InitialNavDataView(CNavDataView* pNavDataView)
{

	_RecordsetPtr pRecPro = NULL;
	_RecordsetPtr pRecTz = NULL;
	_RecordsetPtr pRecTd = NULL;

	HTREEITEM hProItem = NULL;
	HTREEITEM hTzItem = NULL;
	HTREEITEM hTdItem = NULL;
	HTREEITEM hParentItem = NULL;

	DWORD dwHandle = (DWORD)VAL_ZERO;
	UINT uImageState = (UINT)VAL_ZERO;

	//	UINT uTdImageState = (UINT)VAL_ZERO;

	CString szSql = _T("");

	CTreeCtrl& dataTree = pNavDataView->m_dataTree;
	

	if (NULL != pNavDataView)
	{
		dataTree.DeleteAllItems();

		uImageState = m_stateProcessor.ChangeToImageState(PZ_STATE_DB);
		//		uTdImageState = m_stateProcessor.ChangeToImageState(PZ_STATE_DB);

		pRecPro.CreateInstance(_uuidof(Recordset));
		pRecTz.CreateInstance(_uuidof(Recordset));
		pRecTd.CreateInstance(_uuidof(Recordset));
		dataTree.InsertItem(_T("fuck"));

		/*pRecPro->Open(_T("select ID,PRname,CN from project order by ID"), _variant_t((IDispatch*)m_pConnection, true), 
		adOpenStatic, adLockOptimistic, adCmdText);*/

	//	while ((short)VAL_ZERO == pRecPro->adoEOF)
	//	{
	//		hProItem = dataTree.InsertItem((LPCTSTR)(_bstr_t)pRecPro->GetCollect(_T("PRname")));

	//		dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecPro->GetCollect(_T("ID")).ulVal, PZ_STYLE_PRO);
	//		dataTree.SetItemData(hProItem, dwHandle);
	//		dataTree.SetItemState(hProItem, uImageState, TVIS_STATEIMAGEMASK);

	//		szSql.Empty();
	//		szSql.Format(_T("select ID,TZname from tz where PRID = %s order by ID" ), 
	//			pRecPro->GetCollect(_T("ID")).vt == VT_NULL ? _T("-1") : (LPCTSTR)(_bstr_t)pRecPro->GetCollect(_T("ID")));
	//		pRecTz->Open(szSql.AllocSysString(), _variant_t((IDispatch*)m_pConnection, true),
	//			adOpenStatic, adLockOptimistic, adCmdText);

	//		while ((short)VAL_ZERO == pRecTz->adoEOF)
	//		{
	//			hTzItem = dataTree.InsertItem((pRecTz->GetCollect(_T("TZname")).vt == VT_NULL) ? _T("") : (LPCTSTR)(_bstr_t)pRecTz->GetCollect(_T("TZname")), hProItem);
	//			dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTz->GetCollect(_T("ID")).ulVal, PZ_STYLE_TZ);
	//			dataTree.SetItemData(hTzItem, dwHandle);
	//			dataTree.SetItemState(hTzItem, uImageState, TVIS_STATEIMAGEMASK);

	//			szSql.Empty();
	//			szSql.Format(_T("select ID,TDname,Ttype,Stype from td where TZID = %s order by ID"), 
	//				pRecTz->GetCollect(_T("ID")).vt == VT_NULL ? _T("-1") : (LPCTSTR)(_bstr_t)pRecTz->GetCollect(_T("ID")));
	//			pRecTd->Open(szSql.AllocSysString(), _variant_t((IDispatch*)m_pConnection, true), 
	//				adOpenStatic, adLockOptimistic, adCmdText);

	//			while ((short)VAL_ZERO == pRecTd->adoEOF)
	//			{
	//				hTdItem = dataTree.InsertItem(pRecTd->GetCollect(_T("TDname")).vt == VT_NULL ? _T("") : (LPCTSTR)(_bstr_t)pRecTd->GetCollect(_T("TDname")), hTzItem);
	//				switch (pRecTd->GetCollect(_T("Ttype")).iVal)
	//				{
	//				case 0:
	//					switch (pRecTd->GetCollect(_T("Stype")).iVal)
	//					{
	//					case 0:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_CERSP);
	//						break;
	//					case 1:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_2DRSP);
	//						break;
	//					case 2:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_3DRSP);
	//						break;
	//					default:
	//						break;
	//					}
	//					break;						
	//				case 1:
	//					switch (pRecTd->GetCollect(_T("Stype")).iVal)
	//					{
	//					case 0:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_CEIPSP);
	//						break;
	//					case 1:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_2DIPSP);
	//						break;
	//					case 2:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_3DIPSP);
	//						break;
	//					default:
	//						break;
	//					}
	//					break;
	//				case 2://вт╣Г
	//					switch (pRecTd->GetCollect(_T("Stype")).iVal)
	//					{
	//					case 0:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_CESP);
	//						break;
	//					case 1:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_2DSP);
	//						break;
	//					case 2:
	//						dwHandle = m_handleProcessor.GenerateHandle((DWORD)pRecTd->GetCollect(_T("ID")).ulVal, PZ_STYLE_TD_3DSP);
	//						break;
	//					default:
	//						break;
	//					}
	//					break;

	//				default:
	//					break;
	//				}

	//				dataTree.SetItemData(hTdItem, dwHandle);
	//				dataTree.SetItemState(hTdItem, uImageState, TVIS_STATEIMAGEMASK);

	//				pRecTd->MoveNext();
	//			}
	//			pRecTd->Close();
	//			hParentItem = dataTree.GetParentItem(hTdItem);
	//			if (hParentItem != NULL)
	//			{
	//				dataTree.Expand(hParentItem, TVE_EXPAND);
	//				hParentItem = NULL;
	//			}

	//			pRecTz->MoveNext();
	//		}
	//		pRecTz->Close();

	//		hParentItem = dataTree.GetParentItem(hTzItem);

	//		if (hParentItem != NULL)
	//		{
	//			dataTree.Expand(hParentItem, TVE_EXPAND);
	//			hParentItem = NULL;
	//		}

	//		pRecPro->MoveNext();
	//	}
		//pRecPro->Close();

		dataTree.SelectSetFirstVisible(dataTree.GetRootItem());
		}
		else
		{
			return false;
		}
	return true;
}
