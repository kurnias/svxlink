/**
@file	 Settings.h
@brief   Handle application settings.
@author  Tobias Blomberg
@date	 2003-03-30

\verbatim
Qtel - The Qt EchoLink client
Copyright (C) 2003  Tobias Blomberg / SM0SVX

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
\endverbatim
*/

/** @example Template_demo.cpp
An example of how to use the Template class
*/


#ifndef SETTINGS_INCLUDED
#define SETTINGS_INCLUDED


/****************************************************************************
 *
 * System Includes
 *
 ****************************************************************************/

#include <sigc++/signal_system.h>

#include <qstringlist.h>
#include <qsize.h>


/****************************************************************************
 *
 * Project Includes
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Local Includes
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Forward declarations
 *
 ****************************************************************************/

class SettingsDialog;


/****************************************************************************
 *
 * Namespace
 *
 ****************************************************************************/

//namespace MyNameSpace
//{

/****************************************************************************
 *
 * Defines & typedefs
 *
 ****************************************************************************/

/*
 *----------------------------------------------------------------------------
 * Macro:   
 * Purpose: 
 * Input:   
 * Output:  
 * Author:  
 * Created: 
 * Remarks: 
 * Bugs:    
 *----------------------------------------------------------------------------
 */


/*
 *----------------------------------------------------------------------------
 * Type:    
 * Purpose: 
 * Members: 
 * Input:   
 * Output:  
 * Author:  
 * Created: 
 * Remarks: 
 *----------------------------------------------------------------------------
 */


/****************************************************************************
 *
 * Exported Global Variables
 *
 ****************************************************************************/



/****************************************************************************
 *
 * Class definitions
 *
 ****************************************************************************/

/*
 *----------------------------------------------------------------------------
 * Class:     Settings
 * Purpose:   Settings class
 * Inherits:  
 * Input:     
 * Output:    
 * Author:    
 * Created:   
 * Remarks:   
 * Bugs:      
 *----------------------------------------------------------------------------
 */   
class Settings : public SigC::Object
{
  public:
    static Settings *instance(void);
  
    /*
     *------------------------------------------------------------------------
     * Method:	
     * Purpose: 
     * Input: 	
     * Output:	None
     * Author:	
     * Created: 
     * Remarks: 
     * Bugs:  	
     *------------------------------------------------------------------------
     */
    ~Settings(void);
    
    void showDialog(void);
    void readSettings(void);
    const QString& callsign(void) const { return m_callsign; }
    const QString& password(void) const { return m_password; }
    const QString& name(void) const { return m_name; }
    const QString& location(void) const { return m_location; }
    const QString& info(void) const { return m_info; }
    
    const QString& directoryServer(void) const { return m_directory_server; }
    int listRefreshTime(void) const { return m_list_refresh_time; }
    bool startAsBusy(void) const { return m_start_as_busy; }
    
    const QString& audioDevice(void) const { return m_audio_device; }
    bool useFullDuplex(void) const { return m_use_full_duplex; }
    
    void setBookmarks(const QStringList &bookmarks);
    const QStringList& bookmarks(void) const { return m_bookmarks; }
    
    QSize mainWindowSize(void) const { return m_main_window_size; }
    void setMainWindowSize(QSize size);
    
    SigC::Signal0<void> configurationUpdated;
    
  protected:
    
  private:
    static Settings * the_instance;
    
    SettingsDialog *  dialog;
    
    QString   	      m_callsign;
    QString   	      m_password;
    QString   	      m_name;
    QString   	      m_location;
    QString   	      m_info;
    
    QString   	      m_directory_server;
    int       	      m_list_refresh_time;
    bool      	      m_start_as_busy;

    QString   	      m_audio_device;
    bool      	      m_use_full_duplex;

    QStringList       m_bookmarks;
    
    QSize     	      m_main_window_size;
    
    Settings(void);
    
};  /* class Settings */


//} /* namespace */

#endif /* SETTINGS_INCLUDED */



/*
 * This file has not been truncated
 */

