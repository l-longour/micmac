#pragma once

#include "GpGpu/helper_math_extented.cuh"

#ifdef _WIN32
	#include <Lmcons.h>
#endif

class GpGpuTools
{

public:
	
	GpGpuTools(){};
	
	~GpGpuTools(){};
	
	//					Save to file image PGM
	static bool			Array1DtoImageFile(float* dataImage,const char* fileName, uint2 dimImage);

	//					Save to file image PGM
	static bool			Array1DtoImageFile(float* dataImage,const char* fileName, uint2 dimImage, float factor );
	
	//					Convert array 2D to linear array
	static void			Memcpy2Dto1D(float** dataImage2D, float* dataImage1D, uint2 dimDest, uint2 dimSource);

	//					renvoi la dossier image de l'utilisateur
	static std::string	GetImagesFolder();

	//					divise toutes les valeurs du tableau par un facteur
	static float* 		DivideArray(float* data, uint2 dimImage, float factor);

	//					sortie de tableau
	static void			OutputArray(float* data, uint2 dim, float offset = 1.0f, float defaut = 0.0f, float sample = 1.0f, float factor = 1.0f);

};



