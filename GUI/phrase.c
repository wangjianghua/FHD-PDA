#include "phrase.h"
#include "includes.h"



//beep
const char BeepOff[] ="\xe5\x8f\x81";
const char BeepOn[] = "\xe8\x82\x86";

//保存
const char Save[]="\xe4\xbf\x9d\xe5\xad\x98";
//取消
const char Cancel[]="\xe5\x8f\x96\xe6\xb6\x88";
//退出
const char Quit[]="\xe8\xbf\x94\xe5\x9b\x9e";
//确认
const char Confirm[]="\xe7\xa1\xae\xe8\xae\xa4";

//发送
const char Send[]="\xe5\x8f\x91\xe9\x80\x81";

//停止
const char Stop[]="F2 \xe5\x81\x9c \xe6\xad\xa2";

//清除
const char ClearScr[]="* \xe6\xb8\x85 \xe9\x99\xa4";

//开始
const char Start[]="F1 \xe5\xbc\x80 \xe5\xa7\x8b";

//ERR_BOX

const char Worning[]="\xe8\xad\xa6\xe5\x91\x8a";
const char WrnText[]="\xe7\xa1\xae\xe5\xae\x9a\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xe5\x86\x85\xe5\xad\x98\xe5\x90\x97\xef\xbc\x9f?";


/*******************************************
*
*           主界面
********************************************/

//上行标志
const char UploadIcon[]="\xe5\xa3\xb9";

//下行标志
const char DownloadIcon[]="\xe8\xb4\xb0";

//十玖捌柒陆伍
//\xe5\x8d\x81
//\xe7\x8e\x96
//\xe6\x8d\x8c
//\xe6\x9f\x92
//\xe9\x99\x86
//\xe4\xbc\x8d
//电池
const char Battery_100[]="\xe5\x8d\x81";
const char Battery_80[] ="\xe7\x8e\x96";
const char Battery_60[] ="\xe6\x8d\x8c";
const char Battery_40[] ="\xe6\x9f\x92";
const char Battery_20[] ="\xe9\x99\x86";
const char Battery_00[] ="\xe4\xbc\x8d";
//const char Battery_Charge[] = "\xe8\x82\x86";
const char SD_Mount[] =   "\xe8\xb4\xb0";
const char SD_Unmount[] = "\xe5\xa3\xb9";



/***************************************************************
*
*消息记录
***************************************************/
//清除
const char Clear[]="\xe6\xb8\x85\xe9\x99\xa4";
//返回
const char Back[]="\xe8\xbf\x94\xe5\x9b\x9e";
//日志
const char Log[]="\xe6\x97\xa5\xe5\xbf\x97";

/***************************************
*
*    时间设置
*
***************************************/


const char Year[]  ="\xe5\xb9\xb4";
const char Month[] ="\xe6\x9c\x88";
const char Day[]   ="\xe6\x97\xa5";
const char Hour[]  ="\xe6\x97\xb6";
const char Minite[]="\xe5\x88\x86";
const char Second[]="\xe7\xa7\x92";

const char Monday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe4\xb8\x80";
const char Tuesday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe4\xba\x8c";
const char Wednesday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe4\xb8\x89";
const char Thursday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe5\x9b\x9b";
const char Friday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe4\xba\x94";
const char Saturday[] ="\xe6\x98\x9f\xe6\x9c\x9f\xe5\x85\xad";
const char Sunday[] = "\xe6\x98\x9f\xe6\x9c\x9f\xe6\x97\xa5";
const char Week[] = "\xe6\x98\x9f\xe6\x9c\x9f";
const char TimeSet_24[]="\xe6\x97\xb6\xe9\x97\xb4\xe8\xae\xbe\xe7\xbd\xae(24\xe6\x97\xb6\xe5\x88\xb6)";
const char TypeDirection[]="24\xe5\xb0\x8f\xe6\x97\xb6\xe6\xa0\xbc\xe5\xbc\x8f";


