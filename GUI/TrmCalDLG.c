/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.20                          *
*        Compiled Mar 19 2013, 15:01:00                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "includes.h"

/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
    
#define ID_WINDOW_0 (GUI_ID_USER + 0x29)
#define ID_TEXT_0   (GUI_ID_USER + 0x2A)
#define ID_TEXT_1   (GUI_ID_USER + 0x2F)
#define ID_TEXT_2   (GUI_ID_USER + 0x31)
#define ID_TEXT_3   (GUI_ID_USER + 0x32)
#define ID_TEXT_4   (GUI_ID_USER + 0x33)

#define ID_EDIT_0 (GUI_ID_USER + 0x34)
#define ID_EDIT_1 (GUI_ID_USER + 0x35)
#define ID_EDIT_2 (GUI_ID_USER + 0x36)


#define ID_BUTTON_0 (GUI_ID_USER + 0x37)
#define ID_BUTTON_1 (GUI_ID_USER + 0x38)
#define ID_BUTTON_2 (GUI_ID_USER + 0x39)
#define ID_BUTTON_3 (GUI_ID_USER + 0x3A)
#define ID_BUTTON_4 (GUI_ID_USER + 0x3B)
#define ID_BUTTON_5 (GUI_ID_USER + 0x3C)
#define ID_TEXT_5   (GUI_ID_USER + 0x3D)

    
    // USER START (Optionally insert additional defines)
    // USER END
    
    /*********************************************************************
    *
    *       Static data
    *
    **********************************************************************
    */
    
    // USER START (Optionally insert additional static data)
    // USER END
    
    /*********************************************************************
    *
    *       _aDialogCreate
    */
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
  { WINDOW_CreateIndirect, "CommSet",   ID_WINDOW_0, 0,   0,   240, 295, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   ReferVtg,    ID_TEXT_0,   15,  17,  120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   VtgValue,    ID_TEXT_1,   15,  50,  120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   RdSysTime,   ID_TEXT_2,   15,  82,  120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   TimeCrt,     ID_TEXT_3,   15,  115, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   VoltageChk,  ID_TEXT_4,   15,  147, 120, 20, 0, 0x0, 0 },
  { TEXT_CreateIndirect,   TrmTime,     ID_TEXT_5,   15,  192, 120, 20, 0, 0x0, 0 },
    
  { EDIT_CreateIndirect,   "Edit",      ID_EDIT_0,   142, 14,  80,  20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect,   "Edit",      ID_EDIT_1,   142, 47,  80,  20, EDIT_CF_HCENTER, 0x64, 0 },
  { EDIT_CreateIndirect,   "Edit",      ID_EDIT_2,   15,  220, 210, 20, EDIT_CF_HCENTER, 0x64, 0 },
    
  { BUTTON_CreateIndirect, "F1",        ID_BUTTON_0, 142, 80,  80, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "F2",        ID_BUTTON_1, 142, 113, 80, 20, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, VoltageRead, ID_BUTTON_2, 6,   261, 80, 25, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, Quit,        ID_BUTTON_3, 151, 261, 80, 25, 0, 0x0, 0 },
  { BUTTON_CreateIndirect, "*",         ID_BUTTON_4, 142, 146, 80, 20, 0, 0x0, 0 },
};


/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
static void _initDialog(WM_MESSAGE * pMsg)
{
    WM_HWIN hItem;
    //int i;
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_0);
    //EDIT_SetFloatMode(hItem, 220.00, 0, 99999, 2, GUI_EDIT_SUPPRESS_LEADING_ZEROES);
    EDIT_SetText(hItem, "220");
    WM_DisableWindow(hItem);
    EDIT_SetBkColor(hItem, 0, GUI_GREEN);
    //
    // Initialization of 'baudrate'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_1);
    //EDIT_SetText(hItem, "000.00");
    EDIT_SetFloatMode(hItem, 0.00, 0, 99999, 2, GUI_EDIT_SUPPRESS_LEADING_ZEROES);
    WM_DisableWindow(hItem);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    //
    // Initialization of 'check'
    //
    hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_2);
    EDIT_SetText(hItem, "0000-00-00 00:00:00 XXXX");
    WM_DisableWindow(hItem);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    //EDIT_SetDecMode(hItem, data,0,0xFFFF,2,GUI_EDIT_SUPPRESS_LEADING_ZEROES);
    //
    // Initialization of 'outtime'
    //
    
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_0);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_1);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_2);
    BUTTON_SetBkColor(hItem,0,GUI_GREEN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);


    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_3);
    BUTTON_SetBkColor(hItem,0,GUI_YELLOW);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);

    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_4);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_5);
    BUTTON_SetBkColor(hItem,0,GUI_CYAN);
    WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
}
// USER END

WM_HWIN CPS_GetReferVtg(void)
{
    return WM_GetDialogItem(g_hWin_TrmCal,ID_EDIT_0);
}




