/*----------------------------------------------------------------------------*/
/* Copyright (c) 2020 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <wpi/STLExtras.h>
#include <wpi/StringRef.h>

#include "glass/Model.h"

namespace glass {
class DataSource;
class CommandSelectorModel : public Model {
 public:
  virtual const char* GetName() const = 0;
  virtual DataSource* GetRunningData() = 0;
  virtual void SetRunning(bool run) = 0;
};
void DisplayCommandSelector(CommandSelectorModel* m);
}  // namespace glass