/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "WPILib.h"
#include "ctre/Phoenix.h"
#include "RobotMap.h"

class Lift : public frc::Subsystem {
private:
	TalonSRX*lift;

	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Lift();
	~Lift();
	TalonSRX * getLiftMotor();
	void InitDefaultCommand() override;
	void liftMove(double power);
	double getHeight();
	double getPosition();
	void resetEncoder();
};