const char SysSet[] = "\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xae\xbe\xe7\xbd\xae";
const char TimeSet[] = "\xe6\x97\xb6\xe9\x97\xb4\xe8\xae\xbe\xe7\xbd\xae";
//const char F1TimeSet[] = 
//屏保时间
const char SrcTime[] = "\xe5\xb1\x8f\xe4\xbf\x9d\xe6\x97\xb6\xe9\x97\xb4(S)";
const char ShutTime[] = "\xe8\x87\xaa\xe5\x8a\xa8\xe5\x85\xb3\xe6\x9c\xba\xe6\x97\xb6\xe9\x97\xb4(S)";
const char MemState[] = "\xe5\x86\x85\xe5\xad\x98\xe5\x8d\xa1\xe4\xbf\xa1\xe6\x81\xaf";
const char Promotion[] = "\xe5\x8d\x87\xe7\xba\xa7";
const char SoftVersion[] = "\xe8\xbd\xaf\xe4\xbb\xb6\xe7\x89\x88\xe6\x9c\xac";
const char HardVersion[] = "\xe7\xa1\xac\xe4\xbb\xb6\xe7\x89\x88\xe6\x9c\xac";
//自动关机时间
//内存状态
const char PmtConfirm[] = "  \xe7\xa1\xae\xe8\xae\xa4\xe5\x8d\x87\xe7\xba\xa7?";
const char FormatCfm[] = "\xe7\xa1\xae\xe8\xae\xa4\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96\xef\xbc\x9f?";
const char *gc_messageBoxText[] = {
    PmtConfirm,
        FormatCfm,
};

const char TextHelp[] = "\xe5\xb8\xae\xe5\x8a\xa9";

const char FHD_PDA[] = "\xe9\x98\xb2\xe6\x99\x83\xe7\x94\xb5\xe6\x8e\x8c\xe6\x9c\xba";

/*********************************************************************
*
*       
*
*********************************************************************/

const char TrmChk[] = "\xe7\xbb\x88\xe7\xab\xaf\xe6\xa0\xa1\xe5\x87\x86";
const char DevAddr[] = "\xe8\xae\xbe\xe5\xa4\x87\xe5\x9c\xb0\xe5\x9d\x80";

const char MsgClear[] = "\xe6\xb8\x85\xe7\xa9\xba";
//\xe6\xb3\xa2\xe7\x89\xb9\xe7\x8e\x87


//参数抄设
//const char ParaRdWt
//correct time
const char TimeCrt[] = "\xe6\xa0\xa1\xe5\x87\x86\xe7\xbb\x88\xe7\xab\xaf\xe6\x97\xb6\xe9\x97\xb4";

//终端时间
const char TrmTime[] = "\xe7\xbb\x88\xe7\xab\xaf\xe6\x97\xb6\xe9\x97\xb4:";
const char TrmRdWt[] = "\xe7\xbb\x88\xe7\xab\xaf\xe6\x8a\x84\xe8\xae\xbe";
const char SysTime[] = "\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xb6\xe9\x97\xb4";
const char RdSysTime[] = "\xe8\xaf\xbb\xe5\x8f\x96\xe7\xbb\x88\xe7\xab\xaf\xe6\x97\xb6\xe9\x97\xb4";
const char SysCofigure[] = "\xe7\xb3\xbb\xe7\xbb\x9f\xe9\x85\x8d\xe7\xbd\xae";
const char OverTime[] = "\xe8\xb6\x85\xe6\x97\xb6(ms)";
//anti-interference electricity 防晃电
const char InterElecPrt[] = "\xe6\x99\x83\xe7\x94\xb5\xe4\xbf\x9d\xe6\x8a\xa4\xe5\xbc\x80\xe5\x85\xb3";
const char SwitchOn[] = "\xe5\xbc\x80";
const char SwitchOff[] = "\xe5\x85\xb3";

const char F1SwitchOn[] = "F1  \xe5\xbc\x80";
const char F2SwitchOff[] = "F2  \xe5\x85\xb3";

const char VoltageChk[] = "\xe6\xa0\xa1\xe5\x87\x86\xe7\xbb\x88\xe7\xab\xaf\xe7\x94\xb5\xe5\x8e\x8b";
const char VoltageRead[] = "\xe7\x94\xb5\xe5\x8e\x8b\xe8\xaf\xbb\xe5\x8f\x96";

//掌机信息
const char PdaInfo[] = "\xe6\x8e\x8c\xe6\x9c\xba\xe4\xbf\xa1\xe6\x81\xaf";

//读取的电压值
const char VtgValue[] = "\xe7\xbb\x88\xe7\xab\xaf\xe7\x94\xb5\xe5\x8e\x8b\xe5\x80\xbc(V)";

//参考电压
const char ReferVtg[] = "\xe5\x8f\x82\xe8\x80\x83\xe7\x94\xb5\xe5\x8e\x8b(V)";

//晃电保护时长
const char ProtectTime[] = "\xe6\x99\x83\xe7\x94\xb5\xe4\xbf\x9d\xe6\x8a\xa4\xe6\x97\xb6\xe9\x95\xbf(ms)";
//读参数
const char ReadPara[] = "\xe8\xaf\xbb\xe5\x8f\x96\xe5\x8f\x82\xe6\x95\xb0";
const char SetPara[] = "\xe8\xae\xbe\xe7\xbd\xae\xe5\x8f\x82\xe6\x95\xb0";
//写参数
const char WritePara[] = "F1\xe5\x86\x99\xe5\x8f\x82\xe6\x95\xb0";

