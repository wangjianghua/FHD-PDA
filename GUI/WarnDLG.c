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
#define ID_FRAMEWIN_0  (GUI_ID_USER + 0x00)
#define ID_BUTTON_0    (GUI_ID_USER + 0x01)
#define ID_BUTTON_1    (GUI_ID_USER + 0x02)
#define ID_TEXT_0      (GUI_ID_USER + 0x03)


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
  { FRAMEWIN_CreateIndirect, "Warn", ID_FRAMEWIN_0, 40,  82,  160, 130, 0, 0x64, 0 },
  { BUTTON_CreateIndirect,   TextOK,   ID_BUTTON_0,   7,   68, 55,  25,  0, 0x0,  0 },
  { BUTTON_CreateIndirect,   Quit,      ID_BUTTON_1,   92,  68, 55,  25,  0, 0x0,  0 },
  { TEXT_CreateIndirect,     WarnText,   ID_TEXT_0,     7,   32,  150, 20,  0, 0x0,  0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};


WM_HWIN ERR_Get_Text(void)
{
    return WM_GetDialogItem(g_hWin_Warn,ID_TEXT_0);
}


static void _cbDialog(WM_MESSAGE * pMsg) {
  WM_HWIN hItem;
  int     NCode;
  int     Id;
  u8    sbuf[64];
  FRESULT res;
  FATFS fs;
  // USER START (Optionally insert additional variables)
  // USER END

  switch (pMsg->MsgId) {
  case WM_INIT_DIALOG:
    //
    // Initialization of 'ErrNote'
    //
    //hItem = pMsg->hWin;
    FRAMEWIN_SetTitleHeight(pMsg->hWin, 16);
    FRAMEWIN_SetText(pMsg->hWin, Warning);
    FRAMEWIN_SetClientColor(pMsg->hWin,GUI_WHITE);
    
    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_0);
    //WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    BUTTON_SetBkColor(hItem,0,GUI_GREEN);

    hItem=WM_GetDialogItem(pMsg->hWin,ID_BUTTON_1);
    //WIDGET_AndState(hItem,WIDGET_STATE_FOCUSSABLE);
    BUTTON_SetBkColor(hItem,0,GUI_YELLOW);
    break;
  case WM_KEY:
    if((((WM_KEY_INFO *)(pMsg->Data.p))->PressedCnt)==1)
    {
        switch((((WM_KEY_INFO*)(pMsg->Data.p))->Key))
        {
            case GUI_KEY_YELLOW:
                WM_DeleteWindow(g_hWin_Warn);
                g_hWin_Warn = WM_HWIN_NULL;
                Select_Focus();
                break;
            case GUI_KEY_GREEN:
                WM_DeleteWindow(g_hWin_Warn);
                g_hWin_Warn = WM_HWIN_NULL;
                
                if((g_hWin_SysSet > 0) && (g_hWin_SysInfo <= 0))
                {
                  if(BOOT_REQUEST_ACT != g_rom_para.bootFlag)
                  {
                      g_rom_para.bootFlag = BOOT_REQUEST_ACT;
                      
                      DEV_Parameters_Write();
                  }
                  
                  DEV_SoftReset();
                }
                else if(g_hWin_SysInfo > 0)
                {
                    SYS_ADD_TASK(SYS_TASK_FORMAT_DISK);
                }
                
                if(g_hWin_TrmConf > 0)
                {
                    g_gui_para.state = GUI_STATE_TRM_CONF;
                    g_gui_para.cmd = GUI_CMD_RESET_TRM;
                    OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);  
                }
                
                Select_Focus();
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
*       CreateWarn
*/
WM_HWIN CreateWarn(WM_HWIN paraentWin);
WM_HWIN CreateWarn(WM_HWIN paraentWin)
{
  WM_HWIN hWin;

  hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, paraentWin, 0, 0);
  return hWin;
}

void WARN(WM_HWIN paraentWin, int warn_num)
{
    WM_HWIN hItem;


    if(WM_HWIN_NULL == g_hWin_Warn)
    {
        g_hWin_Warn = CreateWarn(paraentWin);
        
        WM_SetFocus(g_hWin_Warn);
        
        hItem=WM_GetDialogItem(g_hWin_Warn, ID_TEXT_0);
        TEXT_SetText(hItem, &gc_messageBoxText[warn_num][0]);
    }
}

/*************************** End of file ****************************/