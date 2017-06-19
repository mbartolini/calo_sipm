// 
// --------------------------------------------------------------
//      Gossip GEANT 4 example - Ex01
// --------------------------------------------------------------

#include "Ex01PrimaryGeneratorAction.hh"

#include "G4Event.hh"
#include "G4GeneralParticleSource.hh"
#include "G4ParticleTable.hh"
#include "G4ParticleDefinition.hh"
#include "globals.hh"
#include "G4ParticleGun.hh"

using namespace CLHEP;


Ex01PrimaryGeneratorAction::Ex01PrimaryGeneratorAction()
{
  gps = new G4GeneralParticleSource();


  /*G4int n_particle = 1;
  gps = new G4ParticleGun(n_particle);
 
  G4ParticleTable* particleTable = G4ParticleTable::GetParticleTable();
 
  G4String particleName;
  //gps->SetParticleDefinition(particleTable->
  //FindParticle(particleName="gamma"));
  //Default energy,position,momentum
  gps->SetParticleEnergy(511.*keV);
  gps->SetParticlePosition(G4ThreeVector(0.0 , 0.0, 0.0));
  gps->SetParticleMomentumDirection(G4ThreeVector(0.,0.,-1.));*/
}

Ex01PrimaryGeneratorAction::~Ex01PrimaryGeneratorAction()
{
	delete gps;
}

void Ex01PrimaryGeneratorAction::GeneratePrimaries(G4Event* anEvent)
{
	gps->GeneratePrimaryVertex(anEvent);
}

