// MyDouBan.h: interface for the MyDouBan class.
//
//////////////////////////////////////////////////////////////////////

/***********************************************************************/
/*
 * Author:	唐德钢
 * Time:	2013-01-05	
 * Address:	成都理工大学信息科学与技术学院软件工程09级03班
 * Email:	xiaotanghappy@foxmail.com
 * Describe:	封装去豆瓣网获取和解析的操作
*/
/***********************************************************************/

#if !defined(AFX_MYDOUBAN_H__15274355_0B60_4D91_8B62_80D663C860E6__INCLUDED_)
#define AFX_MYDOUBAN_H__15274355_0B60_4D91_8B62_80D663C860E6__INCLUDED_

#include "common.h"

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

typedef struct tBOOK
{
	unsigned long m_ulID;
	string m_strTitle;
	string m_strPublisher;
	string m_strAuthor;
	string m_strPubdate;
	string m_strSummary;
	tBOOK();
}BOOK;

typedef struct
{
	int m_nCount;
	int m_nTotal;
	int m_nOffset;
	list<BOOK> m_lsBooks;
}JSON_INFO;

class MyDouBan  
{
public:
	MyDouBan();
	virtual ~MyDouBan();

	//解析
	bool DouBanParse(const CString &strJson, JSON_INFO &tJsonInfo);
	//..
	bool GetBookInfo(const CString &strBook, BOOK &book);
private:
	CString m_strJson;

};

#endif // !defined(AFX_MYDOUBAN_H__15274355_0B60_4D91_8B62_80D663C860E6__INCLUDED_)