/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    GUI_UC_SetEncodeUTF8();
    _initDialog(pMsg);
    // USER START (Optionally insert additional code for further widget initialization)
    // USER END
    break;
  case WM_NOTIFY_PARENT:
    //Id    = WM_GetId(pMsg->hWinSrc);
    NCode = pMsg->Data.v;
    switch(Id)
    {}
    break;
  case WM_KEY:
    Id    = WM_GetId(pMsg->hWinSrc);
    if( _BUTTON_PRESSED == ((WM_KEY_INFO *)(pMsg->Data.p))->PressedCnt)
    {
        switch(((WM_KEY_INFO *)(pMsg->Data.p))->Key) 
        {
            case GUI_KEY_YELLOW:
                WM_DeleteWindow(g_hWin_TrmCal);
                g_hWin_TrmCal=HBWIN_NULL;
                WM_SetFocus(g_hWin_menu);
                WM_ShowWindow(g_hWin_TimeBar);
                WM_ShowWindow(g_hWin_Date);
                break;
                
            case GUI_KEY_F2:
                SYS_TIME sys_time;
                
                RtcTimeToSysTime(&sys_time);
                sys_time.year += 2000;
                memcpy(g_gui_para.data_buf, &sys_time, sizeof(sys_time));
                g_gui_para.data_len = sizeof(sys_time);
                g_gui_para.state = FHD_GUI_TRM_CAL;
                g_gui_para.cmd = FHD_CMD_CALIBRATE_TRM_TIME;
                OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);   
#if 0
                WM_DeleteWindow(g_hWin_TrmCal);
                g_hWin_TrmCal=HBWIN_NULL;
                WM_SetFocus(g_hWin_menu);
                WM_ShowWindow(g_hWin_TimeBar);
                WM_ShowWindow(g_hWin_Date);
#endif
                break;
                
            case GUI_KEY_GREEN:
                g_gui_para.state = FHD_GUI_TRM_CAL;
                g_gui_para.cmd = FHD_CMD_READ_TRM_VOLTAGE;
                OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);                
                break;
                
            case '*':
                u32 temp;
                u8  tmpBuf[16];
                
                hItem = WM_GetDialogItem(g_hWin_TrmCal, ID_EDIT_0);
                //temp = EDIT_GetFloatValue(hItem) * 100;
                EDIT_GetText(hItem, tmpBuf, 7);
                temp = atoi(tmpBuf) * 100;
                memcpy(g_gui_para.data_buf, &temp, sizeof(temp));
                g_gui_para.data_len = sizeof(temp);
                g_gui_para.state = FHD_GUI_TRM_CAL;
                g_gui_para.cmd = FHD_CMD_CALIBRATE_TRM_VOLTAGE;
                OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);                  
                break;
                
            case GUI_KEY_F1:
                g_gui_para.state = FHD_GUI_TRM_CAL;
                g_gui_para.cmd = FHD_CMD_READ_TRM_TIME;
                OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);                 
                break;
                
            case '#':   
#if 0
                SYS_TIME sys_time;
                

                RtcTimeToSysTime(&sys_time);
                sys_time.year += 2000;
                memcpy(g_gui_para.data_buf, &sys_time, sizeof(sys_time));
                g_gui_para.data_len = sizeof(sys_time);
                g_gui_para.state = FHD_GUI_CALIBRATE;
                g_gui_para.cmd = FHD_CMD_CALIBRATE_TIME;
                OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para); 
#endif
                break;
                
            case GUI_KEY_ENTER:
                switch(Id)
                {
                    case ID_EDIT_0:
                        g_sys_ctrl.selectWidget = EDT_VOLTAGE_REFER;
                        g_hWin_Input = Create_Edit_Set(g_hWin_TrmCal);
                        break;
                }
                break;
        }
    }
    break;
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       CreateCommSet
*/
WM_HWIN CreateCal(void);
WM_HWIN CreateCal(void) {
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, g_hWin_menu, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)

void GUI_Trm_Cal_Proc(void)
{
    WM_HWIN hItem;
    u8 buf[128];
    

    switch(g_gui_para.cmd)
    {
    case FHD_CMD_READ_TRM_VOLTAGE:
        u32 *pdata;
        
        
        pdata = (u32 *)g_fhd_para.data_buf;

#if 0                
        sprintf(buf, "%0.2f", ((float)(*pdata)) / 100);

        hItem = WM_GetDialogItem(g_hWin_TrmCal, ID_EDIT_1);
        EDIT_SetText(hItem, buf);        
#else
        hItem = WM_GetDialogItem(g_hWin_TrmCal, ID_EDIT_1);
        EDIT_SetFloatValue(hItem, ((float)(*pdata)) / 100);
#endif
        break;
        
    case FHD_CMD_CALIBRATE_TRM_VOLTAGE:
        break;

    case FHD_CMD_READ_TRM_TIME:
        u8 *ptr;
        
        
        ptr = g_fhd_para.data_buf;
        
        sprintf(buf, "%04d-%02d-%02d %02d:%02d:%02d %s", 
                mb_swap(*((u16 *)((u32)ptr + 0))),
                *((u8 *)((u32)ptr + 2)),
                *((u8 *)((u32)ptr + 3)),
                *((u8 *)((u32)ptr + 5)),
                *((u8 *)((u32)ptr + 6)),
                *((u8 *)((u32)ptr + 7)),
                FHD_WEEK[(*((u8 *)((u32)ptr + 4))) % 7]);
        
        hItem = WM_GetDialogItem(g_hWin_TrmCal, ID_EDIT_2);
        EDIT_SetText(hItem, buf);
        break;
        
    default:
        break;
    }
}

// USER END

/*************************** End of file ****************************/
