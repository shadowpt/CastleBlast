//
//  App.h
//  Project
//
//  Created by Inês on 10/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include <cg/cg.h>
#include "SceneManager.h"
#include "Lights.h"
#include "Sky.h"
#include "Fog.h"
#include "CameraManager.h"

namespace CastleBlast {
	class App : public cg::Application {
	public:
		App();
		~App();
		void createEntities();
		void createViews();
	};
}