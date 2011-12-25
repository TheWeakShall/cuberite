#include "cWolf.h"

cWolf::cWolf()
{
	m_MobType = 95;
	GetMonsterConfig("Wolf");
}

cWolf::~cWolf()
{
}

bool cWolf::IsA( const char* a_EntityType )
{
	if( strcmp( a_EntityType, "cWolf" ) == 0 ) return true;
	return cMonster::IsA( a_EntityType );
}
