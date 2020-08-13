#pragma once

#include "CoreMinimal.h"
#include "Math/Vector.h"

class MapPoint
{
	uint32 iX, iY;
	//Flag *pFlag = nullptr;
	//Building *pBuilding = nullptr;
	float fHeight = 0.0f;
	virtual FVector GetPosition();
};

class Map
{
	uint32 iWidth, iHeight;
	TArray<MapPoint> vContent;
};