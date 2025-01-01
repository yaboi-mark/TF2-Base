//====== Copyright © 1996-2005, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#ifndef TF_WEAPON_SPAS_H
#define TF_WEAPON_SPAS_H
#endif
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_gun.h"

#if defined( CLIENT_DLL )
#define CTFSpas C_TFSpas
#endif

// Reload Modes
enum
{
	TF_WEAPON_SHOTGUN_RELOAD_START = 0,
	TF_WEAPON_SHOTGUN_RELOAD_SHELL,
	TF_WEAPON_SHOTGUN_RELOAD_CONTINUE,
	TF_WEAPON_SHOTGUN_RELOAD_FINISH
};

//=============================================================================
//
// Shotgun class.
//
class CTFSpas : public CTFWeaponBaseGun
{
public:

	DECLARE_CLASS(CTFSpas, CTFWeaponBaseGun);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFSpas();

	virtual int		GetWeaponID(void) const			{ return TF_WEAPON_SPAS; }
	virtual void	PrimaryAttack();
	virtual void	SecondaryAttack();

protected:

	void		Fire(CTFPlayer *pPlayer);
	void		UpdatePunchAngles(CTFPlayer *pPlayer);

private:

	CTFSpas(const CTFSpas &) {}
};