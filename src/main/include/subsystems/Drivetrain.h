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
#pragma once

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <frc2/command/SubsystemBase.h>
#include <frc/Encoder.h>
#include <frc/drive/DifferentialDrive.h>
#include <frc/motorcontrol/PWMSparkMax.h>
#include <frc/motorcontrol/PWMVictorSPX.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public frc2::SubsystemBase {
private:
    // It's desirable that everything possible is private except
    // for methods that implement subsystem capabilities
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    frc::Encoder m_rightEncoder{4, 5, false, frc::Encoder::k4X};
    frc::Encoder m_leftEncoder{2, 3, false, frc::Encoder::k4X};
    frc::Encoder m_frontEncoder{0, 1, false, frc::Encoder::k4X};
    frc::DifferentialDrive m_swervePodRight{m_topMotorRight, m_bottomMotorRight};
    frc::PWMSparkMax m_bottomMotorRight{5};
    frc::PWMSparkMax m_topMotorRight{4};
    frc::DifferentialDrive m_swervePodLeft{m_topMotorLeft, m_bottomMotorLeft};
    frc::PWMVictorSPX m_bottomMotorLeft{3};
    frc::PWMSparkMax m_topMotorLeft{2};
    frc::DifferentialDrive m_swervePodFront{m_frontTopMotor, m_frontBottomMotor};
    frc::PWMSparkMax m_frontBottomMotor{1};
    frc::PWMSparkMax m_frontTopMotor{0};

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
    Drivetrain();

    void Periodic() override;
    void SimulationPeriodic() override;
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS


};

