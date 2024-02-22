#ifndef __UIDATETIME_H__
#define __UIDATETIME_H__

#pragma once

namespace DuiLib
{
	class CDateTimeWnd;

	/// ʱ��ѡ��ؼ�
	class UILIB_API CDateTimeUI : public CLabelUI
	{
		friend class CDateTimeWnd;
	public:
		CDateTimeUI();
		LPCTSTR GetClass() const;
		LPVOID GetInterface(LPCTSTR pstrName);

		SYSTEMTIME& GetTime();
		void SetTime(SYSTEMTIME* pst);
		void SetAttribute(LPCTSTR pstrName, LPCTSTR pstrValue);

		void SetReadOnly(bool bReadOnly);
		bool IsReadOnly() const;
		bool IsTimerFormat();
		void UpdateText();

		void DoEvent(TEventUI& event);

	protected:
		SYSTEMTIME m_sysTime;
		int        m_nDTUpdateFlag;
		bool       m_bReadOnly;
		bool	   m_bTimerFormat;

		CDateTimeWnd* m_pWindow;
	};
}
#endif // __UIDATETIME_H__