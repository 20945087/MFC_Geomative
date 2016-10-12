#include "StdAfx.h"
#include <basetsd.h>

#ifndef CONST_PUB_H
#define CONST_PUB_H

/////////////////////////////////////const///////////////////////////////////
const int LANG_ZHCN = 1;
const int LANG_ENUS = 2;

const int RECT_LEFT_ADJUST = 1;
const int RECT_TOP_ADJUST = 1;
const int RECT_RIGHT_ADJUST = 2;
const int RECT_BOTTOM_ADJUST = 20;

const LONG VAL_MINUS_ONE = -1;
const LONG VAL_ZERO = 0;
const LONG VAL_ONE = 1;
const LONG VAL_TWO = 2;
const double VAL_PI = 3.14159265;

const UINT TAB_INDEX_PRO = 0;
const UINT TAB_INDEX_DEV = 1;

const UINT TAB_INDEX_CE = 0;
const UINT TAB_INDEX_2D = 1;
const UINT TAB_INDEX_3D = 2;

const UINT TAB_INDEX_DMS = 0;
const UINT TAB_INDEX_SPT = 1;

const UINT TAB_INDEX_TP_SEL = 0;
const UINT TAB_INDEX_TP_SORT = 1;

const UINT TAB_INDEX_4PVES = 0;
const UINT TAB_INDEX_DIPOLE = 1;
const UINT TAB_INDEX_3PVES = 2;
const UINT TAB_INDEX_RECTGL = 3;
const UINT TAB_INDEX_CUSTOM = 4;

const UINT SPL_WND_A_ROW = 1;
const UINT SPL_WND_A_COL = 2;

const UINT SPL_VIEW_ROW_0 = 0;
const UINT SPL_VIEW_ROW_1 = 1;
const UINT SPL_VIEW_ROW_2 = 2;

const UINT SPL_VIEW_COL_0 = 0;
const UINT SPL_VIEW_COL_1 = 1;

const UINT SPL_VIEW_NAV_WIDTH = 250;
const UINT SPL_VIEW_NAV_HEIGHT = 900;

const UINT SPL_VIEW_APP_WIDTH = 973;
const UINT SPL_VIEW_APP_HEIGHT = 900;

const UINT SPL_VIEW_APP_DETAIL_WIDTH = 300;
const UINT SPL_VIEW_APP_DETAIL_HEIGHT = 900;

const UINT LIST_DETAIL_WIDTH_TITLE = 130;
const UINT LIST_DETAIL_WIDTH_VALUE = 1800;
const UINT LIST_DETAIL_AMOUNT_ROW = 80;

const UINT HANDLE_OFFSET = 27;
const UINT STATE_OFFSET = 12;

const UINT GUC_LENGTH = 17;
const INT YEAR_BASE = 2013;

const UINT ONLINE_DEVICE_AMOUNT = 20;

const UINT ELECTRODE_AMOUNT_PERCABLE = 12;
const UINT CABLE_AMOUNT = 20;

const UINT CHANNEL_AMOUNT = 8;
const UINT MAXN = 100;


/////////////////////////////////////style///////////////////////////////

const UINT PZ_STYLE_PRO = 1;
const UINT PZ_STYLE_TZ = 2;

const UINT PZ_STYLE_TD_CERSP = 3;
const UINT PZ_STYLE_TD_CEIPSP = 4;

const UINT PZ_STYLE_TD_2DRSP = 5;
const UINT PZ_STYLE_TD_2DIPSP = 6;

const UINT PZ_STYLE_TD_3DRSP = 7;
const UINT PZ_STYLE_TD_3DIPSP = 8;

const UINT PZ_STYLE_SCON_CE = 9;
const UINT PZ_STYLE_SCON_2D = 10;
const UINT PZ_STYLE_SCON_3D = 11;

const UINT PZ_STYLE_SPT_CH = 12;
const UINT PZ_STYLE_SPT_FILE = 13;

const UINT PZ_STYLE_MED_DEF = 14;
const UINT PZ_STYLE_MED_CUS = 15;

//const UINT PZ_STYLE_DEV_SPT = 16;

const UINT PZ_STYLE_DEV = 17;

const UINT PZ_STYLE_TD_CESP = 18;
const UINT PZ_STYLE_TD_2DSP = 19;
const UINT PZ_STYLE_TD_3DSP = 20;