const char EEPROM[] = "EEPROM";
//系统状态
const char SysState[] = "\xe7\xbb\x88\xe7\xab\xaf\xe7\x8a\xb6\xe6\x80\x81";
const char ReadSysState[] = "\xe8\xaf\xbb\xe5\x8f\x96\xe7\xb3\xbb\xe7\xbb\x9f\xe7\x8a\xb6\xe6\x80\x81";
//工作状态
const char WorkState[] = "\xe8\xbf\x90\xe8\xa1\x8c\xe7\x8a\xb6\xe6\x80\x81";
//正常
const char WorkRight[] = "\xe6\xad\xa3\xe5\xb8\xb8";
//出错
const char WorkWrong[] = "\xe5\x87\xba\xe9\x94\x99";
//电容继电器投切动作
const char RelaySwitch[] = "\xe7\xbb\xa7\xe7\x94\xb5\xe5\x99\xa8\xe6\x8a\x95\xe5\x88\x87\xe5\x8a\xa8\xe4\xbd\x9c";
//无
const char NoneAction[] = "\xe6\x97\xa0";
//有
const char HaveAction[] = "\xe6\x9c\x89";
//接触器状态
const char ContactorState[] = "\xe6\x8e\xa5\xe8\xa7\xa6\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81";
//继电器状态
const char RelayState[] = "\xe7\xbb\xa7\xe7\x94\xb5\xe5\x99\xa8\xe7\x8a\xb6\xe6\x80\x81";
//电压
const char Voltage[] = "\xe7\x94\xb5\xe5\x8e\x8b(V)";
//晃电保护次数
const char ProtectNum[] = "\xe6\x99\x83\xe7\x94\xb5\xe4\xbf\x9d\xe6\x8a\xa4\xe6\xac\xa1\xe6\x95\xb0";
//读状态
const char ReadState[] = "\xe8\xaf\xbb\xe7\x8a\xb6\xe6\x80\x81";
//系统记录
const char SysLog[] = "\xe7\xbb\x88\xe7\xab\xaf\xe8\xae\xb0\xe5\xbd\x95";
//防晃电记录
const char AntiLog[] = "\xe9\x98\xb2\xe6\x99\x83\xe7\x94\xb5\xe8\xae\xb0\xe5\xbd\x95";
//发生时间
const char OccurTime[] = "\xe5\x8f\x91\xe7\x94\x9f\xe6\x97\xb6\xe9\x97\xb4";
//时长
const char Period[] = "\xe6\x97\xb6\xe9\x95\xbf(ms)";
//读记录
const char ReadLog[] = "\xe8\xaf\xbb\xe8\xae\xb0\xe5\xbd\x95";
//读取
const char ReadData[] = "\xe8\xaf\xbb\xe5\x8f\x96";
const char F1ReadData[] = "\xe8\xaf\xbb\xe5\x8f\x96";
//校准
const char ChkData[] = "\xe6\xa0\xa1\xe5\x87\x86";
//调试
const char DevTest[] = "\xe8\xb0\x83\xe8\xaf\x95";
//数据
const char MsgData[] = "\xe6\x95\xb0\xe6\x8d\xae";

//电池电压
const char BtrVoltage[] = "\xe7\x94\xb5\xe6\xb1\xa0\xe7\x94\xb5\xe5\x8e\x8b(V)";


const char MemSize[]="\xe5\x86\x85\xe5\xad\x98\xe5\x8d\xa1\xe5\xae\xb9\xe9\x87\x8f";
const char MemUsage[]="\xe4\xbd\xbf\xe7\x94\xa8\xe7\x8e\x87";
const char FileNum[]="\xe6\x96\x87\xe4\xbb\xb6\xe6\x95\xb0\xe7\x9b\xae";
const char FactorySet[]="\xe6\x81\xa2\xe5\xa4\x8d\xe5\x87\xba\xe5\x8e\x82\xe8\xae\xbe\xe7\xbd\xae";
const char MemFormat[]="\xe6\xa0\xbc\xe5\xbc\x8f\xe5\x8c\x96";
const char MemReturn[]="\xe8\xbf\x94\xe5\x9b\x9e";
const char VersionNum[]="\xe7\x89\x88\xe6\x9c\xac\xe5\x8f\xb7:2015.04.21";
const char MM_Vtg[] = "\xe7\x94\xb5\xe6\xb1\xa0\xe7\x94\xb5\xe5\x8e\x8b(V)";
const char BeepSound[] = "\xe6\x8c\x89\xe9\x94\xae\xe5\xa3\xb0\xe9\x9f\xb3\xe5\xbc\x80\xe5\x85\xb3";

