// RobotBuilder Version: 5.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// ROBOTBUILDER TYPE: Subsystem.

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Elevator.h"
#include <frc/smartdashboard/SmartDashboard.h>
#include <iostream>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

#include "RobotContainer.h"
#include "Globals.h"

Elevator::Elevator(){
    SetName("Elevator");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Elevator");

 AddChild("EndofactorMotor", &m_endofactorMotor);
 m_endofactorMotor.SetInverted(false);

 AddChild("ElevatorMotorB", &m_elevatorMotorB);
 m_elevatorMotorB.SetInverted(false);

 AddChild("ElevatorMotorA", &m_elevatorMotorA);
 m_elevatorMotorA.SetInverted(false);

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Elevator::Periodic() {
    // Put code here to be run every loop

    RobotContainer *container = RobotContainer::GetInstance();
    if(NULL == container){
        return;
    }

    frc::XboxController *joystick = container->getOperatorController();
    double elevatorCommand = joystick->GetLeftX();

    if(k_jsDeadband < elevatorCommand) {
        m_elevatorMotorA.Set(elevatorCommand);
        m_elevatorMotorB.Set(elevatorCommand);
    } else {
        m_elevatorMotorA.Set(0);
        m_elevatorMotorB.Set(0);
    }

    // Endofactor operation
    double endofactorCmd = joystick->GetRightX();
    if(k_jsDeadband < endofactorCmd) {
        m_endofactorMotor.Set(endofactorCmd);
    } else {
        m_endofactorMotor.Set(0);
    }

    // Print out for debugging
    std::cout << "ElvCmd: " << elevatorCommand << ";  SpinCmd: " << endofactorCmd << ";" << std::endl;
}

void Elevator::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
