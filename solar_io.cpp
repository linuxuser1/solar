# include <iostream>
# include <string>
# include <vector>
# include "particle.h"


//    1231 !NATOM
//       1 U    1    MET  N    NH3   -0.300000       14.0070           0



std::ofstream psfFile;

void makePSF(std::vector<particle> arrayOfAllParticles, int i_tnp){

psfFile.open ("test.psf");

psfFile << "    " << i_tnp << " !NATOM";
psfFile << "\n";

for(int i=0; i<i_tnp;i++){
  psfFile << arrayOfAllParticles[i].i_number << " U    1    MET  N    NH3 " << arrayOfAllParticles[i].f_radius << arrayOfAllParticles[i].d_mass ;
  psfFile << "\n";
};

psfFile.close();

};