const char *TextDay[] = {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
};
const char *TextWeek[] = {
    "\xe6\x97\xa5",
    "\xe4\xb8\x80",
    "\xe4\xba\x8c",   
    "\xe4\xb8\x89",
    "\xe5\x9b\x9b",
    "\xe4\xba\x94",
    "\xe5\x85\xad",
};

const char *FHD_WEEK[] = {
    "\xe5\x91\xa8\xe6\x97\xa5",
    "\xe5\x91\xa8\xe4\xb8\x80",
    "\xe5\x91\xa8\xe4\xba\x8c",   
    "\xe5\x91\xa8\xe4\xb8\x89",
    "\xe5\x91\xa8\xe5\x9b\x9b",
    "\xe5\x91\xa8\xe4\xba\x94",
    "\xe5\x91\xa8\xe5\x85\xad",
};

const char *EditFrameTitle[] = {
    ReferVtg,
    ProtectTime,
    DevAddr,
    Year,
    Month,
    Day,
    Hour,
    Minite,
    Second,
    SrcTime,
    ShutTime,
};

const char *ListViewFrameTitle[] = {
    InterElecPrt,
        Week,
};

const char *TextSwitch[] = {
    SwitchOn,
    SwitchOff,
};

const char *TextEEPROM[] = {
    WorkRight,
    WorkWrong,
};

const char *aboutText []={
    "\xe9\x98\xb2\xe6\x99\x83\xe7\x94\xb5\xe6\x8e\x8c\xe6\x8a\x84\n\n",
    "1.\xe7\xbb\xbf\xe8\x89\xb2\xe5\x92\x8c\xe7\xba\xa2\xe8\x89\xb2\xe6\x8c\x89\xe9\x94\xae",
    "\xe5\xaf\xb9\xe5\xba\x94\xe7\x9a\x84\xe5\xb0\xb1\xe6\x98\xaf\xe5\xb1\x8f\xe5\xb9\x95\xe4\xb8\xad",
    "\xe7\x9a\x84\xe4\xb8\xa4\xe4\xb8\xaa\xe7\x9b\xb8\xe5\x90\x8c\xe9\xa2\x9c\xe8\x89\xb2\xe7\x9a\x84",
    "\xe6\x8c\x89\xe9\x92\xae\xef\xbc\x88\xe7\xa1\xae\xe5\xae\x9a\xe6\x88\x96\xe8\x80\x85\xe9\x80\x80\xe5\x87\xba\xef\xbc\x89\n",
    "2.\xe7\x94\xa8\xe4\xb8\x8a\xe4\xb8\x8b\xe6\x96\xb9\xe5\x90\x91\xe9\x94\xae\xe5\x8f\xaf\xe4\xbb\xa5",
    "\xe5\xaf\xb9\xe7\x9b\xb8\xe5\xba\x94\xe9\x80\x89\xe9\xa1\xb9\xe8\xbf\x9b\xe8\xa1\x8c\xe9\x80\x89\xe6\x8b\xa9,",
    "\xe7\x94\xa8TAB\xe9\x94\xae\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbb\xa5\xe8\xbf\x9b\xe8\xa1\x8c\xe5\x88\x87\xe6\x8d\xa2\n",
    "3.\xe6\x8c\x89\xe9\x92\xae\xe4\xb8\x8a\xe6\xa0\x87\xe6\xb3\xa8\xe7\x9a\x84\xe5\xad\x97\xe7\xac\xa6",
    "\xe6\x88\x96\xe5\xad\x97\xe6\xaf\x8d\xe6\x98\xaf\xe7\x9b\xb8\xe5\xba\x94\xe9\x80\x89\xe9\xa1\xb9\xe7\x9a\x84",
    "\xe5\xbf\xab\xe6\x8d\xb7\xe6\x96\xb9\xe5\xbc\x8f\xef\xbc\x8c\xe7\x9b\xb4,\xe7\x82\xb9\xe5\x87\xbb",
    "\xe5\x8d\xb3\xe5\x8f\xaf\xe8\xbf\x9b\xe8\xa1\x8c\xe7\x9b\xb8\xe5\x85\xb3\xe6\x93\x8d\xe4\xbd\x9c\n",
    "4.\xe9\x80\x89\xe4\xb8\xad\xe7\x9b\xb8\xe5\xba\x94\xe9\x80\x89\xe9\xa1\xb9\xe5\x90\x8e\xef\xbc\x8c",
    "\xe6\x8c\x89OK\xe9\x94\xae\xe8\xbf\x9b\xe5\x85\xa5\xe7\xbc\x96\xe8\xbe\x91",
};





