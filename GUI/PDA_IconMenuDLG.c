/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.22                          *
*        Compiled Jul  4 2013, 15:16:01                              *
*        (c) 2013 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

#include "DIALOG.h"
#include "includes.h"

//#define PAGE_SWITCH (WM_USER+0)

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

//任务栏资源ID　
#define ID_WINDOW_0   (GUI_ID_USER + 0x00)
#define ID_TEXT_0     (GUI_ID_USER + 0x01)
#define ID_TEXT_1     (GUI_ID_USER + 0x02)
#define ID_TEXT_2     (GUI_ID_USER + 0x03)
#define ID_TEXT_3     (GUI_ID_USER + 0x04)
#define ID_TEXT_4     (GUI_ID_USER + 0x05)

#define ID_TEXT_5     (GUI_ID_USER + 0x06)
#define ID_TEXT_6     (GUI_ID_USER + 0x07)
#define ID_TEXT_7     (GUI_ID_USER + 0x08) 
#define ID_TEXT_8     (GUI_ID_USER + 0x09) 
#define ID_LISTVIEW_0 (GUI_ID_USER + 0x0A) 
#define ID_TEXT_9     (GUI_ID_USER + 0x0B) 
#define ID_TEXT_10    (GUI_ID_USER + 0x0C)
//#define ID_TEXT_10    (GUI_ID_USER + 0x0C) 


//extern GUI_CONST_STORAGE GUI_BITMAP _bmSystem;
//extern GUI_CONST_STORAGE GUI_BITMAP _bmRead;
//extern GUI_CONST_STORAGE GUI_BITMAP _bmRemote;
//extern GUI_CONST_STORAGE GUI_BITMAP _bmWriteRad;
//extern GUI_CONST_STORAGE GUI_BITMAP _bmEmailRad;
//extern GUI_CONST_STORAGE GUI_BITMAP _bmmonitor;
//extern GUI_CONST_STORAGE GUI_BITMAP bmmeter;
//extern GUI_CONST_STORAGE GUI_BITMAP bmwave;
extern GUI_CONST_STORAGE GUI_BITMAP bmprotocal;
extern GUI_CONST_STORAGE GUI_BITMAP bmabout;
extern GUI_CONST_STORAGE GUI_BITMAP bmTFcard; 
extern GUI_CONST_STORAGE GUI_BITMAP bmtime;
extern GUI_CONST_STORAGE GUI_BITMAP bmRdWt;
extern GUI_CONST_STORAGE GUI_BITMAP bmSysState; 
extern GUI_CONST_STORAGE GUI_BITMAP bmCalPara;
extern GUI_CONST_STORAGE GUI_BITMAP bmSysSet;

//icon信息结构体
typedef struct {
  const GUI_BITMAP * pBitmap;
  const char       * pText;
} BITMAP_ITEM;





//任务栏资源列表
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {/* x    y  长度 高度 */
  { WINDOW_CreateIndirect,  NULL,           ID_WINDOW_0,   0,   0, 240, 25, 0, 0x0, 0 }, //任务栏
  { TEXT_CreateIndirect,    "00:00:00",     ID_TEXT_0,     3,   3, 66,  15, 0, 0x0, 0 }, //时间
  { TEXT_CreateIndirect,    "" ,          ID_TEXT_1,     111, 6, 40,  15, 0, 0x0, 0 }, //内存卡
  { TEXT_CreateIndirect,    "",           ID_TEXT_10,    70,  5, 40,  15, 0, 0x0, 0 }, //声音
  { TEXT_CreateIndirect,    DownloadIcon,   ID_TEXT_5,     156, 3, 17,  17, 0, 0x0, 0 }, //下行 
  { TEXT_CreateIndirect,    UploadIcon,     ID_TEXT_6,     166, 3, 17,  17, 0, 0x0, 0 }, //上行
  { TEXT_CreateIndirect,    "",           ID_TEXT_7,     196, 3, 42,  25, 0, 0x0, 0 }, //电池
};

static const BITMAP_ITEM _aBitmapItem[] = 
{
  
  {&bmSysState,  SysState    },  
  {&bmRdWt,      TrmRdWt     },  
  {&bmCalPara,    TrmChk     }, 
  {&bmprotocal,   SysLog     }, 
  {&bmSysSet,     SysSet     },
  {&bmabout,     TextHelp    },  
 
};


