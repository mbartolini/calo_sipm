#include "ScintMessenger.hh"

#include "G4UIdirectory.hh"
#include "G4UIcmdWithADoubleAndUnit.hh"
#include "G4UIcmdWithADouble.hh"
#include "G4UIcmdWith3VectorAndUnit.hh"
#include "G4UIcmdWith3Vector.hh"
#include "G4UIcmdWithABool.hh"
#include "G4UIcmdWithAString.hh"
#include "G4UnitsTable.hh"
#include "globals.hh"

ScintMessenger::ScintMessenger():myScint()
{

   Dir2 = new G4UIdirectory("/scint/");
	Dir2->SetGuidance("UI commands for Scintillator.");

	detDir2 = new G4UIdirectory("/scint/");
	detDir2->SetGuidance("Scintillator Geometry.");

	
        sizeScint = new G4UIcmdWith3VectorAndUnit("/scint/size",this);
	sizeScint->SetGuidance("Set size of the scintillator in x,y,z");
	sizeScint->SetUnitCategory("Length");
	sizeScint->SetParameterName("sizeX", "sizeY", "sizeZ",false);
	sizeScint->AvailableForStates(G4State_PreInit,G4State_Idle);

	

}
			      
ScintMessenger::~ScintMessenger()
{

  delete detDir2;
  delete Dir;
  delete sizeScint;

}


void ScintMessenger::SetNewValue(G4UIcommand* command,G4String newValue)
{
  if( command == sizeScint )
    {
    }

}
