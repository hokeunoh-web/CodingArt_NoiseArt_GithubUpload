//
//  mover.cpp
//  CodingArtFundamentals_NoisePattern
//
//  Created by 오호근 on 11/22/26.
//

#include "mover.hpp"

mover::mover(){

	
	r = floor (ofRandom (0,255));
	g = floor (ofRandom (0,120));
	b = floor (ofRandom (120,255));
	a = floor (ofRandom (30,80));

	x = ofGetWidth()/2;
	y = ofGetHeight ()/2;

	radius = ofRandom (0.5,3);

	nPos1 = ofRandom (-1000,1000);
	nPos2 = ofRandom (2000,4000);

	n1Speed = ofRandom (0.0001,0.0005);
	n2Speed = ofRandom (0.0001,0.0005);

	xDir = 0;
	yDir = 0;

	
	maxSpeed = ofRandom (1,3);

}

void mover:: display (){

	ofFill ();
	ofSetColor (r,g,b,a);
	ofDrawCircle(x,y,radius);

}

void mover :: update (){

	xDir = ofSignedNoise (nPos1 += n1Speed);
	yDir = ofSignedNoise (nPos2 += n2Speed);


	xDir = ofMap (xDir, -1.0,1.0,-maxSpeed,maxSpeed);
	yDir = ofMap (yDir, -1.0,1.0,-maxSpeed,maxSpeed);

	x += xDir;
	y += yDir;

}