WM_HWIN TSK_Get_Upload_Text()
{
    return WM_GetDialogItem(g_hWin_task,ID_TEXT_5);
}

WM_HWIN TSK_Get_Download_Text()
{
    return WM_GetDialogItem(g_hWin_task,ID_TEXT_6);
}

WM_HWIN TSK_Get_Time()
{
    return WM_GetDialogItem(g_hWin_task,ID_TEXT_0);
}

WM_HWIN TSK_GetSD()
{
    return WM_GetDialogItem(g_hWin_task,ID_TEXT_1);
}

//无线时候变成绿色


    //TEXT_SetTextColor(hItem, GUI_WHITE);



void TSK_Battery_Charge(int count)
{
    WM_HWIN hItem;
    hItem = WM_GetDialogItem(g_hWin_task,ID_TEXT_7);
    TEXT_SetFont(hItem,&GUI_Font_Battery_40);
    switch(count)
    {
        case 0:
            TEXT_SetText(hItem, Battery_20);
            break;
        case 2:
            TEXT_SetText(hItem, Battery_40);
            break;
        case 4:
            TEXT_SetText(hItem, Battery_60);
            break;
        case 6:
            TEXT_SetText(hItem, Battery_80);
            break;
        case 8:
            TEXT_SetText(hItem, Battery_100);
            count = 0 ;
            break;
        default:
            break;
    }
    TEXT_SetTextColor(hItem, GUI_GREEN);
}

    //TEXT_SetFont(hItem,&GUI_Font_Battery_40);
        //TEXT_SetBkColor(hItem,GUI_GREEN);
        //TEXT_SetBkColor(hItem,GUI_GREEN);
        //TEXT_SetBkColor(hItem,GUI_GREEN);




void GUI_Msg_Download(u16 sw)
{
    WM_HWIN hItem;
    static u32 i = 0;
    /*数据发送*/
    
    if(ON == sw)
    {
        i = ICON_FLOW_FLASH_TIMEOUT;
        hItem = WM_GetDialogItem(g_hWin_task, ID_TEXT_5);
        TEXT_SetTextColor(hItem, GUI_YELLOW);
    }
    else
    {
        if(i == 0xffffffff)
        {
            //i--;
        }
        else if(i)
        {
            i--;
        }
        else
        {
            hItem = WM_GetDialogItem(g_hWin_task, ID_TEXT_5);
            TEXT_SetTextColor(hItem, GUI_WHITE);//GUI_GREEN);
            i = 0xffffffff;
        }
    }
        
 }


void GUI_Msg_Upload(u16 sw)
{
    WM_HWIN hItem;
    static u32 i;
    
    if(ON == sw)
    {
        i = ICON_FLOW_FLASH_TIMEOUT;
        hItem=WM_GetDialogItem(g_hWin_task,ID_TEXT_6);
        TEXT_SetTextColor(hItem, GUI_GREEN);
    }
    else
    {
        if(i == 0xffffffff)
        {
            //i--;
            
        }
        else if(i)
        {
            i--;
        }
        else
        {
            hItem = WM_GetDialogItem(g_hWin_task, ID_TEXT_6);
            TEXT_SetTextColor(hItem, GUI_WHITE );//GUI_GREEN);
            i = 0xffffffff;
        }               
    }
}