//const UINT PZ_STYLE_DEV_OL = 18;
//const UINT PZ_STYLE_DEV_FL = 19;

//const UINT PZ_STYLE_DEV_NEW = 20;
//const UINT PZ_STYLE_DEV_REG = 21;
//const UINT PZ_STYLE_DEV_ACT = 22;

const UINT PZ_STYLE_PROCN = 23;

//////////////////////////////////////state////////////////////////////////

const UINT PZ_STATE_LOC = 1;
const UINT PZ_STATE_SYN = 2;
const UINT PZ_STATE_DEV = 3;
const UINT PZ_STATE_DB = 4;

const UINT PZ_STATE_OFFLINE = 5;
const UINT PZ_STATE_ONLINE = 6;
const UINT PZ_STATE_NEW = 7;
//const UINT PZ_STATE_ONLINE_UNSYN = 6;
//const UINT PZ_STATE_ONLINE_SYNED = 7;

/////////////////////////////////////execute code/////////////////////////////////
const UINT APP_SUCCESS = 0;
const UINT APP_FAIL = 1;
const UINT APP_CANCLE = 2;
const UINT APP_DUPLICATE = 3;
const UINT APP_RELATION = 4;
const UINT APP_OVERFLOW = 5;
/////////////////////////////////////error code//////////////////////////////////

const UINT APP_ERR_LOC_EXEC = 5;
const UINT APP_ERR_DB = 6;

///////////////////////////////////result code/////////////////////////////////

const INT_PTR RET_OK = 1;
const INT_PTR RET_CANCEL = 2;

/////////////////////////////////////////define/////////////////////////////

#define WM_SCHEDULE WM_USER+101
#define WM_REFRESH WM_USER+102
#define WM_SKIP WM_USER+103
#define WM_NEWLINK WM_USER+104

#define WM_RECEIVE WM_USER+105
#define WM_BREAKLINE WM_USER+106

#define WM_INSERTCESPTREC WM_USER+107
#define WM_UPDATECESPTREC WM_USER+108
#define WM_DELETECESPTREC WM_USER+109

#define WM_DRAWTPSPLINES WM_USER+110
#define WM_DEVREFRESHGRREC WM_USER+111
#define WM_DEVREFRESHALLGRREC WM_USER+112

#define WM_DETECT_LINE WM_USER + 113

#define WM_REMOVE_2D_DATA	WM_USER + 114
#define WM_REMOVE_3D_DATA	WM_USER + 115
#define WM_REMOVE_1D_DATA	WM_USER + 116
#define WM_REFRESH_CONLIST  WM_USER + 150

#define WM_DELETE_1D_ELECTRODE WM_USER + 120
#define WM_DELETE_2D_ELECTRODE WM_USER + 121
#define WM_DELETE_3D_ELECTRODE WM_USER + 122
#define WM_UPG_GEOMATIVE       WM_USER + 123
/////////////////////////////////////opration style//////////////////////////////

const UINT OP_FILE_IMP = 1;
const UINT OP_TD_RSP_L_GS = 2;
const UINT OP_DE_F_D = 3;
const UINT OP_TD_SYN = 4;
const UINT OP_SPT_SYN = 5;

////////////////////////////////////graph parameter///////////////////////////////

const UINT CIRCLE_RADIUS = 6;
const UINT CIRCLE_HALFSPACE = 2;

const UINT OFFSET_GRAPH = 100;

const UINT OFFSET_ELECTRODE_X = 96;
const UINT OFFSET_ELECTRODE_Y = 80;

const UINT LENGTH_ELECTRODE = 10;

const UINT OFFSET_LEVEL_X = 80;
const UINT OFFSET_LEVEL_Y = 100;

///////////////////////////////////comm buffer size////////////////////////////////

const int WRITEBUFFER_SIZE = 15360;
const int READBUFFER_SIZE = 15360;

////////////////////////////////////times/////////////////////////////////////////

const int MAX_POLLING_TIME = 500;
const int COMM_TIMEOUT = 500;

///////////////////////////////////http///////////////////////////////////////////

const UINT HTTP_OK = 2;
const UINT HTTP_ERROR = 3;
const UINT HTTP_REDIRECT = 4;
const UINT HTTP_FAIL = 5;

#endif