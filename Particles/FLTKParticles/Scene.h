#pragma once

#include "Types.h"
#include "ParticleSystem.h"
#include "Environment.h"

class CScene
{
public:
	CScene();
	CScene(CEnvironment env);
	~CScene(void);


	void	Render(void);
	void	Update(void);


	Vector			camera;
	CEnvironment	environment;
	

	CParticleSystem		particleSystem;
};
