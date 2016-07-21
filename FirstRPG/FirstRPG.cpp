// FirstRPG.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char * argv[])
{
	CMain* cmain=new CMain(400,600);
	cmain->GameLoop();
	
	return 0;
}

