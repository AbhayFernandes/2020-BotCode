// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Subsystems/DriveSubSystem.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

DriveSubSystem::DriveSubSystem() : frc::Subsystem("DriveSubSystem") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    leftFront.reset(new WPI_TalonSRX(4));
    leftRear.reset(new WPI_TalonSRX(3));
    left = std::make_shared<frc::SpeedControllerGroup>(*leftFront, *leftRear  );
    rightFront.reset(new WPI_TalonSRX(2));
    rightRear.reset(new WPI_TalonSRX(1));
    right = std::make_shared<frc::SpeedControllerGroup>(*rightFront, *rightRear  );
    differentialDrive.reset(new frc::DifferentialDrive(*left, *right));

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    rightFront->SetInverted(true);
    rightRear->SetInverted(true);

    printf("Drive sub-system initialized\n");
}

void DriveSubSystem::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}

void DriveSubSystem::Periodic() 
{
    this->differentialDrive->TankDrive(leftSpeed, rightSpeed);
}

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.