void Battery_State(int pwr_val)
{
    WM_HWIN hItem;
    hItem=WM_GetDialogItem(g_hWin_task,ID_TEXT_7);
    TEXT_SetFont(hItem,&GUI_Font_Battery_40);
    if(pwr_val < 2166)
    {
        TEXT_SetText(hItem,Battery_00);
        TEXT_SetTextColor(hItem,GUI_RED);
    }
    
    else if((pwr_val > 2171)&&(pwr_val < 2229))
    {
        TEXT_SetText(hItem,Battery_20);
        TEXT_SetTextColor(hItem,GUI_RED);
    }
    else if((pwr_val >= 2234)&&(pwr_val < 2291))
    {
        TEXT_SetText(hItem,Battery_40);
        TEXT_SetTextColor(hItem,GUI_YELLOW);
    }
    else if((pwr_val >= 2296)&&(pwr_val < 2415))
    {
        TEXT_SetText(hItem,Battery_60);
        TEXT_SetTextColor(hItem,GUI_GREEN);
    }
    else if((pwr_val >= 2420)&&(pwr_val < 2480))
    {
        TEXT_SetText(hItem,Battery_80);
        TEXT_SetTextColor(hItem,GUI_GREEN);
    }
    else if(pwr_val >= 2485)
    {
        TEXT_SetText(hItem,Battery_100);
        //TEXT_SetText(hItem,Battery_Charge);
        TEXT_SetTextColor(hItem,GUI_GREEN);
    }
}

void SetBeepState(void);
void SetBeepState(void)
{
    WM_HWIN hItem;
    hItem = WM_GetDialogItem(g_hWin_task,ID_TEXT_10);
    TEXT_SetFont(hItem,&GUI_Font_Battery_40);
    if(SYS_BEEP_ON == g_rom_para.beep_switch)
    {
        TEXT_SetText(hItem, BeepOn);
    }
    else
    {
        TEXT_SetText(hItem, BeepOff);
    }
}

//任务栏回调函数

static void _cbTaskDialog(WM_MESSAGE * pMsg) 
{

  WM_HWIN hItem;
  //int widget_id;
  
  switch (pMsg->MsgId) 
  {
      case WM_INIT_DIALOG:
        GUI_UC_SetEncodeUTF8();
        WINDOW_SetBkColor(pMsg->hWin, GUI_GRAY);
        
        hItem = WM_GetDialogItem(pMsg->hWin,ID_TEXT_5);
        TEXT_SetTextColor(hItem,GUI_WHITE);
        
        hItem = WM_GetDialogItem(pMsg->hWin,ID_TEXT_6);
        TEXT_SetTextColor(hItem,GUI_WHITE);

        hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_10);
        TEXT_SetTextColor(hItem,GUI_DARKGRAY);
        TEXT_SetFont(hItem, &GUI_Font_Battery_40);

        if(SYS_BEEP_ON == g_rom_para.beep_switch)
        {
            TEXT_SetText(hItem, BeepOn);
        }
        else
        {
            TEXT_SetText(hItem, BeepOff);
        }
        

        //TSK_Set_Protocol_Text();
        hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_1);
        TEXT_SetTextColor(hItem,GUI_DARKGRAY);
        TEXT_SetFont(hItem, &GUI_Font_Battery_40);
        TEXT_SetText(hItem, " ");
        break;

      default:
        WM_DefaultProc(pMsg);
        break;
  }
}


/*********************************************************************
*
*       _cbDialog
*/

