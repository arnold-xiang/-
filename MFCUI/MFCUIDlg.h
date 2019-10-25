
// MFCUIDlg.h : ͷ�ļ�
//

#pragma once
#include "afxcmn.h"
#include "afxwin.h"
#include "BtnST.h"
#include "SerialPort.h"  
#include <cstdlib>
#include<ctime>


// CMFCUIDlg �Ի���
class CMFCUIDlg : public CDialogEx
{
// ����
public:
	CMFCUIDlg(CWnd* pParent = NULL);	// ��׼���캯��
	CStatusBar m_bar;
	CFont m_font;
	CBrush m_brush;
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	
	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	SIZE old;
	CRect m_rect;
	HWND ListControlhwnd;
	bool flag1;//����Ƿ�򿪵ı�־
	//bool flag2;�Ƿ�ע���־
	CMenu m_Menu;
	int itemCount;
	CString regcode;
	CString str1 = "8 X 12";
	CString str2 = "B-10 X 10";
	CString str3 = "W-10 X 10";
	CString str4 = "6 X 8";
	//CString str3 = "Chinese";
	//CString str4 = "English";
	//CString str5 = "France";
	//CString str6 = "Italian";
	CString BoxNumber;
	CString SampleType;
	CString BoxDescription;
	CString BoxLocation;
	CString CameraName;
	CString Bar_Total;
	CString Bar_Dealed;
	CListCtrl m_ListCtrl;
	HACCEL m_hAccel;
	afx_msg void init_list_control();
	//afx_msg void init_StatusBarr();
	
	//afx_msg void changeControlSize(CWnd* pWnd, int x, int y);
	//afx_msg void init_Register();
	//afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton5Txt();
	afx_msg void OnBnClickedButton3Image();
	afx_msg void OnBnClickedButton4Sql();
	BOOL PreTranslateMessage(MSG * pMsg);
	afx_msg void OnBnClickedButtonChangecontext();
	afx_msg void OnNMClickList(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnCustomdrawList(NMHDR *pNMHDR, LRESULT *pResult);
	CString m_ChangeContext;
	
	//afx_msg void OnBnClickedButton2Start2();
	afx_msg void OnBnClickedButtonExit();
	afx_msg void OnBnClickedButton2Deal();
	
	//CComboBox m_Device;
	afx_msg void OnBnClickedButton5Excel();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	CButtonST B_Deal;
	CButtonST B_Image;
	CButtonST B_Sql;
	CButtonST B_Txt;
	CButtonST B_Excel;
	CButtonST B_Exit;
	CButtonST B_Change;
	CButtonST B_Grab;
	afx_msg void OnBnClickedButtonGrab();
	CComboBox m_Version;
	CComboBox m_Language;
	
	afx_msg void OnBnClickedButtonOutsql();
	CButtonST B_OutSql;
	CString Outsql;
	//afx_msg void OnBnClickedButtonLanguage();
	afx_msg void OnBnClickedButtonEnglish();
	CButtonST B_English;
	afx_msg void OnSize(UINT nType, int cx, int cy);
	void Modifys(int idc, CRect client, int x, int y);
	void Modify(int idc, CRect client, int x, int y);
	
	afx_msg void OnBnClickedButtonChinese();
	CButtonST B_Chinese;
	//CComboBox m_Camera;
	/*����ͨ���õ���*/
	CSerialPort mySerialPort;
	int PortNum;
	string m_Recived;
	bool isCommunication;
	afx_msg int EnumPort();
	afx_msg bool Communication();
	unsigned char SendBuf1[8];
	unsigned char SendBuf2[8];
	unsigned char SendBuf3[8];
	const string RecevedBuf1 = "71 FE 80 01 00 00 00 CB ";
	const string RecevedBuf2 = "71 FE 80 01 00 00 00 CB 71 FE 81 02 AA AA AA CA ";
};
//static UINT indicators[] = {
//	IDS_T1,
//	IDS_T2,
//	IDS_T3,
//};
