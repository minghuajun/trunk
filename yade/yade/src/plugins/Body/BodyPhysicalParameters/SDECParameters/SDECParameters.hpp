#ifndef __SDECDISCRETEELEMENT_H__
#define __SDECDISCRETEELEMENT_H__

#include "RigidBodyParameters.hpp"

class SDECParameters : public RigidBodyParameters
{
	public : Real young;
	public : Real poisson;
	public : Real frictionAngle;

	public : SDECParameters ();
	public : virtual ~SDECParameters ();

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Serialization										///
///////////////////////////////////////////////////////////////////////////////////////////////////
	
	REGISTER_CLASS_NAME(SDECParameters);
	public : void registerAttributes();

///////////////////////////////////////////////////////////////////////////////////////////////////
/// Indexable											///
///////////////////////////////////////////////////////////////////////////////////////////////////

	REGISTER_CLASS_INDEX(SDECParameters,RigidBodyParameters);
};

REGISTER_SERIALIZABLE(SDECParameters,false);

#endif // __SDECDISCRETEELEMENT_H__

