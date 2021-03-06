#ifndef __APP_DataManager_H__
#define __APP_DataManager_H__

#include "Stage.h"

USING_NS_CC;

#define TABLESNUM 1
typedef std::function<void(int)> loadCallback;

class DataManager
{
public:
	DataManager(void);
	~DataManager(void);

	static DataManager* getInstance();

	void loadTable(const loadCallback& callback, std::string localConfig);
	
	tables::Stage* m_Stage;

#define STAGE_TABLE (DataManager::getInstance()->m_Stage)
#define GET_STAGE_DATA	(&(DataManager::getInstance()->m_Stage->m_data))
};

#endif  // __APP_DataManager_H__