//
//  mover.hpp
//  CodingArtFundamentals_NoisePattern
//
//  Created by 오호근 on 11/22/26.
//

#ifndef mover_hpp
#define mover_hpp

#include <stdio.h>
#include "ofMain.h"

class mover {
	
	
public:
	mover();
	
	int r;
	int g;
	int b;
	int a;
	
	float x;
	float y;
	
	float nPos1;
	float nPos2;
	
	float n1Speed;
	float n2Speed;
	
	float xDir;
	float yDir;
	
	float maxSpeed;
	
	float radius;
	
	void display ();
	void update ();
	
};
			 
			 

#endif /* mover_hpp */