static void _cbIconWin(WM_MESSAGE * pMsg) 
{
	//int     NCode;
	//int     Id;
	int IconViewIndex;//索引
	WM_HWIN hIconView;
    WM_HWIN hItem;
	hIconView = g_hWin_menu;
	IconViewIndex=ICONVIEW_GetSel(hIconView);
	switch (pMsg->MsgId) 
	{   

        case WM_INIT_DIALOG:
            break;
		case WM_PAINT: 
			GUI_SetBkColor(0xb2c7ca);
			GUI_Clear();
			break;
		case WM_KEY:
            
           // if((((WM_KEY_INFO*)(pMsg->Data.p))->PressedCnt)==0)
            {
            
			switch(((WM_KEY_INFO*)(pMsg->Data.p))->Key)
			{
				case GUI_KEY_ENTER:
					switch(IconViewIndex)
					{	
						case 2:
							g_hWin_TrmCal = CreateCal();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            hItem = CPS_GetReferVtg();
                            WM_SetFocus(hItem);
                            //CPS_ColorChange();
							break;

                        case 1:
			                g_hWin_TrmConf=CreateParaConf();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            //WM_SetFocus(g_hWin_ReadMeter);
                            hItem = PRW_GetElecPrtSwth();
                            WM_SetFocus(hItem);
                            PRW_ColorChange();
                            
                            g_gui_para.state = GUI_STATE_TRM_CONF;
                            g_gui_para.cmd = GUI_CMD_READ_TRM_CONF;
                            OSMboxPost(g_sys_ctrl.up_mbox, &g_gui_para);        
                            
							break;
                            
						case 0:
                            g_hWin_TrmState=CreateTrmState();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            hItem = SSD_GetEEPROM();
                            WM_SetFocus(hItem);
                            //SSD_ColorChange();
							break;

                        case 4:
                            //g_hWin_TrmState
							g_hWin_SysSet = CreateSysSet();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            //WM_SetFocus(g_hWin_SysSet);
                            hItem = SST_GetSrcTime();
                            WM_SetFocus(hItem);
                            SST_ColorChange();
							break;
						case 3:
                            g_hWin_TrmLog = CreateTrmLog();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            //WM_SetFocus(g_hWin_std);
                            //hItem = CPT_Get_Speed();
                            //WM_SetFocus(hItem);
                            //CPT_Color_Change();
							break;
                            
                        case 5:
                            g_hWin_about = Createabout();
                            //WM_BringToBottom(g_hWin_msg);
                            WM_HideWindow(g_hWin_TimeBar);
                            WM_HideWindow(g_hWin_Date);
                            WM_SetFocus(g_hWin_about);
                            //TMS_SetFocus();
                            //TMS_Color_Change();
                            break;
						
						default:
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


WM_HWIN TimeBarDisp(void)
{
    WM_HWIN hText;
    hText=TEXT_CreateEx(20,40,200,31,g_hWin_menu,WM_CF_SHOW,TEXT_CF_HCENTER,ID_TEXT_8,"00:00");
    TEXT_SetFont(hText,&GUI_Fontns20);
    TEXT_SetTextColor(hText,GUI_BLACK);
    return hText;
}


WM_HWIN DateBarDisp(void)
{
    WM_HWIN hText;
    hText=TEXT_CreateEx(20,63,200,21,g_hWin_menu,WM_CF_SHOW,TEXT_CF_HCENTER,ID_TEXT_9," ");
    TEXT_SetFont(hText,&GUI_Fontdate20);
    return hText;

}
WM_HWIN CreatePDA_IconMenu(void);



WM_HWIN CreatePDA_IconMenu(void)
{
  WM_HWIN hWin;	
  //WM_HWIN hText;
  //WM_HTIMER hTimer;
    
  WM_SetCreateFlags(WM_CF_MEMDEV);
  GUI_UC_SetEncodeUTF8();
  WIDGET_SetDefaultEffect(&WIDGET_Effect_Simple);
        
  hWin = ICONVIEW_CreateEx(0, 25, 240, 295, 
							   WM_HBKWIN, WM_CF_SHOW | WM_CF_HASTRANS, 
							   0, GUI_ID_ICONVIEW0, 65, 75);

  ICONVIEW_SetFont(hWin,&GUI_Font_Song_16);
 
  
  for (int i = 0; i < GUI_COUNTOF(_aBitmapItem); i++) 
  {
	   ICONVIEW_AddBitmapItem(hWin, _aBitmapItem[i].pBitmap, _aBitmapItem[i].pText);
       ICONVIEW_SetTextColor(hWin,i,GUI_BLACK);
  }
  
  ICONVIEW_SetBkColor(hWin, ICONVIEW_CI_SEL, GUI_BLUE | 0xC0000000);
  ICONVIEW_SetFrame(hWin,GUI_COORD_X,15);
  ICONVIEW_SetFrame(hWin,GUI_COORD_Y,70);
  
  ICONVIEW_SetSpace(hWin,GUI_COORD_X,10);
  ICONVIEW_SetSpace(hWin,GUI_COORD_Y,35);

 
  //GUI_SetPenSize(4);
  //GUI_SetColor(GUI_GREEN);
  //GUI_DrawHLine(27,5,145);


  g_hWin_task=GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbTaskDialog, WM_HBKWIN, 0, 0);
  g_hWin_TimeBar=TimeBarDisp();
  g_hWin_Date=DateBarDisp();
  WM_SetFocus(hWin);
  WM_SetCallback(WM_HBKWIN, _cbIconWin);
  return hWin;
}










